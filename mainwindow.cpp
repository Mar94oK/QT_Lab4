#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->buttonNewGame,SIGNAL(clicked()),ui->widget, SLOT(slotNewGame()));
    connect(ui->widget, &Glass::nextFigureChanged, ui->nextFigure, &NextFigure::setFigure);
    QObject::connect(ui->buttonPause, SIGNAL(clicked(bool)),ui->widget, SLOT(slotPause()));
    connect(ui->widget, &Glass::SomeCowsCounted, ui->scoreLCD, static_cast<void (QLCDNumber::*)(int)>(&QLCDNumber::display));
}

MainWindow::~MainWindow()
{
    delete ui;
}
