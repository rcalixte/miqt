#include <QChar>
#include <QCollator>
#include <QCollatorSortKey>
#include <QLocale>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qcollator.h"

#include "gen_qcollator.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QCollatorSortKey* QCollatorSortKey_new(QCollatorSortKey* other) {
	return new QCollatorSortKey(*other);
}

void QCollatorSortKey_OperatorAssign(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->operator=(*other);
}

void QCollatorSortKey_Swap(QCollatorSortKey* self, QCollatorSortKey* other) {
	self->swap(*other);
}

int QCollatorSortKey_Compare(QCollatorSortKey* self, QCollatorSortKey* key) {
	return const_cast<const QCollatorSortKey*>(self)->compare(*key);
}

void QCollatorSortKey_Delete(QCollatorSortKey* self) {
	delete self;
}

QCollator* QCollator_new() {
	return new QCollator();
}

QCollator* QCollator_new2(QLocale* locale) {
	return new QCollator(*locale);
}

QCollator* QCollator_new3(QCollator* param1) {
	return new QCollator(*param1);
}

void QCollator_OperatorAssign(QCollator* self, QCollator* param1) {
	self->operator=(*param1);
}

void QCollator_Swap(QCollator* self, QCollator* other) {
	self->swap(*other);
}

void QCollator_SetLocale(QCollator* self, QLocale* locale) {
	self->setLocale(*locale);
}

QLocale* QCollator_Locale(QCollator* self) {
	QLocale ret = const_cast<const QCollator*>(self)->locale();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QLocale*>(new QLocale(ret));
}

uintptr_t QCollator_CaseSensitivity(QCollator* self) {
	Qt::CaseSensitivity ret = const_cast<const QCollator*>(self)->caseSensitivity();
	return static_cast<uintptr_t>(ret);
}

void QCollator_SetCaseSensitivity(QCollator* self, uintptr_t cs) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(cs));
}

void QCollator_SetNumericMode(QCollator* self, bool on) {
	self->setNumericMode(on);
}

bool QCollator_NumericMode(QCollator* self) {
	return const_cast<const QCollator*>(self)->numericMode();
}

void QCollator_SetIgnorePunctuation(QCollator* self, bool on) {
	self->setIgnorePunctuation(on);
}

bool QCollator_IgnorePunctuation(QCollator* self) {
	return const_cast<const QCollator*>(self)->ignorePunctuation();
}

int QCollator_Compare(QCollator* self, const char* s1, size_t s1_Strlen, const char* s2, size_t s2_Strlen) {
	QString s1_QString = QString::fromUtf8(s1, s1_Strlen);
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QCollator*>(self)->compare(s1_QString, s2_QString);
}

int QCollator_Compare3(QCollator* self, QChar* s1, int len1, QChar* s2, int len2) {
	return const_cast<const QCollator*>(self)->compare(s1, static_cast<int>(len1), s2, static_cast<int>(len2));
}

bool QCollator_OperatorCall(QCollator* self, const char* s1, size_t s1_Strlen, const char* s2, size_t s2_Strlen) {
	QString s1_QString = QString::fromUtf8(s1, s1_Strlen);
	QString s2_QString = QString::fromUtf8(s2, s2_Strlen);
	return const_cast<const QCollator*>(self)->operator()(s1_QString, s2_QString);
}

QCollatorSortKey* QCollator_SortKey(QCollator* self, const char* stringVal, size_t stringVal_Strlen) {
	QString stringVal_QString = QString::fromUtf8(stringVal, stringVal_Strlen);
	QCollatorSortKey ret = const_cast<const QCollator*>(self)->sortKey(stringVal_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QCollatorSortKey*>(new QCollatorSortKey(ret));
}

void QCollator_Delete(QCollator* self) {
	delete self;
}
