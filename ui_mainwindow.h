/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "glass.h"
#include "nextfigure.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    NextFigure *nextFigure;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    Glass *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonNewGame;
    QPushButton *buttonPause;
    QPushButton *buttonExit;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLCDNumber *scoreLCD;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menuBar;
    QMenu *menu_Game;
    QMenu *menu_Tutorial;
    QMenu *menu_About;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(568, 585);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 571, 521));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        nextFigure = new NextFigure(horizontalLayoutWidget);
        nextFigure->setObjectName(QStringLiteral("nextFigure"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nextFigure->sizePolicy().hasHeightForWidth());
        nextFigure->setSizePolicy(sizePolicy1);
        label = new QLabel(nextFigure);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 71, 41));

        horizontalLayout_3->addWidget(nextFigure);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        widget = new Glass(horizontalLayoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setFocusPolicy(Qt::StrongFocus);
        widget->setProperty("rows", QVariant(20u));
        widget->setProperty("columns", QVariant(10u));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, 0, 191, 541));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        verticalLayout_3->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonNewGame = new QPushButton(horizontalLayoutWidget);
        buttonNewGame->setObjectName(QStringLiteral("buttonNewGame"));
        buttonNewGame->setMinimumSize(QSize(100, 0));
        buttonNewGame->setMaximumSize(QSize(300, 300));

        verticalLayout->addWidget(buttonNewGame);

        buttonPause = new QPushButton(horizontalLayoutWidget);
        buttonPause->setObjectName(QStringLiteral("buttonPause"));
        buttonPause->setCursor(QCursor(Qt::ArrowCursor));

        verticalLayout->addWidget(buttonPause);

        buttonExit = new QPushButton(horizontalLayoutWidget);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        buttonExit->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(buttonExit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        scoreLCD = new QLCDNumber(horizontalLayoutWidget);
        scoreLCD->setObjectName(QStringLiteral("scoreLCD"));
        scoreLCD->setMinimumSize(QSize(100, 0));
        scoreLCD->setMaximumSize(QSize(100, 16777215));

        verticalLayout->addWidget(scoreLCD);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 568, 20));
        menu_Game = new QMenu(menuBar);
        menu_Game->setObjectName(QStringLiteral("menu_Game"));
        menu_Tutorial = new QMenu(menuBar);
        menu_Tutorial->setObjectName(QStringLiteral("menu_Tutorial"));
        menu_About = new QMenu(menuBar);
        menu_About->setObjectName(QStringLiteral("menu_About"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_Game->menuAction());
        menuBar->addAction(menu_Tutorial->menuAction());
        menuBar->addAction(menu_About->menuAction());
        menu_Game->addAction(action_Exit);

        retranslateUi(MainWindow);
        QObject::connect(buttonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(action_Exit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("MainWindow", "&Exit", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        buttonNewGame->setText(QApplication::translate("MainWindow", "NewGame", Q_NULLPTR));
        buttonPause->setText(QApplication::translate("MainWindow", "Pause", Q_NULLPTR));
        buttonExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Score", Q_NULLPTR));
        menu_Game->setTitle(QApplication::translate("MainWindow", "&Game", Q_NULLPTR));
        menu_Tutorial->setTitle(QApplication::translate("MainWindow", "&Tutorial", Q_NULLPTR));
        menu_About->setTitle(QApplication::translate("MainWindow", "&About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
