/****************************************************************************
** Meta object code from reading C++ file 'glass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../glass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Glass_t {
    QByteArrayData data[20];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Glass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Glass_t qt_meta_stringdata_Glass = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Glass"
QT_MOC_LITERAL(1, 6, 15), // "signalGlassInit"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "nextFigureChanged"
QT_MOC_LITERAL(4, 41, 7), // "Figure*"
QT_MOC_LITERAL(5, 49, 15), // "SomeCowsCounted"
QT_MOC_LITERAL(6, 65, 7), // "setRows"
QT_MOC_LITERAL(7, 73, 4), // "rows"
QT_MOC_LITERAL(8, 78, 10), // "setColumns"
QT_MOC_LITERAL(9, 89, 7), // "columns"
QT_MOC_LITERAL(10, 97, 13), // "slotGlassInit"
QT_MOC_LITERAL(11, 111, 14), // "moveFigureDown"
QT_MOC_LITERAL(12, 126, 14), // "moveFigureLeft"
QT_MOC_LITERAL(13, 141, 15), // "moveFigureRight"
QT_MOC_LITERAL(14, 157, 20), // "rotateFigureColorsUp"
QT_MOC_LITERAL(15, 178, 31), // "CheckIfTherIsAPlaceForNewFigure"
QT_MOC_LITERAL(16, 210, 12), // "countingCows"
QT_MOC_LITERAL(17, 223, 28), // "refresh_glass_after_counting"
QT_MOC_LITERAL(18, 252, 11), // "slotNewGame"
QT_MOC_LITERAL(19, 264, 9) // "slotPause"

    },
    "Glass\0signalGlassInit\0\0nextFigureChanged\0"
    "Figure*\0SomeCowsCounted\0setRows\0rows\0"
    "setColumns\0columns\0slotGlassInit\0"
    "moveFigureDown\0moveFigureLeft\0"
    "moveFigureRight\0rotateFigureColorsUp\0"
    "CheckIfTherIsAPlaceForNewFigure\0"
    "countingCows\0refresh_glass_after_counting\0"
    "slotNewGame\0slotPause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Glass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       5,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   96,    2, 0x0a /* Public */,
       8,    1,   99,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    0,  103,    2, 0x0a /* Public */,
      12,    0,  104,    2, 0x0a /* Public */,
      13,    0,  105,    2, 0x0a /* Public */,
      14,    0,  106,    2, 0x0a /* Public */,
      15,    0,  107,    2, 0x0a /* Public */,
      16,    0,  108,    2, 0x0a /* Public */,
      17,    0,  109,    2, 0x0a /* Public */,
      18,    0,  110,    2, 0x0a /* Public */,
      19,    0,  111,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    7,
    QMetaType::Void, QMetaType::UInt,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::UInt, 0x00095103,
       9, QMetaType::UInt, 0x00095103,

       0        // eod
};

void Glass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Glass *_t = static_cast<Glass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signalGlassInit(); break;
        case 1: _t->nextFigureChanged((*reinterpret_cast< Figure*(*)>(_a[1]))); break;
        case 2: _t->SomeCowsCounted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setRows((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 4: _t->setColumns((*reinterpret_cast< uint(*)>(_a[1]))); break;
        case 5: _t->slotGlassInit(); break;
        case 6: _t->moveFigureDown(); break;
        case 7: _t->moveFigureLeft(); break;
        case 8: _t->moveFigureRight(); break;
        case 9: _t->rotateFigureColorsUp(); break;
        case 10: _t->CheckIfTherIsAPlaceForNewFigure(); break;
        case 11: { int _r = _t->countingCows();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->refresh_glass_after_counting();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->slotNewGame(); break;
        case 14: _t->slotPause(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Glass::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Glass::signalGlassInit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Glass::*_t)(Figure * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Glass::nextFigureChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Glass::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Glass::SomeCowsCounted)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        Glass *_t = static_cast<Glass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->rows(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->columns(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Glass *_t = static_cast<Glass *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRows(*reinterpret_cast< uint*>(_v)); break;
        case 1: _t->setColumns(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject Glass::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Glass.data,
      qt_meta_data_Glass,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Glass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Glass::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Glass.stringdata0))
        return static_cast<void*>(const_cast< Glass*>(this));
    return QWidget::qt_metacast(_clname);
}

int Glass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Glass::signalGlassInit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Glass::nextFigureChanged(Figure * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Glass::SomeCowsCounted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
