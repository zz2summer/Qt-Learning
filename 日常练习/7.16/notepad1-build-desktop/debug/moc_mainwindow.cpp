/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../notepad1/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      26,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      56,   11,   11,   11, 0x08,
      73,   11,   11,   11, 0x08,
      88,   11,   11,   11, 0x08,
     103,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     132,   11,   11,   11, 0x08,
     148,   11,   11,   11, 0x08,
     165,   11,   11,   11, 0x08,
     183,   11,   11,   11, 0x08,
     197,   11,   11,   11, 0x08,
     212,   11,   11,   11, 0x08,
     231,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0newFileSlot()\0openFileSlot()\0"
    "saveFileSlot()\0saveAsFileSlot()\0"
    "exitFileSlot()\0undoEditSlot()\0"
    "cutEditSlot()\0copyEditSlot()\0"
    "pasteEditSlot()\0deleteEditSlot()\0"
    "setDateTimeSlot()\0setFontSlot()\0"
    "setColorSlot()\0aboutWebSiteSlot()\0"
    "on_aboutMeAction_triggered()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->newFileSlot(); break;
        case 1: _t->openFileSlot(); break;
        case 2: _t->saveFileSlot(); break;
        case 3: _t->saveAsFileSlot(); break;
        case 4: _t->exitFileSlot(); break;
        case 5: _t->undoEditSlot(); break;
        case 6: _t->cutEditSlot(); break;
        case 7: _t->copyEditSlot(); break;
        case 8: _t->pasteEditSlot(); break;
        case 9: _t->deleteEditSlot(); break;
        case 10: _t->setDateTimeSlot(); break;
        case 11: _t->setFontSlot(); break;
        case 12: _t->setColorSlot(); break;
        case 13: _t->aboutWebSiteSlot(); break;
        case 14: _t->on_aboutMeAction_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
