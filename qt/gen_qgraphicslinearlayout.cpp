#include <QGraphicsLayoutItem>
#include <QGraphicsLinearLayout>
#include <QRectF>
#include <QSizeF>
#include "qgraphicslinearlayout.h"

#include "gen_qgraphicslinearlayout.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new() {
	return new QGraphicsLinearLayout();
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new2(uintptr_t orientation) {
	return new QGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation));
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new3(QGraphicsLayoutItem* parent) {
	return new QGraphicsLinearLayout(parent);
}

QGraphicsLinearLayout* QGraphicsLinearLayout_new4(uintptr_t orientation, QGraphicsLayoutItem* parent) {
	return new QGraphicsLinearLayout(static_cast<Qt::Orientation>(orientation), parent);
}

void QGraphicsLinearLayout_SetOrientation(QGraphicsLinearLayout* self, uintptr_t orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

uintptr_t QGraphicsLinearLayout_Orientation(QGraphicsLinearLayout* self) {
	Qt::Orientation ret = const_cast<const QGraphicsLinearLayout*>(self)->orientation();
	return static_cast<uintptr_t>(ret);
}

void QGraphicsLinearLayout_AddItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->addItem(item);
}

void QGraphicsLinearLayout_AddStretch(QGraphicsLinearLayout* self) {
	self->addStretch();
}

void QGraphicsLinearLayout_InsertItem(QGraphicsLinearLayout* self, int index, QGraphicsLayoutItem* item) {
	self->insertItem(static_cast<int>(index), item);
}

void QGraphicsLinearLayout_InsertStretch(QGraphicsLinearLayout* self, int index) {
	self->insertStretch(static_cast<int>(index));
}

void QGraphicsLinearLayout_RemoveItem(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	self->removeItem(item);
}

void QGraphicsLinearLayout_RemoveAt(QGraphicsLinearLayout* self, int index) {
	self->removeAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetSpacing(QGraphicsLinearLayout* self, double spacing) {
	self->setSpacing(static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_Spacing(QGraphicsLinearLayout* self) {
	return const_cast<const QGraphicsLinearLayout*>(self)->spacing();
}

void QGraphicsLinearLayout_SetItemSpacing(QGraphicsLinearLayout* self, int index, double spacing) {
	self->setItemSpacing(static_cast<int>(index), static_cast<qreal>(spacing));
}

double QGraphicsLinearLayout_ItemSpacing(QGraphicsLinearLayout* self, int index) {
	return const_cast<const QGraphicsLinearLayout*>(self)->itemSpacing(static_cast<int>(index));
}

void QGraphicsLinearLayout_SetStretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int stretch) {
	self->setStretchFactor(item, static_cast<int>(stretch));
}

int QGraphicsLinearLayout_StretchFactor(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	return const_cast<const QGraphicsLinearLayout*>(self)->stretchFactor(item);
}

void QGraphicsLinearLayout_SetAlignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item, int alignment) {
	self->setAlignment(item, static_cast<Qt::Alignment>(alignment));
}

int QGraphicsLinearLayout_Alignment(QGraphicsLinearLayout* self, QGraphicsLayoutItem* item) {
	Qt::Alignment ret = const_cast<const QGraphicsLinearLayout*>(self)->alignment(item);
	return static_cast<int>(ret);
}

void QGraphicsLinearLayout_SetGeometry(QGraphicsLinearLayout* self, QRectF* rect) {
	self->setGeometry(*rect);
}

int QGraphicsLinearLayout_Count(QGraphicsLinearLayout* self) {
	return const_cast<const QGraphicsLinearLayout*>(self)->count();
}

QGraphicsLayoutItem* QGraphicsLinearLayout_ItemAt(QGraphicsLinearLayout* self, int index) {
	return const_cast<const QGraphicsLinearLayout*>(self)->itemAt(static_cast<int>(index));
}

void QGraphicsLinearLayout_Invalidate(QGraphicsLinearLayout* self) {
	self->invalidate();
}

QSizeF* QGraphicsLinearLayout_SizeHint(QGraphicsLinearLayout* self, uintptr_t which) {
	QSizeF ret = const_cast<const QGraphicsLinearLayout*>(self)->sizeHint(static_cast<Qt::SizeHint>(which));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLinearLayout_Dump(QGraphicsLinearLayout* self) {
	const_cast<const QGraphicsLinearLayout*>(self)->dump();
}

void QGraphicsLinearLayout_AddStretch1(QGraphicsLinearLayout* self, int stretch) {
	self->addStretch(static_cast<int>(stretch));
}

void QGraphicsLinearLayout_InsertStretch2(QGraphicsLinearLayout* self, int index, int stretch) {
	self->insertStretch(static_cast<int>(index), static_cast<int>(stretch));
}

QSizeF* QGraphicsLinearLayout_SizeHint2(QGraphicsLinearLayout* self, uintptr_t which, QSizeF* constraint) {
	QSizeF ret = self->sizeHint(static_cast<Qt::SizeHint>(which), *constraint);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QSizeF*>(new QSizeF(ret));
}

void QGraphicsLinearLayout_Dump1(QGraphicsLinearLayout* self, int indent) {
	self->dump(static_cast<int>(indent));
}

void QGraphicsLinearLayout_Delete(QGraphicsLinearLayout* self) {
	delete self;
}
