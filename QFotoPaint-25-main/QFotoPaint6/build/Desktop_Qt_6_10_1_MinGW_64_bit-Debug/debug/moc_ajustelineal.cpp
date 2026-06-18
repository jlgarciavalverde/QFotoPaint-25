/****************************************************************************
** Meta object code from reading C++ file 'ajustelineal.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../ajustelineal.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ajustelineal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN12AjusteLinealE_t {};
} // unnamed namespace

template <> constexpr inline auto AjusteLineal::qt_create_metaobjectdata<qt_meta_tag_ZN12AjusteLinealE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "AjusteLineal",
        "on_horizontalSlider_valueChanged",
        "",
        "value",
        "on_spinBox_valueChanged",
        "arg1",
        "on_spinBox_2_valueChanged",
        "on_horizontalSlider_2_valueChanged",
        "on_checkBox_stateChanged",
        "on_AjusteLineal_rejected",
        "on_AjusteLineal_accepted"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_horizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_spinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(4, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_spinBox_2_valueChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_horizontalSlider_2_valueChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Slot 'on_checkBox_stateChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 5 },
        }}),
        // Slot 'on_AjusteLineal_rejected'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_AjusteLineal_accepted'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<AjusteLineal, qt_meta_tag_ZN12AjusteLinealE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject AjusteLineal::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AjusteLinealE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AjusteLinealE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN12AjusteLinealE_t>.metaTypes,
    nullptr
} };

void AjusteLineal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<AjusteLineal *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_horizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_spinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_spinBox_2_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_horizontalSlider_2_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_checkBox_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_AjusteLineal_rejected(); break;
        case 6: _t->on_AjusteLineal_accepted(); break;
        default: ;
        }
    }
}

const QMetaObject *AjusteLineal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AjusteLineal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN12AjusteLinealE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AjusteLineal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
