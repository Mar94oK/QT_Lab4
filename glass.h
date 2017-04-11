#ifndef GLASS_H
#define GLASS_H

#include <QWidget>
#include <QColor>
#include <QVector>
#include <QPainter>
#include "figure.h"
#include <QPointer>
#include <memory>


#define emptyCell QColor(150,150,150)

class Glass : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(uint rows READ rows WRITE setRows)
    Q_PROPERTY(uint columns READ columns WRITE setColumns)
public:
    explicit Glass(QWidget *parent = 0);

    uint rows() const
    {
        return m_rows;
    }

    uint columns() const
    {
        return m_columns;
    }

signals:

    void signalGlassInit();

public slots:

    void setRows(uint rows)
    {
        m_rows = rows;
    }

    void setColumns(uint columns)
    {
        m_columns = columns;
    }


    void slotGlassInit();
    void moveFigureDown();
    void moveFigureLeft();
    void moveFigureRight();
    void rotateFigureColorsUp();
    void DropTheFigure();

    void CheckIfTherIsAPlaceForNewFigure();
    int  countingCows();
    bool refresh_glass_after_counting();

private:
    void clearGlass();


private:
    const uint m_cellWidth = 20;
    uint m_fallTimerInterval;

    uint m_rows;
    uint m_columns;

    bool m_gameOn;
    uint m_score;

    bool m_in_pause;

    static QColor m_emptyCellColor;
    QVector<QVector<QColor>>glassArray;

    std::unique_ptr <Figure> m_currentFigure;
    std::unique_ptr <Figure> m_nextFigure;


     int curr_Timer;



    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event);

public slots:

    void slotNewGame();
    void slotPause();


signals:

    void nextFigureChanged(Figure *);
    void SomeCowsCounted(int);



    // QObject interface
protected:
    void timerEvent(QTimerEvent *event);

    // QWidget interface
protected:
    void keyPressEvent(QKeyEvent *event);
};


    //QColor Glass:: m_emptyCellColor = QColor(150,150,150);
#endif // GLASS_H
