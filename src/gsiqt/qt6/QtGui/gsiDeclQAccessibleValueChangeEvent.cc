
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQAccessibleValueChangeEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QAccessibleValueChangeEvent>
#include <QAccessibleInterface>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QAccessibleValueChangeEvent

// void QAccessibleValueChangeEvent::setValue(const QVariant &val)


static void _init_f_setValue_2119 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("val");
  decl->add_arg<const QVariant & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setValue_2119 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVariant &arg1 = gsi::arg_reader<const QVariant & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QAccessibleValueChangeEvent *)cls)->setValue (arg1);
}


// QVariant QAccessibleValueChangeEvent::value()


static void _init_f_value_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVariant > ();
}

static void _call_f_value_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVariant > ((QVariant)((QAccessibleValueChangeEvent *)cls)->value ());
}


namespace gsi
{

static gsi::Methods methods_QAccessibleValueChangeEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("setValue|value=", "@brief Method void QAccessibleValueChangeEvent::setValue(const QVariant &val)\n", false, &_init_f_setValue_2119, &_call_f_setValue_2119);
  methods += new qt_gsi::GenericMethod (":value", "@brief Method QVariant QAccessibleValueChangeEvent::value()\n", true, &_init_f_value_c0, &_call_f_value_c0);
  return methods;
}

gsi::Class<QAccessibleEvent> &qtdecl_QAccessibleEvent ();

gsi::Class<QAccessibleValueChangeEvent> decl_QAccessibleValueChangeEvent (qtdecl_QAccessibleEvent (), "QtGui", "QAccessibleValueChangeEvent_Native",
  methods_QAccessibleValueChangeEvent (),
  "@hide\n@alias QAccessibleValueChangeEvent");

GSI_QTGUI_PUBLIC gsi::Class<QAccessibleValueChangeEvent> &qtdecl_QAccessibleValueChangeEvent () { return decl_QAccessibleValueChangeEvent; }

}


class QAccessibleValueChangeEvent_Adaptor : public QAccessibleValueChangeEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QAccessibleValueChangeEvent_Adaptor();

  //  [adaptor ctor] QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QObject *obj, const QVariant &val)
  QAccessibleValueChangeEvent_Adaptor(QObject *obj, const QVariant &val) : QAccessibleValueChangeEvent(obj, val)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface *iface, const QVariant &val)
  QAccessibleValueChangeEvent_Adaptor(QAccessibleInterface *iface, const QVariant &val) : QAccessibleValueChangeEvent(iface, val)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QAccessibleInterface *QAccessibleValueChangeEvent::accessibleInterface()
  QAccessibleInterface * cbs_accessibleInterface_c0_0() const
  {
    return QAccessibleValueChangeEvent::accessibleInterface();
  }

  virtual QAccessibleInterface * accessibleInterface() const
  {
    if (cb_accessibleInterface_c0_0.can_issue()) {
      return cb_accessibleInterface_c0_0.issue<QAccessibleValueChangeEvent_Adaptor, QAccessibleInterface *>(&QAccessibleValueChangeEvent_Adaptor::cbs_accessibleInterface_c0_0);
    } else {
      return QAccessibleValueChangeEvent::accessibleInterface();
    }
  }

  gsi::Callback cb_accessibleInterface_c0_0;
};

QAccessibleValueChangeEvent_Adaptor::~QAccessibleValueChangeEvent_Adaptor() { }

//  Constructor QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QObject *obj, const QVariant &val) (adaptor class)

static void _init_ctor_QAccessibleValueChangeEvent_Adaptor_3313 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("obj");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return_new<QAccessibleValueChangeEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleValueChangeEvent_Adaptor_3313 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<QAccessibleValueChangeEvent_Adaptor *> (new QAccessibleValueChangeEvent_Adaptor (arg1, arg2));
}


//  Constructor QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface *iface, const QVariant &val) (adaptor class)

static void _init_ctor_QAccessibleValueChangeEvent_Adaptor_4633 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("iface");
  decl->add_arg<QAccessibleInterface * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("val");
  decl->add_arg<const QVariant & > (argspec_1);
  decl->set_return_new<QAccessibleValueChangeEvent_Adaptor> ();
}

static void _call_ctor_QAccessibleValueChangeEvent_Adaptor_4633 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QAccessibleInterface *arg1 = gsi::arg_reader<QAccessibleInterface * >() (args, heap);
  const QVariant &arg2 = gsi::arg_reader<const QVariant & >() (args, heap);
  ret.write<QAccessibleValueChangeEvent_Adaptor *> (new QAccessibleValueChangeEvent_Adaptor (arg1, arg2));
}


// QAccessibleInterface *QAccessibleValueChangeEvent::accessibleInterface()

static void _init_cbs_accessibleInterface_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QAccessibleInterface * > ();
}

static void _call_cbs_accessibleInterface_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QAccessibleInterface * > ((QAccessibleInterface *)((QAccessibleValueChangeEvent_Adaptor *)cls)->cbs_accessibleInterface_c0_0 ());
}

static void _set_callback_cbs_accessibleInterface_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QAccessibleValueChangeEvent_Adaptor *)cls)->cb_accessibleInterface_c0_0 = cb;
}


namespace gsi
{

gsi::Class<QAccessibleValueChangeEvent> &qtdecl_QAccessibleValueChangeEvent ();

static gsi::Methods methods_QAccessibleValueChangeEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QObject *obj, const QVariant &val)\nThis method creates an object of class QAccessibleValueChangeEvent.", &_init_ctor_QAccessibleValueChangeEvent_Adaptor_3313, &_call_ctor_QAccessibleValueChangeEvent_Adaptor_3313);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QAccessibleValueChangeEvent::QAccessibleValueChangeEvent(QAccessibleInterface *iface, const QVariant &val)\nThis method creates an object of class QAccessibleValueChangeEvent.", &_init_ctor_QAccessibleValueChangeEvent_Adaptor_4633, &_call_ctor_QAccessibleValueChangeEvent_Adaptor_4633);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@brief Virtual method QAccessibleInterface *QAccessibleValueChangeEvent::accessibleInterface()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0);
  methods += new qt_gsi::GenericMethod ("accessibleInterface", "@hide", true, &_init_cbs_accessibleInterface_c0_0, &_call_cbs_accessibleInterface_c0_0, &_set_callback_cbs_accessibleInterface_c0_0);
  return methods;
}

gsi::Class<QAccessibleValueChangeEvent_Adaptor> decl_QAccessibleValueChangeEvent_Adaptor (qtdecl_QAccessibleValueChangeEvent (), "QtGui", "QAccessibleValueChangeEvent",
  methods_QAccessibleValueChangeEvent_Adaptor (),
  "@qt\n@brief Binding of QAccessibleValueChangeEvent");

}
