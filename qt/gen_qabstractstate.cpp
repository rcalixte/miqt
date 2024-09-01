#include <QAbstractState>
#include <QMetaObject>
#include <QState>
#include <QStateMachine>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qabstractstate.h"

#include "gen_qabstractstate.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMetaObject* QAbstractState_MetaObject(QAbstractState* self) {
	return (QMetaObject*) const_cast<const QAbstractState*>(self)->metaObject();
}

void QAbstractState_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractState_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QState* QAbstractState_ParentState(QAbstractState* self) {
	return const_cast<const QAbstractState*>(self)->parentState();
}

QStateMachine* QAbstractState_Machine(QAbstractState* self) {
	return const_cast<const QAbstractState*>(self)->machine();
}

bool QAbstractState_Active(QAbstractState* self) {
	return const_cast<const QAbstractState*>(self)->active();
}

void QAbstractState_ActiveChanged(QAbstractState* self, bool active) {
	self->activeChanged(active);
}

void QAbstractState_connect_ActiveChanged(QAbstractState* self, void* slot) {
	QAbstractState::connect(self, static_cast<void (QAbstractState::*)(bool)>(&QAbstractState::activeChanged), self, [=](bool active) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QAbstractState_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractState_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractState_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractState_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QAbstractState::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QAbstractState_Delete(QAbstractState* self) {
	delete self;
}
