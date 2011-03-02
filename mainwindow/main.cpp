#include<QApplication>
#include "mainwindow.h"
#include "manager.h"

int main(int argc,char *argv[]){
	
	QApplication app(argc,argv);
	
	
	Manager man;
	man.show();
	return app.exec();
	
}

