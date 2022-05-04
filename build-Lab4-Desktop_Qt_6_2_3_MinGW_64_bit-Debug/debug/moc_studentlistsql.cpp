/****************************************************************************
** Meta object code from reading C++ file 'studentlistsql.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../LR/studentlistsql.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentlistsql.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_studentListSQL_t {
    const uint offsetsAndSize[28];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_studentListSQL_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_studentListSQL_t qt_meta_stringdata_studentListSQL = {
    {
QT_MOC_LITERAL(0, 14), // "studentListSQL"
QT_MOC_LITERAL(15, 3), // "add"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 7), // "nameRiv"
QT_MOC_LITERAL(28, 9), // "lenghtRiv"
QT_MOC_LITERAL(38, 7), // "flowRiv"
QT_MOC_LITERAL(46, 9), // "runoffRiv"
QT_MOC_LITERAL(56, 7), // "areaRiv"
QT_MOC_LITERAL(64, 3), // "del"
QT_MOC_LITERAL(68, 5), // "index"
QT_MOC_LITERAL(74, 4), // "edit"
QT_MOC_LITERAL(79, 12), // "studentModel"
QT_MOC_LITERAL(92, 15), // "QSqlQueryModel*"
QT_MOC_LITERAL(108, 16) // "IsConnectionOpen"

    },
    "studentListSQL\0add\0\0nameRiv\0lenghtRiv\0"
    "flowRiv\0runoffRiv\0areaRiv\0del\0index\0"
    "edit\0studentModel\0QSqlQueryModel*\0"
    "IsConnectionOpen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_studentListSQL[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   59, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,   32,    2, 0x02,    3 /* Public */,
       8,    1,   43,    2, 0x02,    9 /* Public */,
      10,    6,   46,    2, 0x02,   11 /* Public */,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,    4,    5,    6,    7,    9,

 // properties: name, type, flags
      11, 0x80000000 | 12, 0x00015409, uint(-1), 0,
      13, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

void studentListSQL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<studentListSQL *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->del((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->edit((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const int(*)>(_a[6]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSqlQueryModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<studentListSQL *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSqlQueryModel**>(_v) = _t->getModel(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isConnectionOpen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject studentListSQL::staticMetaObject = { {
    QMetaObject::SuperData::link<QSqlQueryModel::staticMetaObject>(),
    qt_meta_stringdata_studentListSQL.offsetsAndSize,
    qt_meta_data_studentListSQL,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_studentListSQL_t
, QtPrivate::TypeAndForceComplete<QSqlQueryModel*, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<studentListSQL, std::true_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<const int, std::false_type>

>,
    nullptr
} };


const QMetaObject *studentListSQL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *studentListSQL::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_studentListSQL.stringdata0))
        return static_cast<void*>(this);
    return QSqlQueryModel::qt_metacast(_clname);
}

int studentListSQL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
