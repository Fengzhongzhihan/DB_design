/****************************************************************************
** Meta object code from reading C++ file 'stucell_grade.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../StudentManagement/stucell_grade.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stucell_grade.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stucell_grade_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stucell_grade_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stucell_grade_t qt_meta_stringdata_stucell_grade = {
    {
QT_MOC_LITERAL(0, 0, 13), // "stucell_grade"
QT_MOC_LITERAL(1, 14, 20), // "on_showGrade_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "on_printGrade_clicked"
QT_MOC_LITERAL(4, 58, 18), // "on_reStudy_clicked"
QT_MOC_LITERAL(5, 77, 17) // "on_reExam_clicked"

    },
    "stucell_grade\0on_showGrade_clicked\0\0"
    "on_printGrade_clicked\0on_reStudy_clicked\0"
    "on_reExam_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stucell_grade[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stucell_grade::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<stucell_grade *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_showGrade_clicked(); break;
        case 1: _t->on_printGrade_clicked(); break;
        case 2: _t->on_reStudy_clicked(); break;
        case 3: _t->on_reExam_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject stucell_grade::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_stucell_grade.data,
    qt_meta_data_stucell_grade,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *stucell_grade::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stucell_grade::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stucell_grade.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int stucell_grade::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
