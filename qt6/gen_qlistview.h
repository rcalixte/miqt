#pragma once
#ifndef MIQT_QT6_GEN_QLISTVIEW_H
#define MIQT_QT6_GEN_QLISTVIEW_H

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
class QInputMethodEvent;
class QItemSelection;
class QItemSelectionModel;
class QKeyEvent;
class QListView;
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
class QTimerEvent;
class QVariant;
class QWheelEvent;
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
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QItemSelection QItemSelection;
typedef struct QItemSelectionModel QItemSelectionModel;
typedef struct QKeyEvent QKeyEvent;
typedef struct QListView QListView;
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
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
#endif

QListView* QListView_new(QWidget* parent);
QListView* QListView_new2();
void QListView_virtbase(QListView* src, QAbstractItemView** outptr_QAbstractItemView);
QMetaObject* QListView_MetaObject(const QListView* self);
void* QListView_Metacast(QListView* self, const char* param1);
struct miqt_string QListView_Tr(const char* s);
void QListView_SetMovement(QListView* self, int movement);
int QListView_Movement(const QListView* self);
void QListView_SetFlow(QListView* self, int flow);
int QListView_Flow(const QListView* self);
void QListView_SetWrapping(QListView* self, bool enable);
bool QListView_IsWrapping(const QListView* self);
void QListView_SetResizeMode(QListView* self, int mode);
int QListView_ResizeMode(const QListView* self);
void QListView_SetLayoutMode(QListView* self, int mode);
int QListView_LayoutMode(const QListView* self);
void QListView_SetSpacing(QListView* self, int space);
int QListView_Spacing(const QListView* self);
void QListView_SetBatchSize(QListView* self, int batchSize);
int QListView_BatchSize(const QListView* self);
void QListView_SetGridSize(QListView* self, QSize* size);
QSize* QListView_GridSize(const QListView* self);
void QListView_SetViewMode(QListView* self, int mode);
int QListView_ViewMode(const QListView* self);
void QListView_ClearPropertyFlags(QListView* self);
bool QListView_IsRowHidden(const QListView* self, int row);
void QListView_SetRowHidden(QListView* self, int row, bool hide);
void QListView_SetModelColumn(QListView* self, int column);
int QListView_ModelColumn(const QListView* self);
void QListView_SetUniformItemSizes(QListView* self, bool enable);
bool QListView_UniformItemSizes(const QListView* self);
void QListView_SetWordWrap(QListView* self, bool on);
bool QListView_WordWrap(const QListView* self);
void QListView_SetSelectionRectVisible(QListView* self, bool show);
bool QListView_IsSelectionRectVisible(const QListView* self);
void QListView_SetItemAlignment(QListView* self, int alignment);
int QListView_ItemAlignment(const QListView* self);
QRect* QListView_VisualRect(const QListView* self, QModelIndex* index);
void QListView_ScrollTo(QListView* self, QModelIndex* index, int hint);
QModelIndex* QListView_IndexAt(const QListView* self, QPoint* p);
void QListView_DoItemsLayout(QListView* self);
void QListView_Reset(QListView* self);
void QListView_SetRootIndex(QListView* self, QModelIndex* index);
void QListView_IndexesMoved(QListView* self, struct miqt_array /* of QModelIndex* */  indexes);
void QListView_connect_IndexesMoved(QListView* self, intptr_t slot);
bool QListView_Event(QListView* self, QEvent* e);
void QListView_ScrollContentsBy(QListView* self, int dx, int dy);
void QListView_DataChanged(QListView* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QListView_RowsInserted(QListView* self, QModelIndex* parent, int start, int end);
void QListView_RowsAboutToBeRemoved(QListView* self, QModelIndex* parent, int start, int end);
void QListView_MouseMoveEvent(QListView* self, QMouseEvent* e);
void QListView_MouseReleaseEvent(QListView* self, QMouseEvent* e);
void QListView_WheelEvent(QListView* self, QWheelEvent* e);
void QListView_TimerEvent(QListView* self, QTimerEvent* e);
void QListView_ResizeEvent(QListView* self, QResizeEvent* e);
void QListView_DragMoveEvent(QListView* self, QDragMoveEvent* e);
void QListView_DragLeaveEvent(QListView* self, QDragLeaveEvent* e);
void QListView_DropEvent(QListView* self, QDropEvent* e);
void QListView_StartDrag(QListView* self, int supportedActions);
void QListView_InitViewItemOption(const QListView* self, QStyleOptionViewItem* option);
void QListView_PaintEvent(QListView* self, QPaintEvent* e);
int QListView_HorizontalOffset(const QListView* self);
int QListView_VerticalOffset(const QListView* self);
QModelIndex* QListView_MoveCursor(QListView* self, int cursorAction, int modifiers);
void QListView_SetSelection(QListView* self, QRect* rect, int command);
QRegion* QListView_VisualRegionForSelection(const QListView* self, QItemSelection* selection);
struct miqt_array /* of QModelIndex* */  QListView_SelectedIndexes(const QListView* self);
void QListView_UpdateGeometries(QListView* self);
bool QListView_IsIndexHidden(const QListView* self, QModelIndex* index);
void QListView_SelectionChanged(QListView* self, QItemSelection* selected, QItemSelection* deselected);
void QListView_CurrentChanged(QListView* self, QModelIndex* current, QModelIndex* previous);
QSize* QListView_ViewportSizeHint(const QListView* self);
struct miqt_string QListView_Tr2(const char* s, const char* c);
struct miqt_string QListView_Tr3(const char* s, const char* c, int n);
void QListView_override_virtual_VisualRect(void* self, intptr_t slot);
QRect* QListView_virtualbase_VisualRect(const void* self, QModelIndex* index);
void QListView_override_virtual_ScrollTo(void* self, intptr_t slot);
void QListView_virtualbase_ScrollTo(void* self, QModelIndex* index, int hint);
void QListView_override_virtual_IndexAt(void* self, intptr_t slot);
QModelIndex* QListView_virtualbase_IndexAt(const void* self, QPoint* p);
void QListView_override_virtual_DoItemsLayout(void* self, intptr_t slot);
void QListView_virtualbase_DoItemsLayout(void* self);
void QListView_override_virtual_Reset(void* self, intptr_t slot);
void QListView_virtualbase_Reset(void* self);
void QListView_override_virtual_SetRootIndex(void* self, intptr_t slot);
void QListView_virtualbase_SetRootIndex(void* self, QModelIndex* index);
void QListView_override_virtual_Event(void* self, intptr_t slot);
bool QListView_virtualbase_Event(void* self, QEvent* e);
void QListView_override_virtual_ScrollContentsBy(void* self, intptr_t slot);
void QListView_virtualbase_ScrollContentsBy(void* self, int dx, int dy);
void QListView_override_virtual_DataChanged(void* self, intptr_t slot);
void QListView_virtualbase_DataChanged(void* self, QModelIndex* topLeft, QModelIndex* bottomRight, struct miqt_array /* of int */  roles);
void QListView_override_virtual_RowsInserted(void* self, intptr_t slot);
void QListView_virtualbase_RowsInserted(void* self, QModelIndex* parent, int start, int end);
void QListView_override_virtual_RowsAboutToBeRemoved(void* self, intptr_t slot);
void QListView_virtualbase_RowsAboutToBeRemoved(void* self, QModelIndex* parent, int start, int end);
void QListView_override_virtual_MouseMoveEvent(void* self, intptr_t slot);
void QListView_virtualbase_MouseMoveEvent(void* self, QMouseEvent* e);
void QListView_override_virtual_MouseReleaseEvent(void* self, intptr_t slot);
void QListView_virtualbase_MouseReleaseEvent(void* self, QMouseEvent* e);
void QListView_override_virtual_WheelEvent(void* self, intptr_t slot);
void QListView_virtualbase_WheelEvent(void* self, QWheelEvent* e);
void QListView_override_virtual_TimerEvent(void* self, intptr_t slot);
void QListView_virtualbase_TimerEvent(void* self, QTimerEvent* e);
void QListView_override_virtual_ResizeEvent(void* self, intptr_t slot);
void QListView_virtualbase_ResizeEvent(void* self, QResizeEvent* e);
void QListView_override_virtual_DragMoveEvent(void* self, intptr_t slot);
void QListView_virtualbase_DragMoveEvent(void* self, QDragMoveEvent* e);
void QListView_override_virtual_DragLeaveEvent(void* self, intptr_t slot);
void QListView_virtualbase_DragLeaveEvent(void* self, QDragLeaveEvent* e);
void QListView_override_virtual_DropEvent(void* self, intptr_t slot);
void QListView_virtualbase_DropEvent(void* self, QDropEvent* e);
void QListView_override_virtual_StartDrag(void* self, intptr_t slot);
void QListView_virtualbase_StartDrag(void* self, int supportedActions);
void QListView_override_virtual_InitViewItemOption(void* self, intptr_t slot);
void QListView_virtualbase_InitViewItemOption(const void* self, QStyleOptionViewItem* option);
void QListView_override_virtual_PaintEvent(void* self, intptr_t slot);
void QListView_virtualbase_PaintEvent(void* self, QPaintEvent* e);
void QListView_override_virtual_HorizontalOffset(void* self, intptr_t slot);
int QListView_virtualbase_HorizontalOffset(const void* self);
void QListView_override_virtual_VerticalOffset(void* self, intptr_t slot);
int QListView_virtualbase_VerticalOffset(const void* self);
void QListView_override_virtual_MoveCursor(void* self, intptr_t slot);
QModelIndex* QListView_virtualbase_MoveCursor(void* self, int cursorAction, int modifiers);
void QListView_override_virtual_SetSelection(void* self, intptr_t slot);
void QListView_virtualbase_SetSelection(void* self, QRect* rect, int command);
void QListView_override_virtual_VisualRegionForSelection(void* self, intptr_t slot);
QRegion* QListView_virtualbase_VisualRegionForSelection(const void* self, QItemSelection* selection);
void QListView_override_virtual_SelectedIndexes(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QListView_virtualbase_SelectedIndexes(const void* self);
void QListView_override_virtual_UpdateGeometries(void* self, intptr_t slot);
void QListView_virtualbase_UpdateGeometries(void* self);
void QListView_override_virtual_IsIndexHidden(void* self, intptr_t slot);
bool QListView_virtualbase_IsIndexHidden(const void* self, QModelIndex* index);
void QListView_override_virtual_SelectionChanged(void* self, intptr_t slot);
void QListView_virtualbase_SelectionChanged(void* self, QItemSelection* selected, QItemSelection* deselected);
void QListView_override_virtual_CurrentChanged(void* self, intptr_t slot);
void QListView_virtualbase_CurrentChanged(void* self, QModelIndex* current, QModelIndex* previous);
void QListView_override_virtual_ViewportSizeHint(void* self, intptr_t slot);
QSize* QListView_virtualbase_ViewportSizeHint(const void* self);
void QListView_override_virtual_SetModel(void* self, intptr_t slot);
void QListView_virtualbase_SetModel(void* self, QAbstractItemModel* model);
void QListView_override_virtual_SetSelectionModel(void* self, intptr_t slot);
void QListView_virtualbase_SetSelectionModel(void* self, QItemSelectionModel* selectionModel);
void QListView_override_virtual_KeyboardSearch(void* self, intptr_t slot);
void QListView_virtualbase_KeyboardSearch(void* self, struct miqt_string search);
void QListView_override_virtual_SizeHintForRow(void* self, intptr_t slot);
int QListView_virtualbase_SizeHintForRow(const void* self, int row);
void QListView_override_virtual_SizeHintForColumn(void* self, intptr_t slot);
int QListView_virtualbase_SizeHintForColumn(const void* self, int column);
void QListView_override_virtual_ItemDelegateForIndex(void* self, intptr_t slot);
QAbstractItemDelegate* QListView_virtualbase_ItemDelegateForIndex(const void* self, QModelIndex* index);
void QListView_override_virtual_InputMethodQuery(void* self, intptr_t slot);
QVariant* QListView_virtualbase_InputMethodQuery(const void* self, int query);
void QListView_override_virtual_SelectAll(void* self, intptr_t slot);
void QListView_virtualbase_SelectAll(void* self);
void QListView_override_virtual_UpdateEditorData(void* self, intptr_t slot);
void QListView_virtualbase_UpdateEditorData(void* self);
void QListView_override_virtual_UpdateEditorGeometries(void* self, intptr_t slot);
void QListView_virtualbase_UpdateEditorGeometries(void* self);
void QListView_override_virtual_VerticalScrollbarAction(void* self, intptr_t slot);
void QListView_virtualbase_VerticalScrollbarAction(void* self, int action);
void QListView_override_virtual_HorizontalScrollbarAction(void* self, intptr_t slot);
void QListView_virtualbase_HorizontalScrollbarAction(void* self, int action);
void QListView_override_virtual_VerticalScrollbarValueChanged(void* self, intptr_t slot);
void QListView_virtualbase_VerticalScrollbarValueChanged(void* self, int value);
void QListView_override_virtual_HorizontalScrollbarValueChanged(void* self, intptr_t slot);
void QListView_virtualbase_HorizontalScrollbarValueChanged(void* self, int value);
void QListView_override_virtual_CloseEditor(void* self, intptr_t slot);
void QListView_virtualbase_CloseEditor(void* self, QWidget* editor, int hint);
void QListView_override_virtual_CommitData(void* self, intptr_t slot);
void QListView_virtualbase_CommitData(void* self, QWidget* editor);
void QListView_override_virtual_EditorDestroyed(void* self, intptr_t slot);
void QListView_virtualbase_EditorDestroyed(void* self, QObject* editor);
void QListView_override_virtual_Edit2(void* self, intptr_t slot);
bool QListView_virtualbase_Edit2(void* self, QModelIndex* index, int trigger, QEvent* event);
void QListView_override_virtual_SelectionCommand(void* self, intptr_t slot);
int QListView_virtualbase_SelectionCommand(const void* self, QModelIndex* index, QEvent* event);
void QListView_override_virtual_FocusNextPrevChild(void* self, intptr_t slot);
bool QListView_virtualbase_FocusNextPrevChild(void* self, bool next);
void QListView_override_virtual_ViewportEvent(void* self, intptr_t slot);
bool QListView_virtualbase_ViewportEvent(void* self, QEvent* event);
void QListView_override_virtual_MousePressEvent(void* self, intptr_t slot);
void QListView_virtualbase_MousePressEvent(void* self, QMouseEvent* event);
void QListView_override_virtual_MouseDoubleClickEvent(void* self, intptr_t slot);
void QListView_virtualbase_MouseDoubleClickEvent(void* self, QMouseEvent* event);
void QListView_override_virtual_DragEnterEvent(void* self, intptr_t slot);
void QListView_virtualbase_DragEnterEvent(void* self, QDragEnterEvent* event);
void QListView_override_virtual_FocusInEvent(void* self, intptr_t slot);
void QListView_virtualbase_FocusInEvent(void* self, QFocusEvent* event);
void QListView_override_virtual_FocusOutEvent(void* self, intptr_t slot);
void QListView_virtualbase_FocusOutEvent(void* self, QFocusEvent* event);
void QListView_override_virtual_KeyPressEvent(void* self, intptr_t slot);
void QListView_virtualbase_KeyPressEvent(void* self, QKeyEvent* event);
void QListView_override_virtual_InputMethodEvent(void* self, intptr_t slot);
void QListView_virtualbase_InputMethodEvent(void* self, QInputMethodEvent* event);
void QListView_override_virtual_EventFilter(void* self, intptr_t slot);
bool QListView_virtualbase_EventFilter(void* self, QObject* object, QEvent* event);
void QListView_Delete(QListView* self, bool isSubclass);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
