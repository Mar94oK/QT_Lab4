#ifndef NEXTFIGURE_H
#define NEXTFIGURE_H

#include <QWidget>
//#include "global_vars.h"
class Figure;

class NextFigure : public QWidget
{
    Q_OBJECT
public:
    explicit NextFigure(QWidget *parent = 0);

signals:

public slots:
    void setFigure(Figure *);

protected:
    Figure* m_next_figure;


    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // NEXTFIGURE_H

