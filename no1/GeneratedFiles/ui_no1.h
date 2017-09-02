/********************************************************************************
** Form generated from reading UI file 'no1.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NO1_H
#define UI_NO1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_no1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *no1Class)
    {
        if (no1Class->objectName().isEmpty())
            no1Class->setObjectName(QStringLiteral("no1Class"));
        no1Class->resize(600, 400);
        menuBar = new QMenuBar(no1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        no1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(no1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        no1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(no1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        no1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(no1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        no1Class->setStatusBar(statusBar);

        retranslateUi(no1Class);

        QMetaObject::connectSlotsByName(no1Class);
    } // setupUi

    void retranslateUi(QMainWindow *no1Class)
    {
        no1Class->setWindowTitle(QApplication::translate("no1Class", "no1", 0));
    } // retranslateUi

};

namespace Ui {
    class no1Class: public Ui_no1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NO1_H
