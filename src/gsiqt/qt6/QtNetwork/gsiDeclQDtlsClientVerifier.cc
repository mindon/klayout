
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
*  @file gsiDeclQDtlsClientVerifier.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QDtlsClientVerifier>
#include <QChildEvent>
#include <QEvent>
#include <QHostAddress>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include <QUdpSocket>
#include "gsiQt.h"
#include "gsiQtNetworkCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QDtlsClientVerifier

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QDtlsClientVerifier::staticMetaObject);
}


// QDtlsClientVerifier::GeneratorParameters QDtlsClientVerifier::cookieGeneratorParameters()


static void _init_f_cookieGeneratorParameters_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QDtlsClientVerifier::GeneratorParameters > ();
}

static void _call_f_cookieGeneratorParameters_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QDtlsClientVerifier::GeneratorParameters > ((QDtlsClientVerifier::GeneratorParameters)((QDtlsClientVerifier *)cls)->cookieGeneratorParameters ());
}


// QDtlsError QDtlsClientVerifier::dtlsError()


static void _init_f_dtlsError_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QDtlsError>::target_type > ();
}

static void _call_f_dtlsError_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QDtlsError>::target_type > ((qt_gsi::Converter<QDtlsError>::target_type)qt_gsi::CppToQtAdaptor<QDtlsError>(((QDtlsClientVerifier *)cls)->dtlsError ()));
}


// QString QDtlsClientVerifier::dtlsErrorString()


static void _init_f_dtlsErrorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_dtlsErrorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QDtlsClientVerifier *)cls)->dtlsErrorString ());
}


// bool QDtlsClientVerifier::setCookieGeneratorParameters(const QDtlsClientVerifier::GeneratorParameters &params)


static void _init_f_setCookieGeneratorParameters_5331 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("params");
  decl->add_arg<const QDtlsClientVerifier::GeneratorParameters & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_setCookieGeneratorParameters_5331 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDtlsClientVerifier::GeneratorParameters &arg1 = gsi::arg_reader<const QDtlsClientVerifier::GeneratorParameters & >() (args, heap);
  ret.write<bool > ((bool)((QDtlsClientVerifier *)cls)->setCookieGeneratorParameters (arg1));
}


// QByteArray QDtlsClientVerifier::verifiedHello()


static void _init_f_verifiedHello_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_verifiedHello_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QDtlsClientVerifier *)cls)->verifiedHello ());
}


// bool QDtlsClientVerifier::verifyClient(QUdpSocket *socket, const QByteArray &dgram, const QHostAddress &address, quint16 port)


static void _init_f_verifyClient_7220 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("socket");
  decl->add_arg<QUdpSocket * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("dgram");
  decl->add_arg<const QByteArray & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("address");
  decl->add_arg<const QHostAddress & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("port");
  decl->add_arg<quint16 > (argspec_3);
  decl->set_return<bool > ();
}

static void _call_f_verifyClient_7220 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QUdpSocket *arg1 = gsi::arg_reader<QUdpSocket * >() (args, heap);
  const QByteArray &arg2 = gsi::arg_reader<const QByteArray & >() (args, heap);
  const QHostAddress &arg3 = gsi::arg_reader<const QHostAddress & >() (args, heap);
  quint16 arg4 = gsi::arg_reader<quint16 >() (args, heap);
  ret.write<bool > ((bool)((QDtlsClientVerifier *)cls)->verifyClient (arg1, arg2, arg3, arg4));
}


// static QString QDtlsClientVerifier::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QDtlsClientVerifier::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QDtlsClientVerifier () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("cookieGeneratorParameters", "@brief Method QDtlsClientVerifier::GeneratorParameters QDtlsClientVerifier::cookieGeneratorParameters()\n", true, &_init_f_cookieGeneratorParameters_c0, &_call_f_cookieGeneratorParameters_c0);
  methods += new qt_gsi::GenericMethod ("dtlsError", "@brief Method QDtlsError QDtlsClientVerifier::dtlsError()\n", true, &_init_f_dtlsError_c0, &_call_f_dtlsError_c0);
  methods += new qt_gsi::GenericMethod ("dtlsErrorString", "@brief Method QString QDtlsClientVerifier::dtlsErrorString()\n", true, &_init_f_dtlsErrorString_c0, &_call_f_dtlsErrorString_c0);
  methods += new qt_gsi::GenericMethod ("setCookieGeneratorParameters", "@brief Method bool QDtlsClientVerifier::setCookieGeneratorParameters(const QDtlsClientVerifier::GeneratorParameters &params)\n", false, &_init_f_setCookieGeneratorParameters_5331, &_call_f_setCookieGeneratorParameters_5331);
  methods += new qt_gsi::GenericMethod ("verifiedHello", "@brief Method QByteArray QDtlsClientVerifier::verifiedHello()\n", true, &_init_f_verifiedHello_c0, &_call_f_verifiedHello_c0);
  methods += new qt_gsi::GenericMethod ("verifyClient", "@brief Method bool QDtlsClientVerifier::verifyClient(QUdpSocket *socket, const QByteArray &dgram, const QHostAddress &address, quint16 port)\n", false, &_init_f_verifyClient_7220, &_call_f_verifyClient_7220);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QDtlsClientVerifier::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QDtlsClientVerifier> decl_QDtlsClientVerifier (qtdecl_QObject (), "QtNetwork", "QDtlsClientVerifier_Native",
  methods_QDtlsClientVerifier (),
  "@hide\n@alias QDtlsClientVerifier");

GSI_QTNETWORK_PUBLIC gsi::Class<QDtlsClientVerifier> &qtdecl_QDtlsClientVerifier () { return decl_QDtlsClientVerifier; }

}


class QDtlsClientVerifier_Adaptor : public QDtlsClientVerifier, public qt_gsi::QtObjectBase
{
public:

  virtual ~QDtlsClientVerifier_Adaptor();

  //  [adaptor ctor] QDtlsClientVerifier::QDtlsClientVerifier(QObject *parent)
  QDtlsClientVerifier_Adaptor() : QDtlsClientVerifier()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QDtlsClientVerifier::QDtlsClientVerifier(QObject *parent)
  QDtlsClientVerifier_Adaptor(QObject *parent) : QDtlsClientVerifier(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QDtlsClientVerifier::isSignalConnected(const QMetaMethod &signal)
  bool fp_QDtlsClientVerifier_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QDtlsClientVerifier::isSignalConnected(signal);
  }

  //  [expose] int QDtlsClientVerifier::receivers(const char *signal)
  int fp_QDtlsClientVerifier_receivers_c1731 (const char *signal) const {
    return QDtlsClientVerifier::receivers(signal);
  }

  //  [expose] QObject *QDtlsClientVerifier::sender()
  QObject * fp_QDtlsClientVerifier_sender_c0 () const {
    return QDtlsClientVerifier::sender();
  }

  //  [expose] int QDtlsClientVerifier::senderSignalIndex()
  int fp_QDtlsClientVerifier_senderSignalIndex_c0 () const {
    return QDtlsClientVerifier::senderSignalIndex();
  }

  //  [adaptor impl] bool QDtlsClientVerifier::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QDtlsClientVerifier::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QDtlsClientVerifier_Adaptor, bool, QEvent *>(&QDtlsClientVerifier_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QDtlsClientVerifier::event(_event);
    }
  }

  //  [adaptor impl] bool QDtlsClientVerifier::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QDtlsClientVerifier::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QDtlsClientVerifier_Adaptor, bool, QObject *, QEvent *>(&QDtlsClientVerifier_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QDtlsClientVerifier::eventFilter(watched, event);
    }
  }

  //  [adaptor impl] void QDtlsClientVerifier::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QDtlsClientVerifier::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QDtlsClientVerifier_Adaptor, QChildEvent *>(&QDtlsClientVerifier_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QDtlsClientVerifier::childEvent(event);
    }
  }

  //  [adaptor impl] void QDtlsClientVerifier::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QDtlsClientVerifier::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QDtlsClientVerifier_Adaptor, QEvent *>(&QDtlsClientVerifier_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QDtlsClientVerifier::customEvent(event);
    }
  }

  //  [adaptor impl] void QDtlsClientVerifier::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QDtlsClientVerifier::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QDtlsClientVerifier_Adaptor, const QMetaMethod &>(&QDtlsClientVerifier_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QDtlsClientVerifier::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QDtlsClientVerifier::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QDtlsClientVerifier::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QDtlsClientVerifier_Adaptor, QTimerEvent *>(&QDtlsClientVerifier_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QDtlsClientVerifier::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QDtlsClientVerifier_Adaptor::~QDtlsClientVerifier_Adaptor() { }

//  Constructor QDtlsClientVerifier::QDtlsClientVerifier(QObject *parent) (adaptor class)

static void _init_ctor_QDtlsClientVerifier_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QDtlsClientVerifier_Adaptor> ();
}

static void _call_ctor_QDtlsClientVerifier_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QDtlsClientVerifier_Adaptor *> (new QDtlsClientVerifier_Adaptor (arg1));
}


// void QDtlsClientVerifier::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDtlsClientVerifier_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QDtlsClientVerifier::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDtlsClientVerifier_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QDtlsClientVerifier::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDtlsClientVerifier_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QDtlsClientVerifier::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDtlsClientVerifier_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QDtlsClientVerifier::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QDtlsClientVerifier_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QDtlsClientVerifier::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QDtlsClientVerifier_Adaptor *)cls)->fp_QDtlsClientVerifier_isSignalConnected_c2394 (arg1));
}


// exposed int QDtlsClientVerifier::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QDtlsClientVerifier_Adaptor *)cls)->fp_QDtlsClientVerifier_receivers_c1731 (arg1));
}


// exposed QObject *QDtlsClientVerifier::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QDtlsClientVerifier_Adaptor *)cls)->fp_QDtlsClientVerifier_sender_c0 ());
}


// exposed int QDtlsClientVerifier::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QDtlsClientVerifier_Adaptor *)cls)->fp_QDtlsClientVerifier_senderSignalIndex_c0 ());
}


// void QDtlsClientVerifier::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QDtlsClientVerifier_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QDtlsClientVerifier_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QDtlsClientVerifier> &qtdecl_QDtlsClientVerifier ();

static gsi::Methods methods_QDtlsClientVerifier_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QDtlsClientVerifier::QDtlsClientVerifier(QObject *parent)\nThis method creates an object of class QDtlsClientVerifier.", &_init_ctor_QDtlsClientVerifier_Adaptor_1302, &_call_ctor_QDtlsClientVerifier_Adaptor_1302);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QDtlsClientVerifier::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QDtlsClientVerifier::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QDtlsClientVerifier::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QDtlsClientVerifier::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QDtlsClientVerifier::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QDtlsClientVerifier::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QDtlsClientVerifier::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QDtlsClientVerifier::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QDtlsClientVerifier::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QDtlsClientVerifier::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QDtlsClientVerifier_Adaptor> decl_QDtlsClientVerifier_Adaptor (qtdecl_QDtlsClientVerifier (), "QtNetwork", "QDtlsClientVerifier",
  methods_QDtlsClientVerifier_Adaptor (),
  "@qt\n@brief Binding of QDtlsClientVerifier");

}
