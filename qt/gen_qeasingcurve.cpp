#include <QEasingCurve>
#include <QList>
#include <QPointF>
#include "qeasingcurve.h"

#include "gen_qeasingcurve.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QEasingCurve* QEasingCurve_new() {
	return new QEasingCurve();
}

QEasingCurve* QEasingCurve_new2(QEasingCurve* other) {
	return new QEasingCurve(*other);
}

QEasingCurve* QEasingCurve_new3(uintptr_t typeVal) {
	return new QEasingCurve(static_cast<QEasingCurve::Type>(typeVal));
}

void QEasingCurve_OperatorAssign(QEasingCurve* self, QEasingCurve* other) {
	self->operator=(*other);
}

void QEasingCurve_Swap(QEasingCurve* self, QEasingCurve* other) {
	self->swap(*other);
}

bool QEasingCurve_OperatorEqual(QEasingCurve* self, QEasingCurve* other) {
	return const_cast<const QEasingCurve*>(self)->operator==(*other);
}

bool QEasingCurve_OperatorNotEqual(QEasingCurve* self, QEasingCurve* other) {
	return const_cast<const QEasingCurve*>(self)->operator!=(*other);
}

double QEasingCurve_Amplitude(QEasingCurve* self) {
	return const_cast<const QEasingCurve*>(self)->amplitude();
}

void QEasingCurve_SetAmplitude(QEasingCurve* self, double amplitude) {
	self->setAmplitude(static_cast<qreal>(amplitude));
}

double QEasingCurve_Period(QEasingCurve* self) {
	return const_cast<const QEasingCurve*>(self)->period();
}

void QEasingCurve_SetPeriod(QEasingCurve* self, double period) {
	self->setPeriod(static_cast<qreal>(period));
}

double QEasingCurve_Overshoot(QEasingCurve* self) {
	return const_cast<const QEasingCurve*>(self)->overshoot();
}

void QEasingCurve_SetOvershoot(QEasingCurve* self, double overshoot) {
	self->setOvershoot(static_cast<qreal>(overshoot));
}

void QEasingCurve_AddCubicBezierSegment(QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint) {
	self->addCubicBezierSegment(*c1, *c2, *endPoint);
}

void QEasingCurve_AddTCBSegment(QEasingCurve* self, QPointF* nextPoint, double t, double c, double b) {
	self->addTCBSegment(*nextPoint, static_cast<qreal>(t), static_cast<qreal>(c), static_cast<qreal>(b));
}

void QEasingCurve_ToCubicSpline(QEasingCurve* self, QPointF*** _out, size_t* _out_len) {
	QVector<QPointF> ret = const_cast<const QEasingCurve*>(self)->toCubicSpline();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QPointF** __out = static_cast<QPointF**>(malloc(sizeof(QPointF**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QPointF(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

uintptr_t QEasingCurve_Type(QEasingCurve* self) {
	QEasingCurve::Type ret = const_cast<const QEasingCurve*>(self)->type();
	return static_cast<uintptr_t>(ret);
}

void QEasingCurve_SetType(QEasingCurve* self, uintptr_t typeVal) {
	self->setType(static_cast<QEasingCurve::Type>(typeVal));
}

double QEasingCurve_ValueForProgress(QEasingCurve* self, double progress) {
	return const_cast<const QEasingCurve*>(self)->valueForProgress(static_cast<qreal>(progress));
}

void QEasingCurve_Delete(QEasingCurve* self) {
	delete self;
}
