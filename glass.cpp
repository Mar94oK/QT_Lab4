#include "glass.h"
#include <QPainter>
#include <QBrush>
#include <QDebug>
#include "Figure.h"
#include <QKeyEvent>
#include "global_vars.h"
//third commit

Glass::Glass(QWidget *parent) : QWidget(parent)
{
    QObject::connect(this, SIGNAL(signalGlassInit()), this, SLOT(slotGlassInit()), Qt::QueuedConnection);
    emit signalGlassInit();
    m_gameOn = false;
    //m_currentFigure.reset( new Figure());
    //m_nextFigure.reset(new Figure());

}

void Glass::slotGlassInit()
{
  glassArray.resize(m_rows);
  for (auto& x: glassArray)
  {
      x.resize(m_columns);
  }
  this->clearGlass();
  this->setFixedSize((m_cellWidth*m_columns), (m_cellWidth*m_rows));
}

void Glass::clearGlass()
{
      glassArray.fill(glassArray[0].fill(emptyCell));
      m_score = 0;
      m_fallTimerInterval = 300;
}




void Glass::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    for (int i=0; i<m_rows; i++)
    {
        for (int j=0; j<m_columns; j++)
        {
            painter.fillRect(j*m_cellWidth, i*m_cellWidth, m_cellWidth-2, m_cellWidth-2, QBrush(glassArray[i][j]));
        }
    }
    if(m_gameOn)
    {
        m_currentFigure->paintFigure(painter,false);
        //m_nextFigure->
    }



}

void Glass::slotNewGame()
{
    m_gameOn = true;
    m_currentFigure.reset(new Figure());
    m_nextFigure.reset(new Figure());
    m_score = 0;
    curr_Timer = startTimer(m_fallTimerInterval);
    emit nextFigureChanged(m_nextFigure.get());
    setFocus();
    qDebug() << "The game has started!!!";

}

void Glass::slotPause()
{
    if (m_in_pause) {
        curr_Timer = startTimer(m_fallTimerInterval);
        m_in_pause = false;
    }
    else
    {
        killTimer(curr_Timer);
        curr_Timer = 0;
        m_in_pause = true;
    }


}

void Glass::timerEvent(QTimerEvent *event)
{
     moveFigureDown();
     //repaint();
}

void Glass::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {

        if ((this->m_currentFigure->column()) - 1 < 0)
        {
            qDebug() << "Cannot move Left!";
            return;
        }
        this->moveFigureLeft();
        update();

    }
    if (event->key() == Qt::Key_Right)
    {
        if ((this->m_currentFigure->column()) + 1 > total_columns-1)
        {
            qDebug() << "Cannot move Right!";
            return;
        }
        this->moveFigureRight();
        update();
    }
    if ((event->key() == Qt::Key_Up) || (event->key() == Qt::Key_Down))
    {
        this->rotateFigureColorsUp();
        update();
    }
}


void Glass::moveFigureDown()
{


    if ((m_currentFigure->bottom() != m_rows)
            && (glassArray[m_currentFigure->bottom()][m_currentFigure->column()] == emptyCell))
    {
     qDebug() << "Ready to go!";
     m_currentFigure->moveDown();
     update();
     qDebug() <<"Moved down";
    }
    else
    {
        qDebug() << "Stop here!";
        killTimer(curr_Timer);
        curr_Timer = 0;

        for (int i =0; i < m_currentFigure->length; i++)
        {
            glassArray[m_currentFigure->bottom()-m_currentFigure->length + i][m_currentFigure->column()] = m_currentFigure->FigureReturnColors()[i];
            qDebug() << "Writing colors!";
        }


        //Check if there's a place for new one!


        //Swap Pointers!
        m_currentFigure.swap(m_nextFigure);
        m_nextFigure->MakeRandomColors();
        m_nextFigure->FigureReset();
        emit nextFigureChanged(m_nextFigure.get());
        m_currentFigure->FigureReset();
        update();

        countingCows();
        refresh_glass_after_counting(); ///to search for...

        CheckIfTherIsAPlaceForNewFigure();





    }


    qDebug() << "Bottom = " << m_currentFigure->bottom();
}

void Glass::moveFigureLeft()
{

    if ((m_currentFigure->column() - 1) < 0)
    {
     qDebug() << "Can't move Left!";
     return;
    }
    if (glassArray[m_currentFigure->bottom()- 1][m_currentFigure->column()- 1] != emptyCell)
    {
     qDebug() << "Can't move Left!";
     return;
    }

    m_currentFigure->moveLeft();
}

void Glass::moveFigureRight()
{
    if ((m_currentFigure->column() + 1) > total_columns-1)
    {
     qDebug() << "Can't move Right!";
     return;
    }
    if (glassArray[m_currentFigure->bottom()- 1][m_currentFigure->column()+1] != emptyCell)
    {
     qDebug() << "Can't move Right!";
     return;
    }

    m_currentFigure->moveRight();
}

void Glass::rotateFigureColorsUp()
{
    m_currentFigure->rotateColorsUP();
}

void Glass::CheckIfTherIsAPlaceForNewFigure()
{
    if (glassArray[2][5] != emptyCell) //5 == start position! Make as a constant!
        qDebug() << "Stop the game here!";
    else
    {
        curr_Timer = startTimer(m_fallTimerInterval);
        m_in_pause = false;
    }

}

int Glass::countingCows()
{
    //find column to start
    int i = 0;
    int j = 0;
    bool end_searching =false;

    qDebug() << "Start counting...";
    while ((i < m_rows) )
    {

        while ((j < m_columns))
        {
           if (glassArray[i][j] == emptyCell)
           {
              //qDebug() << "Searching...." << i << j;
           }
           else
           {
               qDebug() << " Founded: " << i << j;
               end_searching = true;
               break;
           }
           j++;
         }
        if (end_searching) break;
        j = 0;
        i++;

    };
    int current_m_i = i;
    int current_m_j = j;

    int count_cows = 0;
    bool row_founded = false;
    //only in rows
    qDebug() << "F = " << current_m_i << "L = " << current_m_j;

    for (int f = current_m_i; f < m_rows; f++) //-1?
    {
        qDebug() << "Counting Cows! Rows...";
        for (int l = current_m_j; l< m_columns-1; l++)
        {
            qDebug() << "Counting Cows! Colums...";
            if ((glassArray[f][l] == glassArray[f][l+1])
                    && (glassArray[f][l] != emptyCell))
            {
                //check wether there are 3d,4th, 5th in a row...
                int curr_found_l = l+2;
                int same_in_a_row = 2;
                QColor curr_founded_color = glassArray[f][l+1];
                for (int j = curr_found_l; j < m_columns-1; j++)
                {
                    if (glassArray[f][j] == curr_founded_color)
                    {
                     ++same_in_a_row;
                    }

                }
                for (int y = 0; y < same_in_a_row; y++)
                {
                    glassArray[f][l+y] = emptyCell;
                }
                qDebug() << "Same in a row = " << same_in_a_row;

                //glassArray[f][l] = emptyCell;
                //glassArray[f][l+1] = emptyCell;
                count_cows+=same_in_a_row;
                m_score += count_cows; ///check if there'are multipile deletings...
                qDebug()<<"Same founded!!!" << count_cows;
                //row_founded = true;
                //break;

            }
            current_m_j = 0;
            //if (row_founded) break;
        }

    }


    emit SomeCowsCounted(m_score);

    return count_cows;
}

bool Glass::refresh_glass_after_counting()
{
    //find column to start
    int i = 0; // rows
    int j = 0; //columns
    bool end_searching =false;

    qDebug() << "Start searching for the start location to refresh...";
    while ((j < m_columns) )
    {

        while ((i < m_rows))
        {
           if (glassArray[i][j] == emptyCell)
           {
              qDebug() << "Searching...." << i << j;
           }
           else
           {
               qDebug() << " Founded: " << i << j;
               end_searching = true;
               break;
           }
           i++;
         }
        if (end_searching) break;
        i = 0;
        j++;

    };
    int current_m_i = i;
    int current_m_j = j; //col
    ///correct before this mark
    int curr_row = m_rows-1; //to place row as the last one...
    bool end_of_col_check = false;
    int colored_in_a_column = 0;
    int start_position = curr_row;
    int color_counter = 0;

    for (int k_col = current_m_j; k_col < m_columns; ++k_col)
    {
        for (int k_row = curr_row; k_row >= 0; --k_row)
        {
            if (glassArray[k_row][k_col] != emptyCell) ++colored_in_a_column;
        }
        qDebug() << " Colored in a column: " << colored_in_a_column;
        //colored_in_a_column = 0; //do not forget to clear at the end of a column work..
        color_counter = colored_in_a_column;

        while (glassArray[curr_row][k_col] != emptyCell)
        {

            --start_position;
            --curr_row;
            --color_counter;
        }
        ///here the start point is founded
        ///and the counter is known;

        for (int p = color_counter; p != 0; --p)
        {
            while (glassArray[curr_row][k_col] == emptyCell)
            {
                --curr_row;
            }
            //there is a position of the next colored object;
            glassArray[start_position][k_col] = glassArray[curr_row][k_col];
            glassArray[curr_row][k_col] = emptyCell;
            --start_position;
            --curr_row; //there is the next searching point for the next "p" cycle;
            qDebug() << " Replaced!!!" << colored_in_a_column;

        }

        curr_row = m_rows-1;
        colored_in_a_column = 0;
        start_position = curr_row;



    }



    return true;
}
