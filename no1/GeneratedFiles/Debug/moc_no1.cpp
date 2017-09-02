/****************************************************************************
** Meta object code from reading C++ file 'no1.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../no1.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'no1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_no1_t {
    QByteArrayData data[11];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_no1_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_no1_t qt_meta_stringdata_no1 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "no1"
QT_MOC_LITERAL(1, 4, 8), // "fileOpen"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "fileSave"
QT_MOC_LITERAL(4, 23, 10), // "editNormal"
QT_MOC_LITERAL(5, 34, 8), // "editBold"
QT_MOC_LITERAL(6, 43, 13), // "editUnderline"
QT_MOC_LITERAL(7, 57, 15), // "editAdvanceFont"
QT_MOC_LITERAL(8, 73, 15), // "editAdvaceStyle"
QT_MOC_LITERAL(9, 89, 9), // "helpAbout"
QT_MOC_LITERAL(10, 99, 11) // "helpAboutQt"

    },
    "no1\0fileOpen\0\0fileSave\0editNormal\0"
    "editBold\0editUnderline\0editAdvanceFont\0"
    "editAdvaceStyle\0helpAbout\0helpAboutQt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_no1[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void no1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        no1 *_t = static_cast<no1 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileOpen(); break;
        case 1: _t->fileSave(); break;
        case 2: _t->editNormal(); break;
        case 3: _t->editBold(); break;
        case 4: _t->editUnderline(); break;
        case 5: _t->editAdvanceFont(); break;
        case 6: _t->editAdvaceStyle(); break;
        case 7: _t->helpAbout(); break;
        case 8: _t->helpAboutQt(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject no1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_no1.data,
      qt_meta_data_no1,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *no1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *no1::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_no1.stringdata0))
        return static_cast<void*>(const_cast< no1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int no1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
