/********************************************************************************
** Form generated from reading UI file 'preferenceGui.ui'
**
** Created: Fri Jan 14 21:41:39 2011
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCEGUI_H
#define UI_PREFERENCEGUI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dia_preferences
{
public:
    QTabWidget *tab_network;
    QWidget *tab_general;
    QCheckBox *check_startup;
    QLabel *label;
    QLineEdit *text_saveto;
    QPushButton *but_browse;
    QWidget *tab_logins;
    QLineEdit *text_user;
    QLineEdit *text_password;
    QPushButton *but_add;
    QLineEdit *text_server;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *but_remove;
    QWidget *tab;
    QLabel *label_3;
    QLineEdit *text_proxy;
    QCheckBox *check_proxy;
    QComboBox *comb_threads;
    QPushButton *but_ok;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *dia_preferences)
    {
        if (dia_preferences->objectName().isEmpty())
            dia_preferences->setObjectName(QString::fromUtf8("dia_preferences"));
        dia_preferences->resize(400, 300);
        tab_network = new QTabWidget(dia_preferences);
        tab_network->setObjectName(QString::fromUtf8("tab_network"));
        tab_network->setGeometry(QRect(10, 10, 381, 251));
        tab_general = new QWidget();
        tab_general->setObjectName(QString::fromUtf8("tab_general"));
        check_startup = new QCheckBox(tab_general);
        check_startup->setObjectName(QString::fromUtf8("check_startup"));
        check_startup->setGeometry(QRect(30, 30, 151, 20));
        label = new QLabel(tab_general);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 70, 101, 21));
        text_saveto = new QLineEdit(tab_general);
        text_saveto->setObjectName(QString::fromUtf8("text_saveto"));
        text_saveto->setGeometry(QRect(120, 70, 201, 21));
        but_browse = new QPushButton(tab_general);
        but_browse->setObjectName(QString::fromUtf8("but_browse"));
        but_browse->setGeometry(QRect(330, 70, 16, 25));
        tab_network->addTab(tab_general, QString());
        tab_logins = new QWidget();
        tab_logins->setObjectName(QString::fromUtf8("tab_logins"));
        text_user = new QLineEdit(tab_logins);
        text_user->setObjectName(QString::fromUtf8("text_user"));
        text_user->setGeometry(QRect(130, 140, 151, 21));
        text_password = new QLineEdit(tab_logins);
        text_password->setObjectName(QString::fromUtf8("text_password"));
        text_password->setGeometry(QRect(130, 170, 151, 21));
        but_add = new QPushButton(tab_logins);
        but_add->setObjectName(QString::fromUtf8("but_add"));
        but_add->setGeometry(QRect(310, 140, 61, 25));
        text_server = new QLineEdit(tab_logins);
        text_server->setObjectName(QString::fromUtf8("text_server"));
        text_server->setGeometry(QRect(130, 110, 231, 21));
        label_2 = new QLabel(tab_logins);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 110, 57, 15));
        label_4 = new QLabel(tab_logins);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 140, 71, 16));
        label_5 = new QLabel(tab_logins);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 170, 81, 16));
        but_remove = new QPushButton(tab_logins);
        but_remove->setObjectName(QString::fromUtf8("but_remove"));
        but_remove->setEnabled(false);
        but_remove->setGeometry(QRect(310, 170, 61, 25));
        tab_network->addTab(tab_logins, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 131, 16));
        text_proxy = new QLineEdit(tab);
        text_proxy->setObjectName(QString::fromUtf8("text_proxy"));
        text_proxy->setEnabled(false);
        text_proxy->setGeometry(QRect(140, 40, 201, 21));
        check_proxy = new QCheckBox(tab);
        check_proxy->setObjectName(QString::fromUtf8("check_proxy"));
        check_proxy->setGeometry(QRect(30, 40, 84, 20));
        comb_threads = new QComboBox(tab);
        comb_threads->setObjectName(QString::fromUtf8("comb_threads"));
        comb_threads->setGeometry(QRect(160, 80, 41, 22));
        tab_network->addTab(tab, QString());
        but_ok = new QPushButton(dia_preferences);
        but_ok->setObjectName(QString::fromUtf8("but_ok"));
        but_ok->setGeometry(QRect(300, 270, 83, 25));
        verticalLayoutWidget = new QWidget(dia_preferences);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(340, 260, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(dia_preferences);

        tab_network->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(dia_preferences);
    } // setupUi

    void retranslateUi(QDialog *dia_preferences)
    {
        dia_preferences->setWindowTitle(QApplication::translate("dia_preferences", "Preferences", 0, QApplication::UnicodeUTF8));
        check_startup->setText(QApplication::translate("dia_preferences", "Launch on startup.", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("dia_preferences", "Save to folder", 0, QApplication::UnicodeUTF8));
        but_browse->setText(QApplication::translate("dia_preferences", "...", 0, QApplication::UnicodeUTF8));
        tab_network->setTabText(tab_network->indexOf(tab_general), QApplication::translate("dia_preferences", "General", 0, QApplication::UnicodeUTF8));
        but_add->setText(QApplication::translate("dia_preferences", "Add", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("dia_preferences", "Server", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("dia_preferences", "Username", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("dia_preferences", "Password", 0, QApplication::UnicodeUTF8));
        but_remove->setText(QApplication::translate("dia_preferences", "Remove", 0, QApplication::UnicodeUTF8));
        tab_network->setTabText(tab_network->indexOf(tab_logins), QApplication::translate("dia_preferences", "Logins", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("dia_preferences", "Number of Threads", 0, QApplication::UnicodeUTF8));
        check_proxy->setText(QApplication::translate("dia_preferences", "Proxy", 0, QApplication::UnicodeUTF8));
        comb_threads->clear();
        comb_threads->insertItems(0, QStringList()
         << QApplication::translate("dia_preferences", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dia_preferences", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dia_preferences", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("dia_preferences", "8", 0, QApplication::UnicodeUTF8)
        );
        tab_network->setTabText(tab_network->indexOf(tab), QApplication::translate("dia_preferences", "Network", 0, QApplication::UnicodeUTF8));
        but_ok->setText(QApplication::translate("dia_preferences", "&Ok", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class dia_preferences: public Ui_dia_preferences {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCEGUI_H
