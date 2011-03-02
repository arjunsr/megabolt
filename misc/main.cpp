#include<QApplication>
//#include<QDialog>
//#include<QPushButton>
#include<QLineEdit>
#include "manager.h"

int main(int argc,char *argv[]){
    QApplication app(argc,argv);
    Manager *man=new Manager;
    QLineEdit *text=new QLineEdit;
    text->show(); 
    QObject::connect(text,SIGNAL(textChanged()),man,SLOT(search(text->text())));         
    return app.exec();
}
