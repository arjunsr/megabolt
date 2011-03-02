#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include<QDialog>
#include "ui_mainwindow.h"

class MainWindow :public QMainWindow,private Ui::MainWindow{
	Q_OBJECT
	public:
		
		MainWindow(QWidget *parent = 0);
		~MainWindow(){}
	protected:
		void setupActions();
	protected slots:
		void addDownload();
		void importDownload();
		void exportDownload();
		void selectAll();
		void startAll();
		void stopAll();
		void start();
		void stop();
		void removeDownload();
		void preferences();
		void scheduler();
		void about();
		
};

class AddDialog :public QDialog{
    Q_OBJECT
  public:
	QLineEdit *line;
	QPushButton *but_add;
    AddDialog(QWidget  *parent = 0);
    ~AddDialog(){}
};

#endif  //MAINWINDOW_H
