/****************************************************************************
** Meta object code from reading C++ file 'libqt_common.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/libqt_common.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'libqt_common.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QtCommon::Frontend::WidgetsProgressDialog::qt_create_metaobjectdata<qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtCommon::Frontend::WidgetsProgressDialog",
        "setTitle",
        "",
        "title",
        "setLabelText",
        "text",
        "setMinimum",
        "min",
        "setMaximum",
        "max",
        "setValue",
        "value",
        "close",
        "show"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'setTitle'
        QtMocHelpers::SlotData<void(QString)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'setLabelText'
        QtMocHelpers::SlotData<void(QString)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'setMinimum'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'setMaximum'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 9 },
        }}),
        // Slot 'setValue'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 11 },
        }}),
        // Slot 'close'
        QtMocHelpers::SlotData<bool()>(12, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'show'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<WidgetsProgressDialog, qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtCommon::Frontend::WidgetsProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QtProgressDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>.metaTypes,
    nullptr
} };

void QtCommon::Frontend::WidgetsProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<WidgetsProgressDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setTitle((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setLabelText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->setMinimum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setMaximum((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->show(); break;
        default: ;
        }
    }
}

const QMetaObject *QtCommon::Frontend::WidgetsProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtCommon::Frontend::WidgetsProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN8QtCommon8Frontend21WidgetsProgressDialogE_t>.strings))
        return static_cast<void*>(this);
    return QtProgressDialog::qt_metacast(_clname);
}

int QtCommon::Frontend::WidgetsProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QtProgressDialog::qt_metacall(_c, _id, _a);
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
