/****************************************************************************
** Meta object code from reading C++ file 'bootmanager.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/yuzu/bootmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bootmanager.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13GRenderWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto GRenderWindow::qt_create_metaobjectdata<qt_meta_tag_ZN13GRenderWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "GRenderWindow",
        "Closed",
        "",
        "FirstFrameDisplayed",
        "ExecuteProgramSignal",
        "std::size_t",
        "program_index",
        "ExitSignal",
        "MouseActivity",
        "TasPlaybackStateChanged",
        "OnFramebufferSizeChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'Closed'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'FirstFrameDisplayed'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ExecuteProgramSignal'
        QtMocHelpers::SignalData<void(std::size_t)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'ExitSignal'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'MouseActivity'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'TasPlaybackStateChanged'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'OnFramebufferSizeChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GRenderWindow, qt_meta_tag_ZN13GRenderWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GRenderWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13GRenderWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13GRenderWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13GRenderWindowE_t>.metaTypes,
    nullptr
} };

void GRenderWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GRenderWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->Closed(); break;
        case 1: _t->FirstFrameDisplayed(); break;
        case 2: _t->ExecuteProgramSignal((*reinterpret_cast< std::add_pointer_t<std::size_t>>(_a[1]))); break;
        case 3: _t->ExitSignal(); break;
        case 4: _t->MouseActivity(); break;
        case 5: _t->TasPlaybackStateChanged(); break;
        case 6: _t->OnFramebufferSizeChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)()>(_a, &GRenderWindow::Closed, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)()>(_a, &GRenderWindow::FirstFrameDisplayed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)(std::size_t )>(_a, &GRenderWindow::ExecuteProgramSignal, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)()>(_a, &GRenderWindow::ExitSignal, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)()>(_a, &GRenderWindow::MouseActivity, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (GRenderWindow::*)()>(_a, &GRenderWindow::TasPlaybackStateChanged, 5))
            return;
    }
}

const QMetaObject *GRenderWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GRenderWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13GRenderWindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Core::Frontend::EmuWindow"))
        return static_cast< Core::Frontend::EmuWindow*>(this);
    return QWidget::qt_metacast(_clname);
}

int GRenderWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void GRenderWindow::Closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GRenderWindow::FirstFrameDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GRenderWindow::ExecuteProgramSignal(std::size_t _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void GRenderWindow::ExitSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GRenderWindow::MouseActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GRenderWindow::TasPlaybackStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
