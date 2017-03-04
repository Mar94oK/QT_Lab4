#include "figure.h"
#include <random>
#include <QPainter>
#include <QTime>
#include <QGlobal.h>
#include "global_vars.h"
#include <QDebug>
#include <glass.h>

//QColor m_figure[3];
//uint m_i;
//uint m_j;
//uint m_w;



Figure::Figure()
{
    m_i = 0; //i = row; j = column
    m_j = 5;
    MakeRandomColors();
    //is_Next_Figure = false;
}

void Figure::rotateColorsUP()
{
     QColor clr_rotated[3];
     int k = length -1;
     for (int i = 0; i < length; i++, k--)
     {
         clr_rotated[k] = m_figure[i];

     }
     for (int n = 0; n<length; n++)
     {
         m_figure[n] = clr_rotated[n];
     }
}


///метод установки в нужное место (setPos)


void Figure::MakeRandomColors()
{
    constexpr Qt::GlobalColor availableColors[] = {
        Qt::red,
        Qt::green,
        Qt::blue,
        Qt::yellow,
        Qt::black
    };

    constexpr size_t colorCount = sizeof(availableColors) / sizeof(*availableColors);


    for (int i = 0; i < length; ++i){
        m_figure[i] = availableColors[qrand() % colorCount];

    }
}

void Figure::paintFigure(QPainter &painter, bool isNXTFigure)
{
    if (!isNXTFigure)
    {
        const int figureTopPos = top()*m_cellWidth;
        const int figureLeftPos = column() * m_cellWidth;

        for (int i = 0; i < length; ++i){
            QPoint pt = QPoint(figureLeftPos, figureTopPos + m_cellWidth * i);
            QSize sz = QSize(m_cellWidth-2, m_cellWidth-2);
            QRect currentCell(pt, sz);
            painter.fillRect(currentCell, m_figure[i]);
            painter.drawRect(currentCell);
        }
    }
    else
    {
        //is_Next_Figure = false;
        qDebug() << "Printing Next Figure";
        const int figureTopPos = top()*m_cellWidth;
        const int figureLeftPos = (column()-2) * m_cellWidth;

        for (int i = 0; i < length; ++i){
            QPoint pt = QPoint(figureLeftPos, figureTopPos + m_cellWidth * i);
            QSize sz = QSize(m_cellWidth-2, m_cellWidth-2);
            QRect currentCell(pt, sz);
            painter.fillRect(currentCell, m_figure[i]);
            painter.drawRect(currentCell);
        }
    }

}


int Figure::bottom() const
{
    return m_i + length;
}

int Figure::top() const
{
    return m_i;
}

int Figure::column() const
{
    return m_j;
}


void Figure::moveDown()
{
    ++m_i;
    qDebug() << "Current row = " << m_i;
}

void Figure::moveLeft()
{

    if ((m_j-1) < 0) return;
    --m_j;
    qDebug() << "Column = " << m_j;
}

void Figure::moveRight()
{
    if ((m_j + 1) > total_columns-1) return;
    ++m_j;
    qDebug() << "Column = " << m_j;
}

void Figure::FigureReset()
{
    m_i = 0;
    m_j = 5;
    //MakeRandomColors();
    qDebug()<< "Reseted!!!";
}

QColor *Figure::FigureReturnColors()
{
    return m_figure;
}



