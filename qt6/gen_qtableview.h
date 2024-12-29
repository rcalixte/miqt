#pragma once
#ifndef MIQT_QT6_GEN_QTABLEVIEW_H
#define MIQT_QT6_GEN_QTABLEVIEW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemDelegate;
class QAbstractItemModel;
class QAbstractItemView;
class QAbstractScrollArea;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHeaderView;
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QMetaObject;
class QModelIndex;
class QMouseEvent;
class QObject;
class QPaintDevice;
class QPaintEvent;
class QPoint;
class QRect;
class QRegion;
class QResizeEvent;
class QSize;
class QStyleOptionViewItem;
class QTableView;
class QTimerEvent;
class QVariant;
class QWidget;
#else
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QAbstractItemView QAbstractItemView;
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHeaderView QHeaderView;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QModelIndex QModelIndex;
typedef struct QMouseEvent QMouseEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
typedef struct QResizeEvent QResizeEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionViewItem QStyleOptionViewItem;
typedef struct QTableView QTableView;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
#endif

QTableView* QTableView_new(QWidget* parent);
QTableView* QTableView_new2();
void QTableView_virtbase(QTableView* src, QAbstractItemView** outptr_QAbstractItemView);
QMetaObject* QTableView_MetaObject(const QTableView* self);
void* QTableView_Metacast(QTableView* self, const char* param1);
struct miqt_string QTableView_Tr(const char* s);
void QTableView_SetModel(QTableView* self, QAbstractItemModel* model);
void QTableView_SetRootIndex(QTableView* self, QModelIndex* index);
void QTableView_SetSelectionModel(QTableView* self, QItemSelectionModel* selectionModel);
void QTableView_DoItemsLayout(QTableView* self);
QHeaderView* QTableView_HorizontalHeader(const QTableView* self);
QHeaderView* QTableView_VerticalHeader(const QTableView* self);
void QTableView_SetHorizontalHeader(QTableView* self, QHeaderView* header);
void QTableView_SetVerticalHeader(QTableView* self, QHeaderView* header);
int QTableView_RowViewportPosition(const QTableView* self, int row);
int QTableView_RowAt(const QTableView* self, int y);
void QTableView_SetRowHeight(QTableView* self, int row, int height);
int QTableView_RowHeight(const QTableView* self, int row);
int QTableView_ColumnViewportPosition(const QTableView* self, int column);
int QTableView_ColumnAt(const QTableView* self, int x);
void QTableView_SetColumnWidth(QTableView* self, int column, int width);
int QTableView_ColumnWidth(const QTableView* self, int column);
bool QTableView_IsRowHidden(const QTableView* self, int row);
void QTableView_SetRowHidden(QTableView* self, int row, bool hide);
bool QTableView_IsColumnHidden(const QTableView* self, int column);
void QTableView_SetColumnHidden(QTableView* self, int column, bool hide);
void QTableView_SetSortingEnabled(QTableView* self, bool enable);
bool QTableView_IsSortingEnabled(const QTableView* self);
bool QTableView_ShowGrid(const QTableView* self);
int QTableView_GridStyle(const QTableView* self);
void QTableView_SetGridStyle(QTableView* self, int style);
void QTableView_SetWordWrap(QTableView* self, bool on);
bool QTableView_WordWrap(const QTableView* self);
void QTableView_SetCornerButtonEnabled(QTableView* self, bool enable);
bool QTableView_IsCornerButtonEnabled(const QTableView* self);
QRect* QTableView_VisualRect(const QTableView* self, QModelIndex* index);
void QTableView_ScrollTo(QTableView* self, QModelIndex* index, int hint);
QModelIndex* QTableView_IndexAt(const QTableView* self, QPoint* p);
void QTableView_SetSpan(QTableView* self, int row, int column, int rowSpan, int columnSpan);
int QTableView_RowSpan(const QTableView* self, int row, int column);
int QTableView_ColumnSpan(const QTableView* self, int row, int column);
void QTableView_ClearSpans(QTableView* self);
void QTableView_SelectRow(QTableView* self, int row);
void QTableView_SelectColumn(QTableView* self, int column);
void QTableView_HideRow(QTableView* self, int row);
void QTableView_HideColumn(QTableView* self, int column);
void QTableView_ShowRow(QTableView* self, int row);
void QTableView_ShowColumn(QTableView* self, int column);
void QTableView_ResizeRowToContents(QTableView* self, int row);
void QTableView_ResizeRowsToContents(QTableView* self);
void QTableView_ResizeColumnToContents(QTableView* self, int column);
void QTableView_ResizeColumnsToContents(QTableView* self);
void QTableView_SortByColumn(QTableView* self, int column, int order);
void QTableView_SetShowGrid(QTableView* self, bool show);
void QTableView_ScrollContentsBy(QTableView* self, int dx, int dy);
void QTableView_InitViewItemOption(const QTableView* self, QStyleOptionViewItem* option);
void QTableView_PaintEvent(QTableView* self, QPaintEvent* e);
void QTableView_TimerEvent(QTableView* self, QTimerEvent* event);
int QTableView_HorizontalOffset(const QTableView* self);
int QTableView_VerticalOffset(const QTableView* self);
QModelIndex* QTableView_MoveCursor(QTableView* self, int cursorAction, int modifiers);
void QTableView_SetSelection(QTableView* self, QRect* rect, int command);
QRegion* QTableView_VisualRegionForSelection(const QTableView* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QTableView_SelectedIndexes(const QTableView* self);
void QTableView_UpdateGeometries(QTableView* self);
QSize* QTableView_ViewportSizeHint(const QTableView* self);
int QTableView_SizeHintForRow(const QTableView* self, int row);
int QTableView_SizeHintForColumn(const QTableView* self, int column);
void QTableView_VerticalScrollbarAction(QTableView* self, int action);
void QTableView_HorizontalScrollbarAction(QTableView* self, int action);
bool QTableView_IsIndexHidden(const QTableView* self, QModelIndex* index);
void QTableView_SelectionChanged(QTableView* self, QItemSelection* selected, QItemSelection* deselected);
void QTableView_CurrentChanged(QTableView* self, QModelIndex* current, QModelIndex* previous);
struct miqt_string QTableView_Tr2(const char* s, const char* c);
struct miqt_string QTableView_Tr3(const char* s, const char* c, int n);
void QTableView_override_virtual_SetModel(void* self, intptr_t slot);
void QTableView_virtualbase_SetModel(void* self, QAbstractItemModel* model);
void QTableView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QTableView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
void QTableView_override_virtual_SetSelectionModel(void* self, intptr_t slot);
void QTableView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QTableView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QTableView_virtualbase_DoItemsLayout(void* self);
void QTableView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QTableView_virtualbase_VisualRect(const void* self, QModelIndex* index);
void QTableView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QTableView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
void QTableView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QTableView_virtualbase_IndexAt(const void* self, QPoint* p);
void QTableView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QTableView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QTableView_override_virtual_InitViewItemOption(void* self, intptr_t slot);
void QTableView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option);
void QTableView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QTableView_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QTableView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QTableView_virtualbase_TimerEvent(void* self, QTimerEvent* event);
void QTableView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QTableView_virtualbase_HorizontalOffset(const void* self);
void QTableView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QTableView_virtualbase_VerticalOffset(const void* self);
void QTableView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QTableView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
void QTableView_override_virtual_SetSelection(void* self, intptr_t slot);
void QTableView_virtualbase_SetSelection(void* self, QRect* rect, int command);
void QTableView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QTableView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
void QTableView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QTableView_virtualbase_SelectedIndexes(const void* self);
void QTableView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QTableView_virtualbase_UpdateGeometries(void* self);
void QTableView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QTableView_virtualbase_ViewportSizeHint(const void* self);
void QTableView_override_virtual_SizeHintForRow(void* self, intptr_t slot);
int QTableView_virtualbase_SizeHintForRow(const void* self, int row);
void QTableView_override_virtual_SizeHintForColumn(void* self, intptr_t slot);
int QTableView_virtualbase_SizeHintForColumn(const void* self, int column);
void QTableView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot);
void QTableView_virtualbase_VerticalScrollbarAction(void* self, int action);
void QTableView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot);
void QTableView_virtualbase_HorizontalScrollbarAction(void* self, int action);
void QTableView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QTableView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
void QTableView_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QTableView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QTableView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QTableView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
void QTableView_override_virtual_KeyboardSearch(void* self, intptr_t slot);
void QTableView_virtualbase_KeyboardSearch(void* self, struct miqt_string search);
void QTableView_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot);
QAbstractItemDelegate* QTableView_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index);
void QTableView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QTableView_virtualbase_InputMethodQuery(const void* self, int query);
void QTableView_override_virtual_Reset(void* self, intptr_t slot);
void QTableView_virtualbase_Reset(void* self);
void QTableView_override_virtual_SelectAll(void* self, intptr_t slot);
void QTableView_virtualbase_SelectAll(void* self);
void QTableView_override_virtual_DataChanged(void* self, intptr_t slot);
void QTableView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QTableView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QTableView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
void QTableView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QTableView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QTableView_override_virtual_UpdateEditorData(void* self, intptr_t slot);
void QTableView_virtualbase_UpdateEditorData(void* self);
void QTableView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot);
void QTableView_virtualbase_UpdateEditorGeometries(void* self);
void QTableView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot);
void QTableView_virtualbase_VerticalScrollbarValueChanged(void* self, int value);
void QTableView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot);
void QTableView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value);
void QTableView_override_virtual_CloseEditor(void* self, intptr_t slot);
void QTableView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint);
void QTableView_override_virtual_CommitData(void* self, intptr_t slot);
void QTableView_virtualbase_CommitData(void* self, QWidget* editor);
void QTableView_override_virtual_EditorDestroyed(void* self, intptr_t slot);
void QTableView_virtualbase_EditorDestroyed(void* self, QObject* editor);
void QTableView_override_virtual_Edit2(void* self, intptr_t slot);
bool QTableView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
void QTableView_override_virtual_SelectionCommand(void* self, intptr_t slot);
int QTableView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event);
void QTableView_override_virtual_StartDrag(void* self, intptr_t slot);
void QTableView_virtualbase_StartDrag(void* self, int supportedActions);
void QTableView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QTableView_virtualbase_FocusNextPrevChild(void* self, bool next);
void QTableView_override_virtual_Event(void* self, intptr_t slot);
bool QTableView_virtualbase_Event(void* self, QEvent* event);
void QTableView_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QTableView_virtualbase_ViewportEvent(void* self, QEvent* event);
void QTableView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QTableView_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QTableView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QTableView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* event);
void QTableView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QTableView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* event);
void QTableView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QTableView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QTableView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QTableView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QTableView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QTableView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* event);
void QTableView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QTableView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* event);
void QTableView_override_virtual_DropEvent(void* self, intptr_t slot);
void QTableView_virtualbase_DropEvent(void* self, QDropEvent* event);
void QTableView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QTableView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QTableView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QTableView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QTableView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QTableView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QTableView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QTableView_virtualbase_ResizeEvent(void* self, QResizeEvent* event);
void QTableView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QTableView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
void QTableView_override_virtual_EventFilter(void* self, intptr_t slot);
bool QTableView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QTableView_Delete(QTableView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
