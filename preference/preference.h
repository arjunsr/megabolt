#ifndef PREFERENCE_H
#define PREFERENCE_H

#include<QDialog>
#include "ui_preferenceGui.h"
using namespace Ui;

class Preference : public QDialog,public Ui_dia_preferences{
    Q_OBJECT
    public:
        Preference(QWidget *parent);
};

#endif
