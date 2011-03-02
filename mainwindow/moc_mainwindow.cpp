/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Mar 1 09:44:57 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x09,
      26,   11,   11,   11, 0x09,
      43,   11,   11,   11, 0x09,
      60,   11,   11,   11, 0x09,
      72,   11,   11,   11, 0x09,
      83,   11,   11,   11, 0x09,
      93,   11,   11,   11, 0x09,
     101,   11,   11,   11, 0x09,
     108,   11,   11,   11, 0x09,
     125,   11,   11,   11, 0x09,
     139,   11,   11,   11, 0x09,
     151,   11,   11,   11, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0addDownload()\0importDownload()\0"
    "exportDownload()\0selectAll()\0startAll()\0"
    "stopAll()\0start()\0stop()\0removeDownload()\0"
    "preferences()\0scheduler()\0about()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: addDownload(); break;
        case 1: importDownload(); break;
        case 2: exportDownload(); break;
        case 3: selectAll(); break;
        case 4: startAll(); break;
        case 5: stopAll(); break;
        case 6: start(); break;
        case 7: stop(); break;
        case 8: removeDownload(); break;
        case 9: preferences(); break;
        case 10: scheduler(); break;
        case 11: about(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
static const uint qt_meta_data_AddDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_AddDialog[] = {
    "AddDialog\0"
};

const QMetaObject AddDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddDialog,
      qt_meta_data_AddDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AddDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AddDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AddDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddDialog))
        return static_cast<void*>(const_cast< AddDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
