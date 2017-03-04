#include "nextfigure.h"
#include "Figure.h"
#include <QPainter>
#include <QDebug>
#include "global_vars.h"

NextFigure::NextFigure(QWidget *parent) : QWidget(parent) //,m_next_figure {}
{
    //m_next_figure = new Figure();
    m_next_figure = nullptr;
}

void NextFigure::setFigure(Figure *figure)
{
    //delete m_next_figure;
    m_next_figure = figure;
    update();
    //repaint();
    qDebug() << "Painter called!"<<figure;
}

void NextFigure::paintEvent(QPaintEvent *event)
{
    qDebug() <<"*****";
    if (!m_next_figure ){
        return;
    }
   // is_Next_Figure = true;

    uint m_cellWidth = 20;
    QPainter painter(this);
    painter.translate((rect().width() - m_cellWidth) / 2, (rect().height() - m_cellWidth) / 2);
    m_next_figure->paintFigure(painter, true);

}


