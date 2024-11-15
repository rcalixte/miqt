#define WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State
#include <QAccessibleActionInterface>
#include <QAccessibleEditableTextInterface>
#include <QAccessibleEvent>
#include <QAccessibleHyperlinkInterface>
#include <QAccessibleImageInterface>
#include <QAccessibleInterface>
#include <QAccessibleStateChangeEvent>
#include <QAccessibleTableCellInterface>
#include <QAccessibleTableInterface>
#include <QAccessibleTableModelChangeEvent>
#include <QAccessibleTextCursorEvent>
#include <QAccessibleTextInsertEvent>
#include <QAccessibleTextInterface>
#include <QAccessibleTextRemoveEvent>
#include <QAccessibleTextSelectionEvent>
#include <QAccessibleTextUpdateEvent>
#include <QAccessibleValueChangeEvent>
#include <QAccessibleValueInterface>
#include <QColor>
#include <QList>
#include <QObject>
#include <QPoint>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <QWindow>
#include <qaccessible.h>
#include "gen_qaccessible.h"
#include "_cgo_export.h"

bool QAccessibleInterface_IsValid(const QAccessibleInterface* self) {
	return self->isValid();
}

QObject* QAccessibleInterface_Object(const QAccessibleInterface* self) {
	return self->object();
}

QWindow* QAccessibleInterface_Window(const QAccessibleInterface* self) {
	return self->window();
}

QAccessibleInterface* QAccessibleInterface_FocusChild(const QAccessibleInterface* self) {
	return self->focusChild();
}

QAccessibleInterface* QAccessibleInterface_ChildAt(const QAccessibleInterface* self, int x, int y) {
	return self->childAt(static_cast<int>(x), static_cast<int>(y));
}

QAccessibleInterface* QAccessibleInterface_Parent(const QAccessibleInterface* self) {
	return self->parent();
}

QAccessibleInterface* QAccessibleInterface_Child(const QAccessibleInterface* self, int index) {
	return self->child(static_cast<int>(index));
}

int QAccessibleInterface_ChildCount(const QAccessibleInterface* self) {
	return self->childCount();
}

int QAccessibleInterface_IndexOfChild(const QAccessibleInterface* self, QAccessibleInterface* param1) {
	return self->indexOfChild(param1);
}

struct miqt_string QAccessibleInterface_Text(const QAccessibleInterface* self, int t) {
	QString _ret = self->text(static_cast<QAccessible::Text>(t));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleInterface_SetText(QAccessibleInterface* self, int t, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->setText(static_cast<QAccessible::Text>(t), text_QString);
}

QRect* QAccessibleInterface_Rect(const QAccessibleInterface* self) {
	return new QRect(self->rect());
}

int QAccessibleInterface_Role(const QAccessibleInterface* self) {
	QAccessible::Role _ret = self->role();
	return static_cast<int>(_ret);
}

QAccessible__State* QAccessibleInterface_State(const QAccessibleInterface* self) {
	return new QAccessible::State(self->state());
}

QColor* QAccessibleInterface_ForegroundColor(const QAccessibleInterface* self) {
	return new QColor(self->foregroundColor());
}

QColor* QAccessibleInterface_BackgroundColor(const QAccessibleInterface* self) {
	return new QColor(self->backgroundColor());
}

QAccessibleTextInterface* QAccessibleInterface_TextInterface(QAccessibleInterface* self) {
	return self->textInterface();
}

QAccessibleEditableTextInterface* QAccessibleInterface_EditableTextInterface(QAccessibleInterface* self) {
	return self->editableTextInterface();
}

QAccessibleValueInterface* QAccessibleInterface_ValueInterface(QAccessibleInterface* self) {
	return self->valueInterface();
}

QAccessibleActionInterface* QAccessibleInterface_ActionInterface(QAccessibleInterface* self) {
	return self->actionInterface();
}

QAccessibleImageInterface* QAccessibleInterface_ImageInterface(QAccessibleInterface* self) {
	return self->imageInterface();
}

QAccessibleTableInterface* QAccessibleInterface_TableInterface(QAccessibleInterface* self) {
	return self->tableInterface();
}

QAccessibleTableCellInterface* QAccessibleInterface_TableCellInterface(QAccessibleInterface* self) {
	return self->tableCellInterface();
}

QAccessibleHyperlinkInterface* QAccessibleInterface_HyperlinkInterface(QAccessibleInterface* self) {
	return self->hyperlinkInterface();
}

void QAccessibleInterface_VirtualHook(QAccessibleInterface* self, int id, void* data) {
	self->virtual_hook(static_cast<int>(id), data);
}

void* QAccessibleInterface_InterfaceCast(QAccessibleInterface* self, int param1) {
	return self->interface_cast(static_cast<QAccessible::InterfaceType>(param1));
}

void QAccessibleTextInterface_Selection(const QAccessibleTextInterface* self, int selectionIndex, int* startOffset, int* endOffset) {
	self->selection(static_cast<int>(selectionIndex), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
}

int QAccessibleTextInterface_SelectionCount(const QAccessibleTextInterface* self) {
	return self->selectionCount();
}

void QAccessibleTextInterface_AddSelection(QAccessibleTextInterface* self, int startOffset, int endOffset) {
	self->addSelection(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleTextInterface_RemoveSelection(QAccessibleTextInterface* self, int selectionIndex) {
	self->removeSelection(static_cast<int>(selectionIndex));
}

void QAccessibleTextInterface_SetSelection(QAccessibleTextInterface* self, int selectionIndex, int startOffset, int endOffset) {
	self->setSelection(static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
}

int QAccessibleTextInterface_CursorPosition(const QAccessibleTextInterface* self) {
	return self->cursorPosition();
}

void QAccessibleTextInterface_SetCursorPosition(QAccessibleTextInterface* self, int position) {
	self->setCursorPosition(static_cast<int>(position));
}

struct miqt_string QAccessibleTextInterface_Text(const QAccessibleTextInterface* self, int startOffset, int endOffset) {
	QString _ret = self->text(static_cast<int>(startOffset), static_cast<int>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_TextBeforeOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textBeforeOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_TextAfterOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAfterOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextInterface_TextAtOffset(const QAccessibleTextInterface* self, int offset, int boundaryType, int* startOffset, int* endOffset) {
	QString _ret = self->textAtOffset(static_cast<int>(offset), static_cast<QAccessible::TextBoundaryType>(boundaryType), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTextInterface_CharacterCount(const QAccessibleTextInterface* self) {
	return self->characterCount();
}

QRect* QAccessibleTextInterface_CharacterRect(const QAccessibleTextInterface* self, int offset) {
	return new QRect(self->characterRect(static_cast<int>(offset)));
}

int QAccessibleTextInterface_OffsetAtPoint(const QAccessibleTextInterface* self, QPoint* point) {
	return self->offsetAtPoint(*point);
}

void QAccessibleTextInterface_ScrollToSubstring(QAccessibleTextInterface* self, int startIndex, int endIndex) {
	self->scrollToSubstring(static_cast<int>(startIndex), static_cast<int>(endIndex));
}

struct miqt_string QAccessibleTextInterface_Attributes(const QAccessibleTextInterface* self, int offset, int* startOffset, int* endOffset) {
	QString _ret = self->attributes(static_cast<int>(offset), static_cast<int*>(startOffset), static_cast<int*>(endOffset));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleTextInterface_OperatorAssign(QAccessibleTextInterface* self, QAccessibleTextInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleTextInterface_Delete(QAccessibleTextInterface* self) {
	delete self;
}

void QAccessibleEditableTextInterface_DeleteText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset) {
	self->deleteText(static_cast<int>(startOffset), static_cast<int>(endOffset));
}

void QAccessibleEditableTextInterface_InsertText(QAccessibleEditableTextInterface* self, int offset, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->insertText(static_cast<int>(offset), text_QString);
}

void QAccessibleEditableTextInterface_ReplaceText(QAccessibleEditableTextInterface* self, int startOffset, int endOffset, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	self->replaceText(static_cast<int>(startOffset), static_cast<int>(endOffset), text_QString);
}

void QAccessibleEditableTextInterface_OperatorAssign(QAccessibleEditableTextInterface* self, QAccessibleEditableTextInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleEditableTextInterface_Delete(QAccessibleEditableTextInterface* self) {
	delete self;
}

QVariant* QAccessibleValueInterface_CurrentValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->currentValue());
}

void QAccessibleValueInterface_SetCurrentValue(QAccessibleValueInterface* self, QVariant* value) {
	self->setCurrentValue(*value);
}

QVariant* QAccessibleValueInterface_MaximumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->maximumValue());
}

QVariant* QAccessibleValueInterface_MinimumValue(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumValue());
}

QVariant* QAccessibleValueInterface_MinimumStepSize(const QAccessibleValueInterface* self) {
	return new QVariant(self->minimumStepSize());
}

void QAccessibleValueInterface_OperatorAssign(QAccessibleValueInterface* self, QAccessibleValueInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleValueInterface_Delete(QAccessibleValueInterface* self) {
	delete self;
}

bool QAccessibleTableCellInterface_IsSelected(const QAccessibleTableCellInterface* self) {
	return self->isSelected();
}

struct miqt_array QAccessibleTableCellInterface_ColumnHeaderCells(const QAccessibleTableCellInterface* self) {
	QList<QAccessibleInterface *> _ret = self->columnHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_array QAccessibleTableCellInterface_RowHeaderCells(const QAccessibleTableCellInterface* self) {
	QList<QAccessibleInterface *> _ret = self->rowHeaderCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

int QAccessibleTableCellInterface_ColumnIndex(const QAccessibleTableCellInterface* self) {
	return self->columnIndex();
}

int QAccessibleTableCellInterface_RowIndex(const QAccessibleTableCellInterface* self) {
	return self->rowIndex();
}

int QAccessibleTableCellInterface_ColumnExtent(const QAccessibleTableCellInterface* self) {
	return self->columnExtent();
}

int QAccessibleTableCellInterface_RowExtent(const QAccessibleTableCellInterface* self) {
	return self->rowExtent();
}

QAccessibleInterface* QAccessibleTableCellInterface_Table(const QAccessibleTableCellInterface* self) {
	return self->table();
}

void QAccessibleTableCellInterface_OperatorAssign(QAccessibleTableCellInterface* self, QAccessibleTableCellInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleTableCellInterface_Delete(QAccessibleTableCellInterface* self) {
	delete self;
}

QAccessibleInterface* QAccessibleTableInterface_Caption(const QAccessibleTableInterface* self) {
	return self->caption();
}

QAccessibleInterface* QAccessibleTableInterface_Summary(const QAccessibleTableInterface* self) {
	return self->summary();
}

QAccessibleInterface* QAccessibleTableInterface_CellAt(const QAccessibleTableInterface* self, int row, int column) {
	return self->cellAt(static_cast<int>(row), static_cast<int>(column));
}

int QAccessibleTableInterface_SelectedCellCount(const QAccessibleTableInterface* self) {
	return self->selectedCellCount();
}

struct miqt_array QAccessibleTableInterface_SelectedCells(const QAccessibleTableInterface* self) {
	QList<QAccessibleInterface *> _ret = self->selectedCells();
	// Convert QList<> from C++ memory to manually-managed C memory
	QAccessibleInterface** _arr = static_cast<QAccessibleInterface**>(malloc(sizeof(QAccessibleInterface*) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		_arr[i] = _ret[i];
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleTableInterface_ColumnDescription(const QAccessibleTableInterface* self, int column) {
	QString _ret = self->columnDescription(static_cast<int>(column));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTableInterface_RowDescription(const QAccessibleTableInterface* self, int row) {
	QString _ret = self->rowDescription(static_cast<int>(row));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTableInterface_SelectedColumnCount(const QAccessibleTableInterface* self) {
	return self->selectedColumnCount();
}

int QAccessibleTableInterface_SelectedRowCount(const QAccessibleTableInterface* self) {
	return self->selectedRowCount();
}

int QAccessibleTableInterface_ColumnCount(const QAccessibleTableInterface* self) {
	return self->columnCount();
}

int QAccessibleTableInterface_RowCount(const QAccessibleTableInterface* self) {
	return self->rowCount();
}

struct miqt_array QAccessibleTableInterface_SelectedColumns(const QAccessibleTableInterface* self) {
	QList<int> _ret = self->selectedColumns();
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

struct miqt_array QAccessibleTableInterface_SelectedRows(const QAccessibleTableInterface* self) {
	QList<int> _ret = self->selectedRows();
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

bool QAccessibleTableInterface_IsColumnSelected(const QAccessibleTableInterface* self, int column) {
	return self->isColumnSelected(static_cast<int>(column));
}

bool QAccessibleTableInterface_IsRowSelected(const QAccessibleTableInterface* self, int row) {
	return self->isRowSelected(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectRow(QAccessibleTableInterface* self, int row) {
	return self->selectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_SelectColumn(QAccessibleTableInterface* self, int column) {
	return self->selectColumn(static_cast<int>(column));
}

bool QAccessibleTableInterface_UnselectRow(QAccessibleTableInterface* self, int row) {
	return self->unselectRow(static_cast<int>(row));
}

bool QAccessibleTableInterface_UnselectColumn(QAccessibleTableInterface* self, int column) {
	return self->unselectColumn(static_cast<int>(column));
}

void QAccessibleTableInterface_ModelChange(QAccessibleTableInterface* self, QAccessibleTableModelChangeEvent* event) {
	self->modelChange(event);
}

void QAccessibleTableInterface_Delete(QAccessibleTableInterface* self) {
	delete self;
}

struct miqt_string QAccessibleActionInterface_Tr(const char* sourceText) {
	QString _ret = QAccessibleActionInterface::tr(sourceText);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_array QAccessibleActionInterface_ActionNames(const QAccessibleActionInterface* self) {
	QStringList _ret = self->actionNames();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleActionInterface_LocalizedActionName(const QAccessibleActionInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->localizedActionName(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_LocalizedActionDescription(const QAccessibleActionInterface* self, struct miqt_string name) {
	QString name_QString = QString::fromUtf8(name.data, name.len);
	QString _ret = self->localizedActionDescription(name_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleActionInterface_DoAction(QAccessibleActionInterface* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	self->doAction(actionName_QString);
}

struct miqt_array QAccessibleActionInterface_KeyBindingsForAction(const QAccessibleActionInterface* self, struct miqt_string actionName) {
	QString actionName_QString = QString::fromUtf8(actionName.data, actionName.len);
	QStringList _ret = self->keyBindingsForAction(actionName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;
}

struct miqt_string QAccessibleActionInterface_PressAction() {
	const QString _ret = QAccessibleActionInterface::pressAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_IncreaseAction() {
	const QString _ret = QAccessibleActionInterface::increaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_DecreaseAction() {
	const QString _ret = QAccessibleActionInterface::decreaseAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ShowMenuAction() {
	const QString _ret = QAccessibleActionInterface::showMenuAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_SetFocusAction() {
	const QString _ret = QAccessibleActionInterface::setFocusAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ToggleAction() {
	const QString _ret = QAccessibleActionInterface::toggleAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ScrollLeftAction() {
	QString _ret = QAccessibleActionInterface::scrollLeftAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ScrollRightAction() {
	QString _ret = QAccessibleActionInterface::scrollRightAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ScrollUpAction() {
	QString _ret = QAccessibleActionInterface::scrollUpAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_ScrollDownAction() {
	QString _ret = QAccessibleActionInterface::scrollDownAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_NextPageAction() {
	QString _ret = QAccessibleActionInterface::nextPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_PreviousPageAction() {
	QString _ret = QAccessibleActionInterface::previousPageAction();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleActionInterface_OperatorAssign(QAccessibleActionInterface* self, QAccessibleActionInterface* param1) {
	self->operator=(*param1);
}

struct miqt_string QAccessibleActionInterface_Tr2(const char* sourceText, const char* disambiguation) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleActionInterface_Tr3(const char* sourceText, const char* disambiguation, int n) {
	QString _ret = QAccessibleActionInterface::tr(sourceText, disambiguation, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QAccessibleActionInterface_Delete(QAccessibleActionInterface* self) {
	delete self;
}

struct miqt_string QAccessibleImageInterface_ImageDescription(const QAccessibleImageInterface* self) {
	QString _ret = self->imageDescription();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

QSize* QAccessibleImageInterface_ImageSize(const QAccessibleImageInterface* self) {
	return new QSize(self->imageSize());
}

QPoint* QAccessibleImageInterface_ImagePosition(const QAccessibleImageInterface* self) {
	return new QPoint(self->imagePosition());
}

void QAccessibleImageInterface_OperatorAssign(QAccessibleImageInterface* self, QAccessibleImageInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleImageInterface_Delete(QAccessibleImageInterface* self) {
	delete self;
}

struct miqt_string QAccessibleHyperlinkInterface_Anchor(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchor();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleHyperlinkInterface_AnchorTarget(const QAccessibleHyperlinkInterface* self) {
	QString _ret = self->anchorTarget();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleHyperlinkInterface_StartIndex(const QAccessibleHyperlinkInterface* self) {
	return self->startIndex();
}

int QAccessibleHyperlinkInterface_EndIndex(const QAccessibleHyperlinkInterface* self) {
	return self->endIndex();
}

bool QAccessibleHyperlinkInterface_IsValid(const QAccessibleHyperlinkInterface* self) {
	return self->isValid();
}

void QAccessibleHyperlinkInterface_OperatorAssign(QAccessibleHyperlinkInterface* self, QAccessibleHyperlinkInterface* param1) {
	self->operator=(*param1);
}

void QAccessibleHyperlinkInterface_Delete(QAccessibleHyperlinkInterface* self) {
	delete self;
}

QAccessibleEvent* QAccessibleEvent_new(QObject* obj, int typ) {
	return new QAccessibleEvent(obj, static_cast<QAccessible::Event>(typ));
}

QAccessibleEvent* QAccessibleEvent_new2(QAccessibleInterface* iface, int typ) {
	return new QAccessibleEvent(iface, static_cast<QAccessible::Event>(typ));
}

int QAccessibleEvent_Type(const QAccessibleEvent* self) {
	QAccessible::Event _ret = self->type();
	return static_cast<int>(_ret);
}

QObject* QAccessibleEvent_Object(const QAccessibleEvent* self) {
	return self->object();
}

unsigned int QAccessibleEvent_UniqueId(const QAccessibleEvent* self) {
	QAccessible::Id _ret = self->uniqueId();
	return static_cast<unsigned int>(_ret);
}

void QAccessibleEvent_SetChild(QAccessibleEvent* self, int chld) {
	self->setChild(static_cast<int>(chld));
}

int QAccessibleEvent_Child(const QAccessibleEvent* self) {
	return self->child();
}

QAccessibleInterface* QAccessibleEvent_AccessibleInterface(const QAccessibleEvent* self) {
	return self->accessibleInterface();
}

void QAccessibleEvent_Delete(QAccessibleEvent* self) {
	delete self;
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new(QObject* obj, QAccessible__State* state) {
	return new QAccessibleStateChangeEvent(obj, *state);
}

QAccessibleStateChangeEvent* QAccessibleStateChangeEvent_new2(QAccessibleInterface* iface, QAccessible__State* state) {
	return new QAccessibleStateChangeEvent(iface, *state);
}

QAccessible__State* QAccessibleStateChangeEvent_ChangedStates(const QAccessibleStateChangeEvent* self) {
	return new QAccessible::State(self->changedStates());
}

void QAccessibleStateChangeEvent_Delete(QAccessibleStateChangeEvent* self) {
	delete self;
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new(QObject* obj, int cursorPos) {
	return new QAccessibleTextCursorEvent(obj, static_cast<int>(cursorPos));
}

QAccessibleTextCursorEvent* QAccessibleTextCursorEvent_new2(QAccessibleInterface* iface, int cursorPos) {
	return new QAccessibleTextCursorEvent(iface, static_cast<int>(cursorPos));
}

void QAccessibleTextCursorEvent_SetCursorPosition(QAccessibleTextCursorEvent* self, int position) {
	self->setCursorPosition(static_cast<int>(position));
}

int QAccessibleTextCursorEvent_CursorPosition(const QAccessibleTextCursorEvent* self) {
	return self->cursorPosition();
}

void QAccessibleTextCursorEvent_Delete(QAccessibleTextCursorEvent* self) {
	delete self;
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new(QObject* obj, int start, int end) {
	return new QAccessibleTextSelectionEvent(obj, static_cast<int>(start), static_cast<int>(end));
}

QAccessibleTextSelectionEvent* QAccessibleTextSelectionEvent_new2(QAccessibleInterface* iface, int start, int end) {
	return new QAccessibleTextSelectionEvent(iface, static_cast<int>(start), static_cast<int>(end));
}

void QAccessibleTextSelectionEvent_SetSelection(QAccessibleTextSelectionEvent* self, int start, int end) {
	self->setSelection(static_cast<int>(start), static_cast<int>(end));
}

int QAccessibleTextSelectionEvent_SelectionStart(const QAccessibleTextSelectionEvent* self) {
	return self->selectionStart();
}

int QAccessibleTextSelectionEvent_SelectionEnd(const QAccessibleTextSelectionEvent* self) {
	return self->selectionEnd();
}

void QAccessibleTextSelectionEvent_Delete(QAccessibleTextSelectionEvent* self) {
	delete self;
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new(QObject* obj, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextInsertEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextInsertEvent* QAccessibleTextInsertEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextInsertEvent(iface, static_cast<int>(position), text_QString);
}

struct miqt_string QAccessibleTextInsertEvent_TextInserted(const QAccessibleTextInsertEvent* self) {
	QString _ret = self->textInserted();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTextInsertEvent_ChangePosition(const QAccessibleTextInsertEvent* self) {
	return self->changePosition();
}

void QAccessibleTextInsertEvent_Delete(QAccessibleTextInsertEvent* self) {
	delete self;
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new(QObject* obj, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextRemoveEvent(obj, static_cast<int>(position), text_QString);
}

QAccessibleTextRemoveEvent* QAccessibleTextRemoveEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string text) {
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextRemoveEvent(iface, static_cast<int>(position), text_QString);
}

struct miqt_string QAccessibleTextRemoveEvent_TextRemoved(const QAccessibleTextRemoveEvent* self) {
	QString _ret = self->textRemoved();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTextRemoveEvent_ChangePosition(const QAccessibleTextRemoveEvent* self) {
	return self->changePosition();
}

void QAccessibleTextRemoveEvent_Delete(QAccessibleTextRemoveEvent* self) {
	delete self;
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new(QObject* obj, int position, struct miqt_string oldText, struct miqt_string text) {
	QString oldText_QString = QString::fromUtf8(oldText.data, oldText.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextUpdateEvent(obj, static_cast<int>(position), oldText_QString, text_QString);
}

QAccessibleTextUpdateEvent* QAccessibleTextUpdateEvent_new2(QAccessibleInterface* iface, int position, struct miqt_string oldText, struct miqt_string text) {
	QString oldText_QString = QString::fromUtf8(oldText.data, oldText.len);
	QString text_QString = QString::fromUtf8(text.data, text.len);
	return new QAccessibleTextUpdateEvent(iface, static_cast<int>(position), oldText_QString, text_QString);
}

struct miqt_string QAccessibleTextUpdateEvent_TextRemoved(const QAccessibleTextUpdateEvent* self) {
	QString _ret = self->textRemoved();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QAccessibleTextUpdateEvent_TextInserted(const QAccessibleTextUpdateEvent* self) {
	QString _ret = self->textInserted();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

int QAccessibleTextUpdateEvent_ChangePosition(const QAccessibleTextUpdateEvent* self) {
	return self->changePosition();
}

void QAccessibleTextUpdateEvent_Delete(QAccessibleTextUpdateEvent* self) {
	delete self;
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new(QObject* obj, QVariant* val) {
	return new QAccessibleValueChangeEvent(obj, *val);
}

QAccessibleValueChangeEvent* QAccessibleValueChangeEvent_new2(QAccessibleInterface* iface, QVariant* val) {
	return new QAccessibleValueChangeEvent(iface, *val);
}

void QAccessibleValueChangeEvent_SetValue(QAccessibleValueChangeEvent* self, QVariant* val) {
	self->setValue(*val);
}

QVariant* QAccessibleValueChangeEvent_Value(const QAccessibleValueChangeEvent* self) {
	return new QVariant(self->value());
}

void QAccessibleValueChangeEvent_Delete(QAccessibleValueChangeEvent* self) {
	delete self;
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new(QObject* obj, int changeType) {
	return new QAccessibleTableModelChangeEvent(obj, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

QAccessibleTableModelChangeEvent* QAccessibleTableModelChangeEvent_new2(QAccessibleInterface* iface, int changeType) {
	return new QAccessibleTableModelChangeEvent(iface, static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

void QAccessibleTableModelChangeEvent_SetModelChangeType(QAccessibleTableModelChangeEvent* self, int changeType) {
	self->setModelChangeType(static_cast<QAccessibleTableModelChangeEvent::ModelChangeType>(changeType));
}

int QAccessibleTableModelChangeEvent_ModelChangeType(const QAccessibleTableModelChangeEvent* self) {
	QAccessibleTableModelChangeEvent::ModelChangeType _ret = self->modelChangeType();
	return static_cast<int>(_ret);
}

void QAccessibleTableModelChangeEvent_SetFirstRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setFirstRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetFirstColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setFirstColumn(static_cast<int>(col));
}

void QAccessibleTableModelChangeEvent_SetLastRow(QAccessibleTableModelChangeEvent* self, int row) {
	self->setLastRow(static_cast<int>(row));
}

void QAccessibleTableModelChangeEvent_SetLastColumn(QAccessibleTableModelChangeEvent* self, int col) {
	self->setLastColumn(static_cast<int>(col));
}

int QAccessibleTableModelChangeEvent_FirstRow(const QAccessibleTableModelChangeEvent* self) {
	return self->firstRow();
}

int QAccessibleTableModelChangeEvent_FirstColumn(const QAccessibleTableModelChangeEvent* self) {
	return self->firstColumn();
}

int QAccessibleTableModelChangeEvent_LastRow(const QAccessibleTableModelChangeEvent* self) {
	return self->lastRow();
}

int QAccessibleTableModelChangeEvent_LastColumn(const QAccessibleTableModelChangeEvent* self) {
	return self->lastColumn();
}

void QAccessibleTableModelChangeEvent_Delete(QAccessibleTableModelChangeEvent* self) {
	delete self;
}

