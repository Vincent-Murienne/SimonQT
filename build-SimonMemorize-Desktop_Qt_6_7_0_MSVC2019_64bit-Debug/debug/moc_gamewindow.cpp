/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SimonMemorize/gamewindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSgamewindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSgamewindowENDCLASS = QtMocHelpers::stringData(
    "gamewindow",
    "simonSequenceDisplayed",
    "",
    "randomSequence",
    "handleButtonClick",
    "color",
    "showColor",
    "ResetButtonColors",
    "startGame",
    "EnabledTrueButton",
    "on_btn_rouge_clicked",
    "on_btn_vert_clicked",
    "on_btn_bleu_clicked",
    "on_btn_jaune_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSgamewindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   81,    2, 0x0a,    2 /* Public */,
       4,    1,   82,    2, 0x0a,    3 /* Public */,
       6,    1,   85,    2, 0x0a,    5 /* Public */,
       7,    0,   88,    2, 0x0a,    7 /* Public */,
       8,    0,   89,    2, 0x0a,    8 /* Public */,
       9,    0,   90,    2, 0x0a,    9 /* Public */,
      10,    0,   91,    2, 0x08,   10 /* Private */,
      11,    0,   92,    2, 0x08,   11 /* Private */,
      12,    0,   93,    2, 0x08,   12 /* Private */,
      13,    0,   94,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject gamewindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSgamewindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSgamewindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSgamewindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<gamewindow, std::true_type>,
        // method 'simonSequenceDisplayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'randomSequence'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'showColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'ResetButtonColors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'EnabledTrueButton'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_rouge_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_vert_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_bleu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_jaune_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void gamewindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gamewindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->simonSequenceDisplayed(); break;
        case 1: _t->randomSequence(); break;
        case 2: _t->handleButtonClick((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->showColor((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->ResetButtonColors(); break;
        case 5: _t->startGame(); break;
        case 6: _t->EnabledTrueButton(); break;
        case 7: _t->on_btn_rouge_clicked(); break;
        case 8: _t->on_btn_vert_clicked(); break;
        case 9: _t->on_btn_bleu_clicked(); break;
        case 10: _t->on_btn_jaune_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (gamewindow::*)();
            if (_t _q_method = &gamewindow::simonSequenceDisplayed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *gamewindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gamewindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSgamewindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gamewindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void gamewindow::simonSequenceDisplayed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
