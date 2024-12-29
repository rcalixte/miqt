#include <QAbstractItemDelegate>
#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QEvent>
#include <QHelpEvent>
#include <QItemDelegate>
#include <QItemEditorFactory>
#include <QList>
#include <QMetaObject>
#include <QModelIndex>
#include <QObject>
#include <QPainter>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStyleOptionViewItem>
#include <QWidget>
#include <qitemdelegate.h>
#include "gen_qitemdelegate.h"

#ifndef _Bool
#define _Bool bool
#endif
#include "_cgo_export.h"

class MiqtVirtualQItemDelegate : public virtual QItemDelegate {
public:

	MiqtVirtualQItemDelegate(): QItemDelegate() {};
	MiqtVirtualQItemDelegate(QObject* parent): QItemDelegate(parent) {};

	virtual ~MiqtVirtualQItemDelegate() = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__Paint = 0;

	// Subclass to allow providing a Go implementation
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__Paint == 0) {
			QItemDelegate::paint(painter, option, index);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_Paint(const_cast<MiqtVirtualQItemDelegate*>(this), handle__Paint, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_Paint(QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) const {

		QItemDelegate::paint(painter, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SizeHint = 0;

	// Subclass to allow providing a Go implementation
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__SizeHint == 0) {
			return QItemDelegate::sizeHint(option, index);
		}
		
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval1 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		QSize* callback_return_value = miqt_exec_callback_QItemDelegate_SizeHint(const_cast<MiqtVirtualQItemDelegate*>(this), handle__SizeHint, sigval1, sigval2);

		return *callback_return_value;
	}

	// Wrapper to allow calling protected method
	QSize* virtualbase_SizeHint(QStyleOptionViewItem* option, QModelIndex* index) const {

		return new QSize(QItemDelegate::sizeHint(*option, *index));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__CreateEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual QWidget* createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__CreateEditor == 0) {
			return QItemDelegate::createEditor(parent, option, index);
		}
		
		QWidget* sigval1 = parent;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		QWidget* callback_return_value = miqt_exec_callback_QItemDelegate_CreateEditor(const_cast<MiqtVirtualQItemDelegate*>(this), handle__CreateEditor, sigval1, sigval2, sigval3);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	QWidget* virtualbase_CreateEditor(QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) const {

		return QItemDelegate::createEditor(parent, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetEditorData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditorData(QWidget* editor, const QModelIndex& index) const override {
		if (handle__SetEditorData == 0) {
			QItemDelegate::setEditorData(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_SetEditorData(const_cast<MiqtVirtualQItemDelegate*>(this), handle__SetEditorData, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetEditorData(QWidget* editor, QModelIndex* index) const {

		QItemDelegate::setEditorData(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__SetModelData = 0;

	// Subclass to allow providing a Go implementation
	virtual void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const override {
		if (handle__SetModelData == 0) {
			QItemDelegate::setModelData(editor, model, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		QAbstractItemModel* sigval2 = model;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_SetModelData(const_cast<MiqtVirtualQItemDelegate*>(this), handle__SetModelData, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_SetModelData(QWidget* editor, QAbstractItemModel* model, QModelIndex* index) const {

		QItemDelegate::setModelData(editor, model, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__UpdateEditorGeometry = 0;

	// Subclass to allow providing a Go implementation
	virtual void updateEditorGeometry(QWidget* editor, const QStyleOptionViewItem& option, const QModelIndex& index) const override {
		if (handle__UpdateEditorGeometry == 0) {
			QItemDelegate::updateEditorGeometry(editor, option, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval3 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_UpdateEditorGeometry(const_cast<MiqtVirtualQItemDelegate*>(this), handle__UpdateEditorGeometry, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_UpdateEditorGeometry(QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) const {

		QItemDelegate::updateEditorGeometry(editor, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawDisplay = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawDisplay(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QString& text) const override {
		if (handle__DrawDisplay == 0) {
			QItemDelegate::drawDisplay(painter, option, rect, text);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		const QString text_ret = text;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray text_b = text_ret.toUtf8();
		struct miqt_string text_ms;
		text_ms.len = text_b.length();
		text_ms.data = static_cast<char*>(malloc(text_ms.len));
		memcpy(text_ms.data, text_b.data(), text_ms.len);
		struct miqt_string sigval4 = text_ms;

		miqt_exec_callback_QItemDelegate_DrawDisplay(const_cast<MiqtVirtualQItemDelegate*>(this), handle__DrawDisplay, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawDisplay(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text) const {
		QString text_QString = QString::fromUtf8(text.data, text.len);

		QItemDelegate::drawDisplay(painter, *option, *rect, text_QString);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawDecoration = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawDecoration(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, const QPixmap& pixmap) const override {
		if (handle__DrawDecoration == 0) {
			QItemDelegate::drawDecoration(painter, option, rect, pixmap);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		const QPixmap& pixmap_ret = pixmap;
		// Cast returned reference into pointer
		QPixmap* sigval4 = const_cast<QPixmap*>(&pixmap_ret);

		miqt_exec_callback_QItemDelegate_DrawDecoration(const_cast<MiqtVirtualQItemDelegate*>(this), handle__DrawDecoration, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawDecoration(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) const {

		QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawFocus = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawFocus(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect) const override {
		if (handle__DrawFocus == 0) {
			QItemDelegate::drawFocus(painter, option, rect);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);

		miqt_exec_callback_QItemDelegate_DrawFocus(const_cast<MiqtVirtualQItemDelegate*>(this), handle__DrawFocus, sigval1, sigval2, sigval3);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawFocus(QPainter* painter, QStyleOptionViewItem* option, QRect* rect) const {

		QItemDelegate::drawFocus(painter, *option, *rect);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DrawCheck = 0;

	// Subclass to allow providing a Go implementation
	virtual void drawCheck(QPainter* painter, const QStyleOptionViewItem& option, const QRect& rect, Qt::CheckState state) const override {
		if (handle__DrawCheck == 0) {
			QItemDelegate::drawCheck(painter, option, rect, state);
			return;
		}
		
		QPainter* sigval1 = painter;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval2 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QRect& rect_ret = rect;
		// Cast returned reference into pointer
		QRect* sigval3 = const_cast<QRect*>(&rect_ret);
		Qt::CheckState state_ret = state;
		int sigval4 = static_cast<int>(state_ret);

		miqt_exec_callback_QItemDelegate_DrawCheck(const_cast<MiqtVirtualQItemDelegate*>(this), handle__DrawCheck, sigval1, sigval2, sigval3, sigval4);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DrawCheck(QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state) const {

		QItemDelegate::drawCheck(painter, *option, *rect, static_cast<Qt::CheckState>(state));

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* object, QEvent* event) override {
		if (handle__EventFilter == 0) {
			return QItemDelegate::eventFilter(object, event);
		}
		
		QObject* sigval1 = object;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QItemDelegate_EventFilter(this, handle__EventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EventFilter(QObject* object, QEvent* event) {

		return QItemDelegate::eventFilter(object, event);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__EditorEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool editorEvent(QEvent* event, QAbstractItemModel* model, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__EditorEvent == 0) {
			return QItemDelegate::editorEvent(event, model, option, index);
		}
		
		QEvent* sigval1 = event;
		QAbstractItemModel* sigval2 = model;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QItemDelegate_EditorEvent(this, handle__EditorEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_EditorEvent(QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {

		return QItemDelegate::editorEvent(event, model, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__DestroyEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void destroyEditor(QWidget* editor, const QModelIndex& index) const override {
		if (handle__DestroyEditor == 0) {
			QItemDelegate::destroyEditor(editor, index);
			return;
		}
		
		QWidget* sigval1 = editor;
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval2 = const_cast<QModelIndex*>(&index_ret);

		miqt_exec_callback_QItemDelegate_DestroyEditor(const_cast<MiqtVirtualQItemDelegate*>(this), handle__DestroyEditor, sigval1, sigval2);

		
	}

	// Wrapper to allow calling protected method
	void virtualbase_DestroyEditor(QWidget* editor, QModelIndex* index) const {

		QItemDelegate::destroyEditor(editor, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__HelpEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual bool helpEvent(QHelpEvent* event, QAbstractItemView* view, const QStyleOptionViewItem& option, const QModelIndex& index) override {
		if (handle__HelpEvent == 0) {
			return QItemDelegate::helpEvent(event, view, option, index);
		}
		
		QHelpEvent* sigval1 = event;
		QAbstractItemView* sigval2 = view;
		const QStyleOptionViewItem& option_ret = option;
		// Cast returned reference into pointer
		QStyleOptionViewItem* sigval3 = const_cast<QStyleOptionViewItem*>(&option_ret);
		const QModelIndex& index_ret = index;
		// Cast returned reference into pointer
		QModelIndex* sigval4 = const_cast<QModelIndex*>(&index_ret);

		bool callback_return_value = miqt_exec_callback_QItemDelegate_HelpEvent(this, handle__HelpEvent, sigval1, sigval2, sigval3, sigval4);

		return callback_return_value;
	}

	// Wrapper to allow calling protected method
	bool virtualbase_HelpEvent(QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {

		return QItemDelegate::helpEvent(event, view, *option, *index);

	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__PaintingRoles = 0;

	// Subclass to allow providing a Go implementation
	virtual QVector<int> paintingRoles() const override {
		if (handle__PaintingRoles == 0) {
			return QItemDelegate::paintingRoles();
		}
		

		struct miqt_array /* of int */  callback_return_value = miqt_exec_callback_QItemDelegate_PaintingRoles(const_cast<MiqtVirtualQItemDelegate*>(this), handle__PaintingRoles);
		QVector<int> callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		int* callback_return_value_arr = static_cast<int*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			callback_return_value_QList.push_back(static_cast<int>(callback_return_value_arr[i]));
		}

		return callback_return_value_QList;
	}

	// Wrapper to allow calling protected method
	struct miqt_array /* of int */  virtualbase_PaintingRoles() const {

		QVector<int> _ret = QItemDelegate::paintingRoles();
		// Convert QList<> from C++ memory to manually-managed C memory
		int* _arr = static_cast<int*>(malloc(sizeof(int) * _ret.length()));
		for (size_t i = 0, e = _ret.length(); i < e; ++i) {
			_arr[i] = _ret[i];
		}
		struct miqt_array _out;
		_out.len = _ret.length();
		_out.data = static_cast<void*>(_arr);
		return _out;

	}

};

QItemDelegate* QItemDelegate_new() {
	return new MiqtVirtualQItemDelegate();
}

QItemDelegate* QItemDelegate_new2(QObject* parent) {
	return new MiqtVirtualQItemDelegate(parent);
}

void QItemDelegate_virtbase(QItemDelegate* src, QAbstractItemDelegate** outptr_QAbstractItemDelegate) {
	*outptr_QAbstractItemDelegate = static_cast<QAbstractItemDelegate*>(src);
}

QMetaObject* QItemDelegate_MetaObject(const QItemDelegate* self) {
	return (QMetaObject*) self->metaObject();
}

void* QItemDelegate_Metacast(QItemDelegate* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QItemDelegate_Tr(const char* s) {
	QString _ret = QItemDelegate::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_TrUtf8(const char* s) {
	QString _ret = QItemDelegate::trUtf8(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QItemDelegate_HasClipping(const QItemDelegate* self) {
	return self->hasClipping();
}

void QItemDelegate_SetClipping(QItemDelegate* self, bool clip) {
	self->setClipping(clip);
}

void QItemDelegate_Paint(const QItemDelegate* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	self->paint(painter, *option, *index);
}

QSize* QItemDelegate_SizeHint(const QItemDelegate* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return new QSize(self->sizeHint(*option, *index));
}

QWidget* QItemDelegate_CreateEditor(const QItemDelegate* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return self->createEditor(parent, *option, *index);
}

void QItemDelegate_SetEditorData(const QItemDelegate* self, QWidget* editor, QModelIndex* index) {
	self->setEditorData(editor, *index);
}

void QItemDelegate_SetModelData(const QItemDelegate* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	self->setModelData(editor, model, *index);
}

void QItemDelegate_UpdateEditorGeometry(const QItemDelegate* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	self->updateEditorGeometry(editor, *option, *index);
}

QItemEditorFactory* QItemDelegate_ItemEditorFactory(const QItemDelegate* self) {
	return self->itemEditorFactory();
}

void QItemDelegate_SetItemEditorFactory(QItemDelegate* self, QItemEditorFactory* factory) {
	self->setItemEditorFactory(factory);
}

struct miqt_string QItemDelegate_Tr2(const char* s, const char* c) {
	QString _ret = QItemDelegate::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_Tr3(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_TrUtf82(const char* s, const char* c) {
	QString _ret = QItemDelegate::trUtf8(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QItemDelegate_TrUtf83(const char* s, const char* c, int n) {
	QString _ret = QItemDelegate::trUtf8(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QItemDelegate_override_virtual_Paint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__Paint = slot;
}

void QItemDelegate_virtualbase_Paint(const void* self, QPainter* painter, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_Paint(painter, option, index);
}

void QItemDelegate_override_virtual_SizeHint(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__SizeHint = slot;
}

QSize* QItemDelegate_virtualbase_SizeHint(const void* self, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_SizeHint(option, index);
}

void QItemDelegate_override_virtual_CreateEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__CreateEditor = slot;
}

QWidget* QItemDelegate_virtualbase_CreateEditor(const void* self, QWidget* parent, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_CreateEditor(parent, option, index);
}

void QItemDelegate_override_virtual_SetEditorData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__SetEditorData = slot;
}

void QItemDelegate_virtualbase_SetEditorData(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_SetEditorData(editor, index);
}

void QItemDelegate_override_virtual_SetModelData(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__SetModelData = slot;
}

void QItemDelegate_virtualbase_SetModelData(const void* self, QWidget* editor, QAbstractItemModel* model, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_SetModelData(editor, model, index);
}

void QItemDelegate_override_virtual_UpdateEditorGeometry(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__UpdateEditorGeometry = slot;
}

void QItemDelegate_virtualbase_UpdateEditorGeometry(const void* self, QWidget* editor, QStyleOptionViewItem* option, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_UpdateEditorGeometry(editor, option, index);
}

void QItemDelegate_override_virtual_DrawDisplay(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__DrawDisplay = slot;
}

void QItemDelegate_virtualbase_DrawDisplay(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, struct miqt_string text) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_DrawDisplay(painter, option, rect, text);
}

void QItemDelegate_override_virtual_DrawDecoration(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__DrawDecoration = slot;
}

void QItemDelegate_virtualbase_DrawDecoration(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_DrawDecoration(painter, option, rect, pixmap);
}

void QItemDelegate_override_virtual_DrawFocus(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__DrawFocus = slot;
}

void QItemDelegate_virtualbase_DrawFocus(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_DrawFocus(painter, option, rect);
}

void QItemDelegate_override_virtual_DrawCheck(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__DrawCheck = slot;
}

void QItemDelegate_virtualbase_DrawCheck(const void* self, QPainter* painter, QStyleOptionViewItem* option, QRect* rect, int state) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_DrawCheck(painter, option, rect, state);
}

void QItemDelegate_override_virtual_EventFilter(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__EventFilter = slot;
}

bool QItemDelegate_virtualbase_EventFilter(void* self, QObject* object, QEvent* event) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_EventFilter(object, event);
}

void QItemDelegate_override_virtual_EditorEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__EditorEvent = slot;
}

bool QItemDelegate_virtualbase_EditorEvent(void* self, QEvent* event, QAbstractItemModel* model, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_EditorEvent(event, model, option, index);
}

void QItemDelegate_override_virtual_DestroyEditor(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__DestroyEditor = slot;
}

void QItemDelegate_virtualbase_DestroyEditor(const void* self, QWidget* editor, QModelIndex* index) {
	( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_DestroyEditor(editor, index);
}

void QItemDelegate_override_virtual_HelpEvent(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__HelpEvent = slot;
}

bool QItemDelegate_virtualbase_HelpEvent(void* self, QHelpEvent* event, QAbstractItemView* view, QStyleOptionViewItem* option, QModelIndex* index) {
	return ( (MiqtVirtualQItemDelegate*)(self) )->virtualbase_HelpEvent(event, view, option, index);
}

void QItemDelegate_override_virtual_PaintingRoles(void* self, intptr_t slot) {
	dynamic_cast<MiqtVirtualQItemDelegate*>( (QItemDelegate*)(self) )->handle__PaintingRoles = slot;
}

struct miqt_array /* of int */  QItemDelegate_virtualbase_PaintingRoles(const void* self) {
	return ( (const MiqtVirtualQItemDelegate*)(self) )->virtualbase_PaintingRoles();
}

void QItemDelegate_Delete(QItemDelegate* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<MiqtVirtualQItemDelegate*>( self );
	} else {
		delete self;
	}
}

