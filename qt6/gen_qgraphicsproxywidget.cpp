#include <QGraphicsItem>
#include <QGraphicsProxyWidget>
#include <QMetaObject>
#include <QPainter>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionGraphicsItem>
#include <QWidget>
#include <qgraphicsproxywidget.h>
#include "gen_qgraphicsproxywidget.h"
#include "_cgo_export.h"

QGraphicsProxyWidget* QGraphicsProxyWidget_new() {
	return new QGraphicsProxyWidget();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new2(QGraphicsItem* parent) {
	return new QGraphicsProxyWidget(parent);
}

QGraphicsProxyWidget* QGraphicsProxyWidget_new3(QGraphicsItem* parent, int wFlags) {
	return new QGraphicsProxyWidget(parent, static_cast<Qt::WindowFlags>(wFlags));
}

QMetaObject* QGraphicsProxyWidget_MetaObject(const QGraphicsProxyWidget* self) {
	return (QMetaObject*) self->metaObject();
}

void* QGraphicsProxyWidget_Metacast(QGraphicsProxyWidget* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QGraphicsProxyWidget_Tr(const char* s) {
	QString _ret = QGraphicsProxyWidget::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsProxyWidget_SetWidget(QGraphicsProxyWidget* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QGraphicsProxyWidget_Widget(const QGraphicsProxyWidget* self) {
	return self->widget();
}

QRectF* QGraphicsProxyWidget_SubWidgetRect(const QGraphicsProxyWidget* self, QWidget* widget) {
	return new QRectF(self->subWidgetRect(widget));
}

void QGraphicsProxyWidget_SetGeometry(QGraphicsProxyWidget* self, QRectF* rect) {
	self->setGeometry(*rect);
}

void QGraphicsProxyWidget_Paint(QGraphicsProxyWidget* self, QPainter* painter, QStyleOptionGraphicsItem* option, QWidget* widget) {
	self->paint(painter, option, widget);
}

int QGraphicsProxyWidget_Type(const QGraphicsProxyWidget* self) {
	return self->type();
}

QGraphicsProxyWidget* QGraphicsProxyWidget_CreateProxyForChildWidget(QGraphicsProxyWidget* self, QWidget* child) {
	return self->createProxyForChildWidget(child);
}

struct miqt_string QGraphicsProxyWidget_Tr2(const char* s, const char* c) {
	QString _ret = QGraphicsProxyWidget::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QGraphicsProxyWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGraphicsProxyWidget::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QGraphicsProxyWidget_Delete(QGraphicsProxyWidget* self) {
	delete self;
}

