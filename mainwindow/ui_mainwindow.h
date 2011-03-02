/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Mar 1 09:34:39 2011
**      by: Qt User Interface Compiler version 4.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExport;
    QAction *actionSelect_All;
    QAction *actionStart_All;
    QAction *actionStop_All;
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionRemove;
    QAction *actionPreference;
    QAction *actionScheduler;
    QAction *actionAbout;
    QAction *actionQuit;
    QAction *actionAdd;
    QAction *actionImport;
    QAction *actionSide_Bar;
    QAction *actionStatus;
    QWidget *centralwidget;
    QListWidget *listWidget_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuOptions;
    QMenu *menuHelp;
    QMenu *menuView;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QListWidget *listWidget;
	QLineEdit *searchentry;
    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(576, 335);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionStart_All = new QAction(MainWindow);
        actionStart_All->setObjectName(QString::fromUtf8("actionStart_All"));
        actionStop_All = new QAction(MainWindow);
        actionStop_All->setObjectName(QString::fromUtf8("actionStop_All"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        actionPreference = new QAction(MainWindow);
        actionPreference->setObjectName(QString::fromUtf8("actionPreference"));
        actionScheduler = new QAction(MainWindow);
        actionScheduler->setObjectName(QString::fromUtf8("actionScheduler"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionImport = new QAction(MainWindow);
        actionImport->setObjectName(QString::fromUtf8("actionImport"));
        actionSide_Bar = new QAction(MainWindow);
        actionSide_Bar->setObjectName(QString::fromUtf8("actionSide_Bar"));
        actionStatus = new QAction(MainWindow);
        actionStatus->setObjectName(QString::fromUtf8("actionStatus"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget_2 = new QListWidget(centralwidget);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 461, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 576, 20));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        listWidget = new QListWidget(dockWidgetContents);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 101, 311));
        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionAdd);
        menuFile->addAction(actionImport);
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuEdit->addAction(actionSelect_All);
        menuEdit->addAction(actionStart_All);
        menuEdit->addAction(actionStop_All);
        menuEdit->addAction(actionStart);
        menuEdit->addAction(actionStop);
        menuEdit->addAction(actionRemove);
        menuOptions->addAction(actionPreference);
        menuOptions->addAction(actionScheduler);
        menuHelp->addAction(actionAbout);
        menuView->addAction(actionSide_Bar);
        menuView->addAction(actionStatus);
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionStart);
        toolBar->addAction(actionStop);
        toolBar->addAction(actionRemove);
        toolBar->addAction(actionSelect_All);
        searchentry=new QLineEdit("search");
		toolBar->addWidget(searchentry);
        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionStart_All->setText(QApplication::translate("MainWindow", "Start All", 0, QApplication::UnicodeUTF8));
        actionStop_All->setText(QApplication::translate("MainWindow", "Stop All", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionRemove->setText(QApplication::translate("MainWindow", "Remove", 0, QApplication::UnicodeUTF8));
        actionPreference->setText(QApplication::translate("MainWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        actionScheduler->setText(QApplication::translate("MainWindow", "Scheduler", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionAdd->setText(QApplication::translate("MainWindow", "Add", 0, QApplication::UnicodeUTF8));
        actionImport->setText(QApplication::translate("MainWindow", "Import", 0, QApplication::UnicodeUTF8));
        actionSide_Bar->setText(QApplication::translate("MainWindow", "Side Bar", 0, QApplication::UnicodeUTF8));
        actionStatus->setText(QApplication::translate("MainWindow", "Status", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "test1", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "test2", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "test3", 0, QApplication::UnicodeUTF8));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "&Actions", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "&Options", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "All", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "Downloading", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "Stopped", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(3);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "Finished", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
