#include <QApplication>
#include <QCommonStyle>
#include <QIcon>
#include <QMetaObject>
#include <QPainter>
#include <QPalette>
#include <QPixmap>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleHintReturn>
#include <QStyleOption>
#include <QStyleOptionComplex>
#include <QWidget>
#include <qcommonstyle.h>
#include "gen_qcommonstyle.h"
#include "_cgo_export.h"

QCommonStyle* QCommonStyle_new() {
	return new QCommonStyle();
}

QMetaObject* QCommonStyle_MetaObject(const QCommonStyle* self) {
	return (QMetaObject*) self->metaObject();
}

void* QCommonStyle_Metacast(QCommonStyle* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QCommonStyle_Tr(const char* s) {
	QString _ret = QCommonStyle::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommonStyle_TrUtf8(const char* s) {
	QString _ret = QCommonStyle::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommonStyle_DrawPrimitive(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p);
}

void QCommonStyle_DrawControl(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p);
}

QRect* QCommonStyle_SubElementRect(const QCommonStyle* self, int r, QStyleOption* opt) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt));
}

void QCommonStyle_DrawComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p);
}

int QCommonStyle_HitTestComplexControl(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt);
	return static_cast<int>(_ret);
}

QRect* QCommonStyle_SubControlRect(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc)));
}

QSize* QCommonStyle_SizeFromContents(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize));
}

int QCommonStyle_PixelMetric(const QCommonStyle* self, int m) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m));
}

int QCommonStyle_StyleHint(const QCommonStyle* self, int sh) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh));
}

QIcon* QCommonStyle_StandardIcon(const QCommonStyle* self, int standardIcon) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon)));
}

QPixmap* QCommonStyle_StandardPixmap(const QCommonStyle* self, int sp) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp)));
}

QPixmap* QCommonStyle_GeneratedIconPixmap(const QCommonStyle* self, int iconMode, QPixmap* pixmap, QStyleOption* opt) {
	return new QPixmap(self->generatedIconPixmap(static_cast<QIcon::Mode>(iconMode), *pixmap, opt));
}

int QCommonStyle_LayoutSpacing(const QCommonStyle* self, int control1, int control2, int orientation) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation));
}

void QCommonStyle_Polish(QCommonStyle* self, QPalette* param1) {
	self->polish(*param1);
}

void QCommonStyle_PolishWithApp(QCommonStyle* self, QApplication* app) {
	self->polish(app);
}

void QCommonStyle_PolishWithWidget(QCommonStyle* self, QWidget* widget) {
	self->polish(widget);
}

void QCommonStyle_Unpolish(QCommonStyle* self, QWidget* widget) {
	self->unpolish(widget);
}

void QCommonStyle_UnpolishWithApplication(QCommonStyle* self, QApplication* application) {
	self->unpolish(application);
}

struct miqt_string QCommonStyle_Tr2(const char* s, const char* c) {
	QString _ret = QCommonStyle::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommonStyle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCommonStyle::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommonStyle_TrUtf82(const char* s, const char* c) {
	QString _ret = QCommonStyle::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QCommonStyle_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QCommonStyle::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QCommonStyle_DrawPrimitive4(const QCommonStyle* self, int pe, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawPrimitive(static_cast<QStyle::PrimitiveElement>(pe), opt, p, w);
}

void QCommonStyle_DrawControl4(const QCommonStyle* self, int element, QStyleOption* opt, QPainter* p, QWidget* w) {
	self->drawControl(static_cast<QStyle::ControlElement>(element), opt, p, w);
}

QRect* QCommonStyle_SubElementRect3(const QCommonStyle* self, int r, QStyleOption* opt, QWidget* widget) {
	return new QRect(self->subElementRect(static_cast<QStyle::SubElement>(r), opt, widget));
}

void QCommonStyle_DrawComplexControl4(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPainter* p, QWidget* w) {
	self->drawComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, p, w);
}

int QCommonStyle_HitTestComplexControl4(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, QPoint* pt, QWidget* w) {
	QStyle::SubControl _ret = self->hitTestComplexControl(static_cast<QStyle::ComplexControl>(cc), opt, *pt, w);
	return static_cast<int>(_ret);
}

QRect* QCommonStyle_SubControlRect4(const QCommonStyle* self, int cc, QStyleOptionComplex* opt, int sc, QWidget* w) {
	return new QRect(self->subControlRect(static_cast<QStyle::ComplexControl>(cc), opt, static_cast<QStyle::SubControl>(sc), w));
}

QSize* QCommonStyle_SizeFromContents4(const QCommonStyle* self, int ct, QStyleOption* opt, QSize* contentsSize, QWidget* widget) {
	return new QSize(self->sizeFromContents(static_cast<QStyle::ContentsType>(ct), opt, *contentsSize, widget));
}

int QCommonStyle_PixelMetric2(const QCommonStyle* self, int m, QStyleOption* opt) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt);
}

int QCommonStyle_PixelMetric3(const QCommonStyle* self, int m, QStyleOption* opt, QWidget* widget) {
	return self->pixelMetric(static_cast<QStyle::PixelMetric>(m), opt, widget);
}

int QCommonStyle_StyleHint2(const QCommonStyle* self, int sh, QStyleOption* opt) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt);
}

int QCommonStyle_StyleHint3(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w);
}

int QCommonStyle_StyleHint4(const QCommonStyle* self, int sh, QStyleOption* opt, QWidget* w, QStyleHintReturn* shret) {
	return self->styleHint(static_cast<QStyle::StyleHint>(sh), opt, w, shret);
}

QIcon* QCommonStyle_StandardIcon2(const QCommonStyle* self, int standardIcon, QStyleOption* opt) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt));
}

QIcon* QCommonStyle_StandardIcon3(const QCommonStyle* self, int standardIcon, QStyleOption* opt, QWidget* widget) {
	return new QIcon(self->standardIcon(static_cast<QStyle::StandardPixmap>(standardIcon), opt, widget));
}

QPixmap* QCommonStyle_StandardPixmap2(const QCommonStyle* self, int sp, QStyleOption* opt) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt));
}

QPixmap* QCommonStyle_StandardPixmap3(const QCommonStyle* self, int sp, QStyleOption* opt, QWidget* widget) {
	return new QPixmap(self->standardPixmap(static_cast<QStyle::StandardPixmap>(sp), opt, widget));
}

int QCommonStyle_LayoutSpacing4(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option);
}

int QCommonStyle_LayoutSpacing5(const QCommonStyle* self, int control1, int control2, int orientation, QStyleOption* option, QWidget* widget) {
	return self->layoutSpacing(static_cast<QSizePolicy::ControlType>(control1), static_cast<QSizePolicy::ControlType>(control2), static_cast<Qt::Orientation>(orientation), option, widget);
}

void QCommonStyle_Delete(QCommonStyle* self) {
	delete self;
}

