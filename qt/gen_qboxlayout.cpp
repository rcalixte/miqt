#include <QBoxLayout>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QMetaObject>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVBoxLayout>
#include <QWidget>
#include "qboxlayout.h"

#include "gen_qboxlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QBoxLayout* QBoxLayout_new(uintptr_t param1) {
	return new QBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(uintptr_t param1, QWidget* parent) {
	return new QBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

QMetaObject* QBoxLayout_MetaObject(QBoxLayout* self) {
	return (QMetaObject*) const_cast<const QBoxLayout*>(self)->metaObject();
}

void QBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QBoxLayout_Direction(QBoxLayout* self) {
	QBoxLayout::Direction ret = const_cast<const QBoxLayout*>(self)->direction();
	return static_cast<uintptr_t>(ret);
}

void QBoxLayout_SetDirection(QBoxLayout* self, uintptr_t direction) {
	self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
	self->addSpacing(static_cast<int>(size));
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
	self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
	self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
	self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
	self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
	self->addStrut(static_cast<int>(param1));
}

void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
	self->insertSpacing(static_cast<int>(index), static_cast<int>(size));
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
	self->insertSpacerItem(static_cast<int>(index), spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
	self->insertWidget(static_cast<int>(index), widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
	self->insertLayout(static_cast<int>(index), layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
	self->insertItem(static_cast<int>(index), param2);
}

int QBoxLayout_Spacing(QBoxLayout* self) {
	return const_cast<const QBoxLayout*>(self)->spacing();
}

void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
	self->setSpacing(static_cast<int>(spacing));
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
	return self->setStretchFactor(w, static_cast<int>(stretch));
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
	return self->setStretchFactor(l, static_cast<int>(stretch));
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
	self->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

int QBoxLayout_Stretch(QBoxLayout* self, int index) {
	return const_cast<const QBoxLayout*>(self)->stretch(static_cast<int>(index));
}

QSize* QBoxLayout_SizeHint(QBoxLayout* self) {
	QSize ret = const_cast<const QBoxLayout*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QBoxLayout_MinimumSize(QBoxLayout* self) {
	QSize ret = const_cast<const QBoxLayout*>(self)->minimumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QBoxLayout_MaximumSize(QBoxLayout* self) {
	QSize ret = const_cast<const QBoxLayout*>(self)->maximumSize();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

bool QBoxLayout_HasHeightForWidth(QBoxLayout* self) {
	return const_cast<const QBoxLayout*>(self)->hasHeightForWidth();
}

int QBoxLayout_HeightForWidth(QBoxLayout* self, int param1) {
	return const_cast<const QBoxLayout*>(self)->heightForWidth(static_cast<int>(param1));
}

int QBoxLayout_MinimumHeightForWidth(QBoxLayout* self, int param1) {
	return const_cast<const QBoxLayout*>(self)->minimumHeightForWidth(static_cast<int>(param1));
}

int QBoxLayout_ExpandingDirections(QBoxLayout* self) {
	Qt::Orientations ret = const_cast<const QBoxLayout*>(self)->expandingDirections();
	return static_cast<int>(ret);
}

void QBoxLayout_Invalidate(QBoxLayout* self) {
	self->invalidate();
}

QLayoutItem* QBoxLayout_ItemAt(QBoxLayout* self, int param1) {
	return const_cast<const QBoxLayout*>(self)->itemAt(static_cast<int>(param1));
}

QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
	return self->takeAt(static_cast<int>(param1));
}

int QBoxLayout_Count(QBoxLayout* self) {
	return const_cast<const QBoxLayout*>(self)->count();
}

void QBoxLayout_SetGeometry(QBoxLayout* self, QRect* geometry) {
	self->setGeometry(*geometry);
}

void QBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
	self->addWidget(param1, static_cast<int>(stretch));
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
	self->addWidget(param1, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
	self->addLayout(layout, static_cast<int>(stretch));
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch));
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
	self->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), static_cast<Qt::Alignment>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
	self->insertLayout(static_cast<int>(index), layout, static_cast<int>(stretch));
}

void QBoxLayout_Delete(QBoxLayout* self) {
	delete self;
}

QHBoxLayout* QHBoxLayout_new() {
	return new QHBoxLayout();
}

QHBoxLayout* QHBoxLayout_new2(QWidget* parent) {
	return new QHBoxLayout(parent);
}

QMetaObject* QHBoxLayout_MetaObject(QHBoxLayout* self) {
	return (QMetaObject*) const_cast<const QHBoxLayout*>(self)->metaObject();
}

void QHBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QHBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
	delete self;
}

QVBoxLayout* QVBoxLayout_new() {
	return new QVBoxLayout();
}

QVBoxLayout* QVBoxLayout_new2(QWidget* parent) {
	return new QVBoxLayout(parent);
}

QMetaObject* QVBoxLayout_MetaObject(QVBoxLayout* self) {
	return (QMetaObject*) const_cast<const QVBoxLayout*>(self)->metaObject();
}

void QVBoxLayout_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QVBoxLayout::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
	delete self;
}
