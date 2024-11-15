#include <QMetaObject>
#include <QObject>
#include <QObjectCleanupHandler>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qobjectcleanuphandler.h>
#include "gen_qobjectcleanuphandler.h"
#include "_cgo_export.h"

QObjectCleanupHandler* QObjectCleanupHandler_new() {
	return new QObjectCleanupHandler();
}

QMetaObject* QObjectCleanupHandler_MetaObject(const QObjectCleanupHandler* self) {
	return (QMetaObject*) self->metaObject();
}

void* QObjectCleanupHandler_Metacast(QObjectCleanupHandler* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QObjectCleanupHandler_Tr(const char* s) {
	QString _ret = QObjectCleanupHandler::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QObject* QObjectCleanupHandler_Add(QObjectCleanupHandler* self, QObject* object) {
	return self->add(object);
}

void QObjectCleanupHandler_Remove(QObjectCleanupHandler* self, QObject* object) {
	self->remove(object);
}

bool QObjectCleanupHandler_IsEmpty(const QObjectCleanupHandler* self) {
	return self->isEmpty();
}

void QObjectCleanupHandler_Clear(QObjectCleanupHandler* self) {
	self->clear();
}

struct miqt_string QObjectCleanupHandler_Tr2(const char* s, const char* c) {
	QString _ret = QObjectCleanupHandler::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QObjectCleanupHandler_Tr3(const char* s, const char* c, int n) {
	QString _ret = QObjectCleanupHandler::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QObjectCleanupHandler_Delete(QObjectCleanupHandler* self) {
	delete self;
}

