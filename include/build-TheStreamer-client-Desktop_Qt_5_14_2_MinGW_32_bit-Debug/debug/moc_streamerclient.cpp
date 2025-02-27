/****************************************************************************
** Meta object code from reading C++ file 'streamerclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Client/streamerclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamerclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TheStreamerClient_t {
    QByteArrayData data[11];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TheStreamerClient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TheStreamerClient_t qt_meta_stringdata_TheStreamerClient = {
    {
QT_MOC_LITERAL(0, 0, 17), // "TheStreamerClient"
QT_MOC_LITERAL(1, 18, 10), // "signalQuit"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "slotNouvelleImage"
QT_MOC_LITERAL(4, 48, 6), // "baImag"
QT_MOC_LITERAL(5, 55, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(6, 80, 4), // "arg1"
QT_MOC_LITERAL(7, 85, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(8, 112, 26), // "on_checkBox_3_stateChanged"
QT_MOC_LITERAL(9, 139, 16), // "on_btnFS_clicked"
QT_MOC_LITERAL(10, 156, 18) // "on_btnQuit_clicked"

    },
    "TheStreamerClient\0signalQuit\0\0"
    "slotNouvelleImage\0baImag\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_checkBox_2_stateChanged\0"
    "on_checkBox_3_stateChanged\0on_btnFS_clicked\0"
    "on_btnQuit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TheStreamerClient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    1,   56,    2, 0x08 /* Private */,
       8,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TheStreamerClient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TheStreamerClient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalQuit(); break;
        case 1: _t->slotNouvelleImage((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_3_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btnFS_clicked(); break;
        case 6: _t->on_btnQuit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TheStreamerClient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TheStreamerClient::signalQuit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TheStreamerClient::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TheStreamerClient.data,
    qt_meta_data_TheStreamerClient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TheStreamerClient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TheStreamerClient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TheStreamerClient.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TheStreamerClient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TheStreamerClient::signalQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
