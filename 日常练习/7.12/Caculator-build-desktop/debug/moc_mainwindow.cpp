/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Jul 12 16:34:37 2018
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Caculator/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      58,   11,   11,   11, 0x08,
      81,   11,   11,   11, 0x08,
     104,   11,   11,   11, 0x08,
     127,   11,   11,   11, 0x08,
     150,   11,   11,   11, 0x08,
     173,   11,   11,   11, 0x08,
     196,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,
     242,   11,   11,   11, 0x08,
     265,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     311,   11,   11,   11, 0x08,
     334,   11,   11,   11, 0x08,
     357,   11,   11,   11, 0x08,
     380,   11,   11,   11, 0x08,
     403,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_m22Button_clicked()\0"
    "on_m23Button_clicked()\0on_m24Button_clicked()\0"
    "on_m25Button_clicked()\0on_m31Button_clicked()\0"
    "on_m32Button_clicked()\0on_m33Button_clicked()\0"
    "on_m34Button_clicked()\0on_m35Button_clicked()\0"
    "on_m41Button_clicked()\0on_m42Button_clicked()\0"
    "on_m43Button_clicked()\0on_m44Button_clicked()\0"
    "on_m45Button_clicked()\0on_m51Button_clicked()\0"
    "on_m52Button_clicked()\0on_m53Button_clicked()\0"
    "on_m54Button_clicked()\0"
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
        case 0: on_m22Button_clicked(); break;
        case 1: on_m23Button_clicked(); break;
        case 2: on_m24Button_clicked(); break;
        case 3: on_m25Button_clicked(); break;
        case 4: on_m31Button_clicked(); break;
        case 5: on_m32Button_clicked(); break;
        case 6: on_m33Button_clicked(); break;
        case 7: on_m34Button_clicked(); break;
        case 8: on_m35Button_clicked(); break;
        case 9: on_m41Button_clicked(); break;
        case 10: on_m42Button_clicked(); break;
        case 11: on_m43Button_clicked(); break;
        case 12: on_m44Button_clicked(); break;
        case 13: on_m45Button_clicked(); break;
        case 14: on_m51Button_clicked(); break;
        case 15: on_m52Button_clicked(); break;
        case 16: on_m53Button_clicked(); break;
        case 17: on_m54Button_clicked(); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
