/****************************************************************************
** Meta object code from reading C++ file 'emu_thread.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../selevet-source/src/qt_common/render/emu_thread.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emu_thread.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9EmuThreadE_t {};
} // unnamed namespace

template <> constexpr inline auto EmuThread::qt_create_metaobjectdata<qt_meta_tag_ZN9EmuThreadE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EmuThread",
        "DebugModeEntered",
        "",
        "DebugModeLeft",
        "LoadProgress",
        "VideoCore::LoadCallbackStage",
        "stage",
        "std::size_t",
        "value",
        "total",
        "ShaderCacheReloadStarted",
        "ShaderCacheReloadFinished"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'DebugModeEntered'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'DebugModeLeft'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'LoadProgress'
        QtMocHelpers::SignalData<void(VideoCore::LoadCallbackStage, std::size_t, std::size_t)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 }, { 0x80000000 | 7, 8 }, { 0x80000000 | 7, 9 },
        }}),
        // Signal 'ShaderCacheReloadStarted'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'ShaderCacheReloadFinished'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EmuThread, qt_meta_tag_ZN9EmuThreadE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EmuThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9EmuThreadE_t>.metaTypes,
    nullptr
} };

void EmuThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EmuThread *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->DebugModeEntered(); break;
        case 1: _t->DebugModeLeft(); break;
        case 2: _t->LoadProgress((*reinterpret_cast< std::add_pointer_t<VideoCore::LoadCallbackStage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::size_t>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::size_t>>(_a[3]))); break;
        case 3: _t->ShaderCacheReloadStarted(); break;
        case 4: _t->ShaderCacheReloadFinished(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::DebugModeEntered, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::DebugModeLeft, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)(VideoCore::LoadCallbackStage , std::size_t , std::size_t )>(_a, &EmuThread::LoadProgress, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::ShaderCacheReloadStarted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (EmuThread::*)()>(_a, &EmuThread::ShaderCacheReloadFinished, 4))
            return;
    }
}

const QMetaObject *EmuThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EmuThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9EmuThreadE_t>.strings))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int EmuThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void EmuThread::DebugModeEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EmuThread::DebugModeLeft()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EmuThread::LoadProgress(VideoCore::LoadCallbackStage _t1, std::size_t _t2, std::size_t _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2, _t3);
}

// SIGNAL 3
void EmuThread::ShaderCacheReloadStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void EmuThread::ShaderCacheReloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
