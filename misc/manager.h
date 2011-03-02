#ifndef MANAGER_H
#define MANAGER_H
#include<QString>

class Manager{
    Q_OBJECT   
    public:
        Manager();
    public slots:
        int search(const QString *);
};

#endif
