#include <QList>
#include <QMediaMetaData>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qmediametadata.h>
#include "gen_qmediametadata.h"
#include "_cgo_export.h"

QMediaMetaData* QMediaMetaData_new(QMediaMetaData* param1) {
	return new QMediaMetaData(*param1);
}

QMediaMetaData* QMediaMetaData_new2() {
	return new QMediaMetaData();
}

QVariant* QMediaMetaData_Value(const QMediaMetaData* self, int k) {
	return new QVariant(self->value(static_cast<QMediaMetaData::Key>(k)));
}

void QMediaMetaData_Insert(QMediaMetaData* self, int k, QVariant* value) {
	self->insert(static_cast<QMediaMetaData::Key>(k), *value);
}

void QMediaMetaData_Remove(QMediaMetaData* self, int k) {
	self->remove(static_cast<QMediaMetaData::Key>(k));
}

struct miqt_array QMediaMetaData_Keys(const QMediaMetaData* self) {
	QList<QMediaMetaData::Key> _ret = self->keys();
	// Convert QList<> from C++ memory to manually-managed C memory
	int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QMediaMetaData::Key _lv_ret = _ret[i];
		_arr[i] = static_cast<int>(_lv_ret);
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

QVariant* QMediaMetaData_OperatorSubscript(QMediaMetaData* self, int k) {
	QVariant& _ret = self->operator[](static_cast<QMediaMetaData::Key>(k));
	// Cast returned reference into pointer
	return &_ret;
}

void QMediaMetaData_Clear(QMediaMetaData* self) {
	self->clear();
}

bool QMediaMetaData_IsEmpty(const QMediaMetaData* self) {
	return self->isEmpty();
}

struct miqt_string QMediaMetaData_StringValue(const QMediaMetaData* self, int k) {
	QString _ret = self->stringValue(static_cast<QMediaMetaData::Key>(k));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QMediaMetaData_MetaDataKeyToString(int k) {
	QString _ret = QMediaMetaData::metaDataKeyToString(static_cast<QMediaMetaData::Key>(k));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QMediaMetaData_Delete(QMediaMetaData* self) {
	delete self;
}
