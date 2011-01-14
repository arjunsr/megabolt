#include<QApplication>
#include<QDialog>
#include "preference.h"

using namespace Ui;

int main(int argc,char *argv[]){
    
    QApplication app(argc,argv);
    Preference *pref=new Preference(0);
    pref->show();
    return app.exec();
}
