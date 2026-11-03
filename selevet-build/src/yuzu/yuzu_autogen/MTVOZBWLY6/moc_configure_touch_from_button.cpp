/****************************************************************************
** Meta object code from reading C++ file 'configure_touch_from_button.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/configuration/configure_touch_from_button.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure_touch_from_button.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.3. It"
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
struct qt_meta_tag_ZN24ConfigureTouchFromButtonE_t {};
} // unnamed namespace

template <> constexpr inline auto ConfigureTouchFromButton::qt_create_metaobjectdata<qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ConfigureTouchFromButton",
        "ApplyConfiguration",
        "",
        "NewBinding",
        "pos",
        "SetActiveBinding",
        "dot_id",
        "SetCoordinates",
        "NewMapping",
        "DeleteMapping",
        "RenameMapping",
        "EditBinding",
        "QModelIndex",
        "qi",
        "DeleteBinding",
        "OnBindingSelection",
        "QItemSelection",
        "selected",
        "deselected",
        "OnBindingChanged",
        "QStandardItem*",
        "item",
        "OnBindingDeleted",
        "parent",
        "first",
        "last"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'ApplyConfiguration'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'NewBinding'
        QtMocHelpers::SlotData<void(const QPoint &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QPoint, 4 },
        }}),
        // Slot 'SetActiveBinding'
        QtMocHelpers::SlotData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'SetCoordinates'
        QtMocHelpers::SlotData<void(int, const QPoint &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 }, { QMetaType::QPoint, 4 },
        }}),
        // Slot 'NewMapping'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'DeleteMapping'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'RenameMapping'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'EditBinding'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'DeleteBinding'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'OnBindingSelection'
        QtMocHelpers::SlotData<void(const QItemSelection &, const QItemSelection &)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 16, 17 }, { 0x80000000 | 16, 18 },
        }}),
        // Slot 'OnBindingChanged'
        QtMocHelpers::SlotData<void(QStandardItem *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 20, 21 },
        }}),
        // Slot 'OnBindingDeleted'
        QtMocHelpers::SlotData<void(const QModelIndex &, int, int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 23 }, { QMetaType::Int, 24 }, { QMetaType::Int, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ConfigureTouchFromButton, qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ConfigureTouchFromButton::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>.metaTypes,
    nullptr
} };

void ConfigureTouchFromButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ConfigureTouchFromButton *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->ApplyConfiguration(); break;
        case 1: _t->NewBinding((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 2: _t->SetActiveBinding((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->SetCoordinates((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 4: _t->NewMapping(); break;
        case 5: _t->DeleteMapping(); break;
        case 6: _t->RenameMapping(); break;
        case 7: _t->EditBinding((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 8: _t->DeleteBinding(); break;
        case 9: _t->OnBindingSelection((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[2]))); break;
        case 10: _t->OnBindingChanged((*reinterpret_cast< std::add_pointer_t<QStandardItem*>>(_a[1]))); break;
        case 11: _t->OnBindingDeleted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *ConfigureTouchFromButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigureTouchFromButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24ConfigureTouchFromButtonE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ConfigureTouchFromButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
