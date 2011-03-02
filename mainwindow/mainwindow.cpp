#include<QtGui>
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent){
	setupUi(this);
	setupActions();
	statusBar()->showMessage(tr("This is a test status"));
}

void MainWindow::setupActions(){
	connect(actionQuit,SIGNAL(triggered(bool)),qApp,SLOT(quit()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(addDownload()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(importDownload()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(exportDownload()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(selectAll()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(startAll()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(stopAll()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(start()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(stop()));
	connect(actionAdd,SIGNAL(triggered(bool)),this,SLOT(removeDownload()));
	connect(actionAbout,SIGNAL(triggered(bool)),this,SLOT(preferences()));
	connect(actionAbout,SIGNAL(triggered(bool)),this,SLOT(scheduler()));
	connect(actionAbout,SIGNAL(triggered(bool)),this,SLOT(about()));
}

void MainWindow::addDownload(){
	  
	  QString url;
      AddDialog *add_dialog=new AddDialog(this);
      if(add_dialog->exec()){
			url=add_dialog->line->text();
			//QMessageBox::information(this,tr("Note"),tr("working"));
			/*
			 * write code here
			 */
	  }
      delete add_dialog;
}

void MainWindow::importDownload(){
}

void MainWindow::exportDownload(){
}

void MainWindow::selectAll(){
}

void MainWindow::startAll(){
}

void MainWindow::stopAll(){
}

void MainWindow::start(){
}

void MainWindow::stop(){
}

void MainWindow::removeDownload(){
}

void MainWindow::preferences(){
}

void MainWindow::scheduler(){
}

void MainWindow::about(){
	QMessageBox::about(this,tr("About"),tr("<h1>MegaBolt</h1>\nVersion 0.1\n"));
}
void MainWindow::searchList(QString *key){
	
}

AddDialog::AddDialog(QWidget *parent): QDialog(parent){
	QWidget  *add=new QWidget(this);
	QHBoxLayout *addLineLayout=new QHBoxLayout(add);
	line=new QLineEdit();
	but_add=new QPushButton(tr("Add"));
	addLineLayout->addWidget(line);
	addLineLayout->addWidget(but_add);
	add->resize(700,50);
	connect(but_add,SIGNAL(clicked()),this,SLOT(accept()));
	add->show();
}
