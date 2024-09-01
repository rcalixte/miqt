#include <QAction>
#include <QIcon>
#include <QMenu>
#include <QMenuBar>
#include <QMetaObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include "qmenubar.h"

#include "gen_qmenubar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMenuBar* QMenuBar_new() {
	return new QMenuBar();
}

QMenuBar* QMenuBar_new2(QWidget* parent) {
	return new QMenuBar(parent);
}

QMetaObject* QMenuBar_MetaObject(QMenuBar* self) {
	return (QMetaObject*) const_cast<const QMenuBar*>(self)->metaObject();
}

void QMenuBar_Tr(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenuBar_TrUtf8(const char* s, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

QAction* QMenuBar_AddAction(QMenuBar* self, const char* text, size_t text_Strlen) {
	QString text_QString = QString::fromUtf8(text, text_Strlen);
	return self->addAction(text_QString);
}

QAction* QMenuBar_AddMenu(QMenuBar* self, QMenu* menu) {
	return self->addMenu(menu);
}

QMenu* QMenuBar_AddMenuWithTitle(QMenuBar* self, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return self->addMenu(title_QString);
}

QMenu* QMenuBar_AddMenu2(QMenuBar* self, QIcon* icon, const char* title, size_t title_Strlen) {
	QString title_QString = QString::fromUtf8(title, title_Strlen);
	return self->addMenu(*icon, title_QString);
}

QAction* QMenuBar_AddSeparator(QMenuBar* self) {
	return self->addSeparator();
}

QAction* QMenuBar_InsertSeparator(QMenuBar* self, QAction* before) {
	return self->insertSeparator(before);
}

QAction* QMenuBar_InsertMenu(QMenuBar* self, QAction* before, QMenu* menu) {
	return self->insertMenu(before, menu);
}

void QMenuBar_Clear(QMenuBar* self) {
	self->clear();
}

QAction* QMenuBar_ActiveAction(QMenuBar* self) {
	return const_cast<const QMenuBar*>(self)->activeAction();
}

void QMenuBar_SetActiveAction(QMenuBar* self, QAction* action) {
	self->setActiveAction(action);
}

void QMenuBar_SetDefaultUp(QMenuBar* self, bool defaultUp) {
	self->setDefaultUp(defaultUp);
}

bool QMenuBar_IsDefaultUp(QMenuBar* self) {
	return const_cast<const QMenuBar*>(self)->isDefaultUp();
}

QSize* QMenuBar_SizeHint(QMenuBar* self) {
	QSize ret = const_cast<const QMenuBar*>(self)->sizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

QSize* QMenuBar_MinimumSizeHint(QMenuBar* self) {
	QSize ret = const_cast<const QMenuBar*>(self)->minimumSizeHint();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSize*>(new QSize(ret));
}

int QMenuBar_HeightForWidth(QMenuBar* self, int param1) {
	return const_cast<const QMenuBar*>(self)->heightForWidth(static_cast<int>(param1));
}

QRect* QMenuBar_ActionGeometry(QMenuBar* self, QAction* param1) {
	QRect ret = const_cast<const QMenuBar*>(self)->actionGeometry(param1);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QRect*>(new QRect(ret));
}

QAction* QMenuBar_ActionAt(QMenuBar* self, QPoint* param1) {
	return const_cast<const QMenuBar*>(self)->actionAt(*param1);
}

void QMenuBar_SetCornerWidget(QMenuBar* self, QWidget* w) {
	self->setCornerWidget(w);
}

QWidget* QMenuBar_CornerWidget(QMenuBar* self) {
	return const_cast<const QMenuBar*>(self)->cornerWidget();
}

bool QMenuBar_IsNativeMenuBar(QMenuBar* self) {
	return const_cast<const QMenuBar*>(self)->isNativeMenuBar();
}

void QMenuBar_SetNativeMenuBar(QMenuBar* self, bool nativeMenuBar) {
	self->setNativeMenuBar(nativeMenuBar);
}

void QMenuBar_SetVisible(QMenuBar* self, bool visible) {
	self->setVisible(visible);
}

void QMenuBar_Triggered(QMenuBar* self, QAction* action) {
	self->triggered(action);
}

void QMenuBar_connect_Triggered(QMenuBar* self, void* slot) {
	QMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::triggered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenuBar_Hovered(QMenuBar* self, QAction* action) {
	self->hovered(action);
}

void QMenuBar_connect_Hovered(QMenuBar* self, void* slot) {
	QMenuBar::connect(self, static_cast<void (QMenuBar::*)(QAction*)>(&QMenuBar::hovered), self, [=](QAction* action) {
		miqt_exec_callback(slot, 0, nullptr);
	});
}

void QMenuBar_Tr2(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenuBar_Tr3(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenuBar_TrUtf82(const char* s, const char* c, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenuBar_TrUtf83(const char* s, const char* c, int n, char** _out, int* _out_Strlen) {
	QString ret = QMenuBar::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMenuBar_SetCornerWidget2(QMenuBar* self, QWidget* w, uintptr_t corner) {
	self->setCornerWidget(w, static_cast<Qt::Corner>(corner));
}

QWidget* QMenuBar_CornerWidget1(QMenuBar* self, uintptr_t corner) {
	return self->cornerWidget(static_cast<Qt::Corner>(corner));
}

void QMenuBar_Delete(QMenuBar* self) {
	delete self;
}
