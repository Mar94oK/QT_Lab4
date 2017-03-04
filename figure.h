#ifndef FIGURE_H
#define FIGURE_H

#include <QColor>
#include <QPainter>
#include <QRect>
#include <QPoint>

//static bool is_Next_Figure;

class Figure
{

public:
    static constexpr int length = 3;

public:
    Figure();

    void setI(uint x)  {   m_i = x;  }
    void setJ(uint x)  {   m_j = x;  }
    uint getI() {  return m_i; }
    uint getk() {  return m_j; }
    void rotateColorsUP();    //вызываем в перегруженном методе нажатия Button press up
    void rotateColorsDOWN();
    void MakeRandomColors();
    void paintFigure(QPainter& painter, bool isNXTFigure);

    int bottom() const;
    int top() const;
    int column() const;


    void moveDown();
    void moveLeft();
    void moveRight();

    void FigureReset();
    QColor* FigureReturnColors();


private:

    const uint m_cellWidth = 20;
    QColor m_figure[3];
    int m_i;
    int m_j;
    uint m_w;

   // static QColor randomColors;



};
//QColor Glass:: m_emptyCellColor = QColor(150,150,150);
    //QColor Figure::randomColors = { Qt::green, Qt::blue, Qt::red };

//= { Qt::black, Qt::white, Qt::gray }

#endif // FIGURE_H
