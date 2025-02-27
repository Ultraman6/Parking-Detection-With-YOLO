/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Server/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "on_btnFS_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 18), // "on_btnQuit_clicked"
QT_MOC_LITERAL(4, 48, 7), // "Display"
QT_MOC_LITERAL(5, 56, 5), // "index"
QT_MOC_LITERAL(6, 62, 4), // "Tick"
QT_MOC_LITERAL(7, 67, 4), // "Play"
QT_MOC_LITERAL(8, 72, 4), // "Stop"
QT_MOC_LITERAL(9, 77, 11), // "tickManager"
QT_MOC_LITERAL(10, 89, 5), // "speed"
QT_MOC_LITERAL(11, 95, 24), // "on_slidVideo_sliderMoved"
QT_MOC_LITERAL(12, 120, 8), // "position"
QT_MOC_LITERAL(13, 129, 21), // "on_btnLecture_clicked"
QT_MOC_LITERAL(14, 151, 26), // "on_spnVitesse_valueChanged"
QT_MOC_LITERAL(15, 178, 4), // "arg1"
QT_MOC_LITERAL(16, 183, 19), // "on_clientConnection"
QT_MOC_LITERAL(17, 203, 22), // "on_clientDisconnection"
QT_MOC_LITERAL(18, 226, 12) // "convertIndex"

    },
    "MainWindow\0on_btnFS_clicked\0\0"
    "on_btnQuit_clicked\0Display\0index\0Tick\0"
    "Play\0Stop\0tickManager\0speed\0"
    "on_slidVideo_sliderMoved\0position\0"
    "on_btnLecture_clicked\0on_spnVitesse_valueChanged\0"
    "arg1\0on_clientConnection\0"
    "on_clientDisconnection\0convertIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    1,   87,    2, 0x08 /* Private */,
      11,    1,   90,    2, 0x08 /* Private */,
      13,    0,   93,    2, 0x08 /* Private */,
      14,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::Int,    5,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnFS_clicked(); break;
        case 1: _t->on_btnQuit_clicked(); break;
        case 2: _t->Display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Tick(); break;
        case 4: _t->Play(); break;
        case 5: _t->Stop(); break;
        case 6: _t->tickManager((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_slidVideo_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_btnLecture_clicked(); break;
        case 9: _t->on_spnVitesse_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_clientConnection(); break;
        case 11: _t->on_clientDisconnection(); break;
        case 12: { QString _r = _t->convertIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
