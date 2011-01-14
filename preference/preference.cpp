#include<QtGui>
#include<QWidget>
#include "preference.h"
#include "ui_preferenceGui.h"
//using namespace Ui;

Preference::Preference(QWidget *parent) : QDialog(parent){
    setupUi(this);
}
