#include <QMediaAvailabilityControl>
#include <QMediaControl>
#include <QMetaObject>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qmediaavailabilitycontrol.h>
#include "gen_qmediaavailabilitycontrol.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

void QMediaAvailabilityControl_virtbase(QMediaAvailabilityControl* src, QMediaControl** outptr_QMediaControl) {
	*outptr_QMediaControl = static_cast<QMediaControl*>(src);
}

QMetaObject* QMediaAvailabilityControl_MetaObject(const QMediaAvailabilityControl* self) {
	return (QMetaObject*) self->metaObject();
}

void* QMediaAvailabilityControl_Metacast(QMediaAvailabilityControl* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QMediaAvailabilityControl_Tr(const char* s) {
	QString _ret = QMediaAvailabilityControl::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAvailabilityControl_TrUtf8(const char* s) {
	QString _ret = QMediaAvailabilityControl::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QMediaAvailabilityControl_Availability(const QMediaAvailabilityControl* self) {
	QMultimedia::AvailabilityStatus _ret = self->availability();
	return static_cast<int>(_ret);
}

void QMediaAvailabilityControl_AvailabilityChanged(QMediaAvailabilityControl* self, int availability) {
	self->availabilityChanged(static_cast<QMultimedia::AvailabilityStatus>(availability));
}

void QMediaAvailabilityControl_connect_AvailabilityChanged(QMediaAvailabilityControl* self, intptr_t slot) {
	QMediaAvailabilityControl::connect(self, static_cast<void (QMediaAvailabilityControl::*)(QMultimedia::AvailabilityStatus)>(&QMediaAvailabilityControl::availabilityChanged), self, [=](QMultimedia::AvailabilityStatus availability) {
		QMultimedia::AvailabilityStatus availability_ret = availability;
		int sigval1 = static_cast<int>(availability_ret);
		miqt_exec_callback_QMediaAvailabilityControl_AvailabilityChanged(slot, sigval1);
	});
}

struct miqt_string QMediaAvailabilityControl_Tr2(const char* s, const char* c) {
	QString _ret = QMediaAvailabilityControl::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAvailabilityControl_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaAvailabilityControl::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAvailabilityControl_TrUtf82(const char* s, const char* c) {
	QString _ret = QMediaAvailabilityControl::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaAvailabilityControl_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QMediaAvailabilityControl::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaAvailabilityControl_Delete(QMediaAvailabilityControl* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QMediaAvailabilityControl*>( self );
	} else {
		delete self;
	}
}

