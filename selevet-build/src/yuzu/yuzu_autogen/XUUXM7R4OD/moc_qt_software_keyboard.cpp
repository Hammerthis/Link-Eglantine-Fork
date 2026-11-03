/****************************************************************************
** Meta object code from reading C++ file 'qt_software_keyboard.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/applets/qt_software_keyboard.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qt_software_keyboard.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSoftwareKeyboardDialog::qt_create_metaobjectdata<qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSoftwareKeyboardDialog",
        "SubmitNormalText",
        "",
        "Service::AM::Frontend::SwkbdResult",
        "result",
        "std::u16string",
        "submitted_text",
        "confirmed",
        "SubmitInlineText",
        "Service::AM::Frontend::SwkbdReplyType",
        "reply_type",
        "s32",
        "cursor_position",
        "open",
        "reject"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'SubmitNormalText'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdResult, std::u16string, bool) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 }, { QMetaType::Bool, 7 },
        }}),
        // Signal 'SubmitNormalText'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdResult, std::u16string) const>(1, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 3, 4 }, { 0x80000000 | 5, 6 },
        }}),
        // Signal 'SubmitInlineText'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdReplyType, std::u16string, s32) const>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 9, 10 }, { 0x80000000 | 5, 6 }, { 0x80000000 | 11, 12 },
        }}),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'reject'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSoftwareKeyboardDialog, qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSoftwareKeyboardDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>.metaTypes,
    nullptr
} };

void QtSoftwareKeyboardDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSoftwareKeyboardDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->SubmitNormalText((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 1: _t->SubmitNormalText((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2]))); break;
        case 2: _t->SubmitInlineText((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdReplyType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<s32>>(_a[3]))); break;
        case 3: _t->open(); break;
        case 4: _t->reject(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboardDialog::*)(Service::AM::Frontend::SwkbdResult , std::u16string , bool ) const>(_a, &QtSoftwareKeyboardDialog::SubmitNormalText, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboardDialog::*)(Service::AM::Frontend::SwkbdReplyType , std::u16string , s32 ) const>(_a, &QtSoftwareKeyboardDialog::SubmitInlineText, 2))
            return;
    }
}

const QMetaObject *QtSoftwareKeyboardDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSoftwareKeyboardDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN24QtSoftwareKeyboardDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QtSoftwareKeyboardDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QtSoftwareKeyboardDialog::SubmitNormalText(Service::AM::Frontend::SwkbdResult _t1, std::u16string _t2, bool _t3)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboardDialog *>(this), &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}

// SIGNAL 2
void QtSoftwareKeyboardDialog::SubmitInlineText(Service::AM::Frontend::SwkbdReplyType _t1, std::u16string _t2, s32 _t3)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboardDialog *>(this), &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}
namespace {
struct qt_meta_tag_ZN18QtSoftwareKeyboardE_t {};
} // unnamed namespace

template <> constexpr inline auto QtSoftwareKeyboard::qt_create_metaobjectdata<qt_meta_tag_ZN18QtSoftwareKeyboardE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QtSoftwareKeyboard",
        "MainWindowInitializeKeyboard",
        "",
        "is_inline",
        "Core::Frontend::KeyboardInitializeParameters",
        "initialize_parameters",
        "MainWindowShowNormalKeyboard",
        "MainWindowShowTextCheckDialog",
        "Service::AM::Frontend::SwkbdTextCheckResult",
        "text_check_result",
        "std::u16string",
        "text_check_message",
        "MainWindowShowInlineKeyboard",
        "Core::Frontend::InlineAppearParameters",
        "appear_parameters",
        "MainWindowHideInlineKeyboard",
        "MainWindowInlineTextChanged",
        "Core::Frontend::InlineTextParameters",
        "text_parameters",
        "MainWindowExitKeyboard"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'MainWindowInitializeKeyboard'
        QtMocHelpers::SignalData<void(bool, Core::Frontend::KeyboardInitializeParameters) const>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 }, { 0x80000000 | 4, 5 },
        }}),
        // Signal 'MainWindowShowNormalKeyboard'
        QtMocHelpers::SignalData<void() const>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'MainWindowShowTextCheckDialog'
        QtMocHelpers::SignalData<void(Service::AM::Frontend::SwkbdTextCheckResult, std::u16string) const>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 9 }, { 0x80000000 | 10, 11 },
        }}),
        // Signal 'MainWindowShowInlineKeyboard'
        QtMocHelpers::SignalData<void(Core::Frontend::InlineAppearParameters) const>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Signal 'MainWindowHideInlineKeyboard'
        QtMocHelpers::SignalData<void() const>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'MainWindowInlineTextChanged'
        QtMocHelpers::SignalData<void(Core::Frontend::InlineTextParameters) const>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Signal 'MainWindowExitKeyboard'
        QtMocHelpers::SignalData<void() const>(19, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QtSoftwareKeyboard, qt_meta_tag_ZN18QtSoftwareKeyboardE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QtSoftwareKeyboard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtSoftwareKeyboardE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtSoftwareKeyboardE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18QtSoftwareKeyboardE_t>.metaTypes,
    nullptr
} };

void QtSoftwareKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QtSoftwareKeyboard *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->MainWindowInitializeKeyboard((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<Core::Frontend::KeyboardInitializeParameters>>(_a[2]))); break;
        case 1: _t->MainWindowShowNormalKeyboard(); break;
        case 2: _t->MainWindowShowTextCheckDialog((*reinterpret_cast< std::add_pointer_t<Service::AM::Frontend::SwkbdTextCheckResult>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::u16string>>(_a[2]))); break;
        case 3: _t->MainWindowShowInlineKeyboard((*reinterpret_cast< std::add_pointer_t<Core::Frontend::InlineAppearParameters>>(_a[1]))); break;
        case 4: _t->MainWindowHideInlineKeyboard(); break;
        case 5: _t->MainWindowInlineTextChanged((*reinterpret_cast< std::add_pointer_t<Core::Frontend::InlineTextParameters>>(_a[1]))); break;
        case 6: _t->MainWindowExitKeyboard(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)(bool , Core::Frontend::KeyboardInitializeParameters ) const>(_a, &QtSoftwareKeyboard::MainWindowInitializeKeyboard, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)() const>(_a, &QtSoftwareKeyboard::MainWindowShowNormalKeyboard, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)(Service::AM::Frontend::SwkbdTextCheckResult , std::u16string ) const>(_a, &QtSoftwareKeyboard::MainWindowShowTextCheckDialog, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)(Core::Frontend::InlineAppearParameters ) const>(_a, &QtSoftwareKeyboard::MainWindowShowInlineKeyboard, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)() const>(_a, &QtSoftwareKeyboard::MainWindowHideInlineKeyboard, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)(Core::Frontend::InlineTextParameters ) const>(_a, &QtSoftwareKeyboard::MainWindowInlineTextChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QtSoftwareKeyboard::*)() const>(_a, &QtSoftwareKeyboard::MainWindowExitKeyboard, 6))
            return;
    }
}

const QMetaObject *QtSoftwareKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtSoftwareKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18QtSoftwareKeyboardE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::SoftwareKeyboardApplet"))
        return static_cast< Core::Frontend::SoftwareKeyboardApplet*>(this);
    return QObject::qt_metacast(_clname);
}

int QtSoftwareKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QtSoftwareKeyboard::MainWindowInitializeKeyboard(bool _t1, Core::Frontend::KeyboardInitializeParameters _t2)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void QtSoftwareKeyboard::MainWindowShowNormalKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QtSoftwareKeyboard::MainWindowShowTextCheckDialog(Service::AM::Frontend::SwkbdTextCheckResult _t1, std::u16string _t2)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 2, nullptr, _t1, _t2);
}

// SIGNAL 3
void QtSoftwareKeyboard::MainWindowShowInlineKeyboard(Core::Frontend::InlineAppearParameters _t1)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 3, nullptr, _t1);
}

// SIGNAL 4
void QtSoftwareKeyboard::MainWindowHideInlineKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QtSoftwareKeyboard::MainWindowInlineTextChanged(Core::Frontend::InlineTextParameters _t1)const
{
    QMetaObject::activate<void>(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void QtSoftwareKeyboard::MainWindowExitKeyboard()const
{
    QMetaObject::activate(const_cast< QtSoftwareKeyboard *>(this), &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
