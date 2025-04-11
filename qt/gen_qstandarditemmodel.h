#pragma once
#ifndef MIQT_QT_GEN_QSTANDARDITEMMODEL_H
#define MIQT_QT_GEN_QSTANDARDITEMMODEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractItemModel;
class QBrush;
class QChildEvent;
class QDataStream;
class QEvent;
class QFont;
class QIcon;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QModelIndex;
class QObject;
class QSize;
class QStandardItem;
class QStandardItemModel;
class QTimerEvent;
class QVariant;
#else
typedef struct QAbstractItemModel QAbstractItemModel;
typedef struct QBrush QBrush;
typedef struct QChildEvent QChildEvent;
typedef struct QDataStream QDataStream;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QIcon QIcon;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QModelIndex QModelIndex;
typedef struct QObject QObject;
typedef struct QSize QSize;
typedef struct QStandardItem QStandardItem;
typedef struct QStandardItemModel QStandardItemModel;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
#endif

QStandardItem* QStandardItem_new();
QStandardItem* QStandardItem_new2(struct miqt_string text);
QStandardItem* QStandardItem_new3(QIcon* icon, struct miqt_string text);
QStandardItem* QStandardItem_new4(int rows);
QStandardItem* QStandardItem_new5(int rows, int columns);
QVariant* QStandardItem_data(const QStandardItem* self, int role);
void QStandardItem_setData(QStandardItem* self, QVariant* value, int role);
void QStandardItem_clearData(QStandardItem* self);
struct miqt_string QStandardItem_text(const QStandardItem* self);
void QStandardItem_setText(QStandardItem* self, struct miqt_string text);
QIcon* QStandardItem_icon(const QStandardItem* self);
void QStandardItem_setIcon(QStandardItem* self, QIcon* icon);
struct miqt_string QStandardItem_toolTip(const QStandardItem* self);
void QStandardItem_setToolTip(QStandardItem* self, struct miqt_string toolTip);
struct miqt_string QStandardItem_statusTip(const QStandardItem* self);
void QStandardItem_setStatusTip(QStandardItem* self, struct miqt_string statusTip);
struct miqt_string QStandardItem_whatsThis(const QStandardItem* self);
void QStandardItem_setWhatsThis(QStandardItem* self, struct miqt_string whatsThis);
QSize* QStandardItem_sizeHint(const QStandardItem* self);
void QStandardItem_setSizeHint(QStandardItem* self, QSize* sizeHint);
QFont* QStandardItem_font(const QStandardItem* self);
void QStandardItem_setFont(QStandardItem* self, QFont* font);
int QStandardItem_textAlignment(const QStandardItem* self);
void QStandardItem_setTextAlignment(QStandardItem* self, int textAlignment);
QBrush* QStandardItem_background(const QStandardItem* self);
void QStandardItem_setBackground(QStandardItem* self, QBrush* brush);
QBrush* QStandardItem_foreground(const QStandardItem* self);
void QStandardItem_setForeground(QStandardItem* self, QBrush* brush);
int QStandardItem_checkState(const QStandardItem* self);
void QStandardItem_setCheckState(QStandardItem* self, int checkState);
struct miqt_string QStandardItem_accessibleText(const QStandardItem* self);
void QStandardItem_setAccessibleText(QStandardItem* self, struct miqt_string accessibleText);
struct miqt_string QStandardItem_accessibleDescription(const QStandardItem* self);
void QStandardItem_setAccessibleDescription(QStandardItem* self, struct miqt_string accessibleDescription);
int QStandardItem_flags(const QStandardItem* self);
void QStandardItem_setFlags(QStandardItem* self, int flags);
bool QStandardItem_isEnabled(const QStandardItem* self);
void QStandardItem_setEnabled(QStandardItem* self, bool enabled);
bool QStandardItem_isEditable(const QStandardItem* self);
void QStandardItem_setEditable(QStandardItem* self, bool editable);
bool QStandardItem_isSelectable(const QStandardItem* self);
void QStandardItem_setSelectable(QStandardItem* self, bool selectable);
bool QStandardItem_isCheckable(const QStandardItem* self);
void QStandardItem_setCheckable(QStandardItem* self, bool checkable);
bool QStandardItem_isAutoTristate(const QStandardItem* self);
void QStandardItem_setAutoTristate(QStandardItem* self, bool tristate);
bool QStandardItem_isUserTristate(const QStandardItem* self);
void QStandardItem_setUserTristate(QStandardItem* self, bool tristate);
bool QStandardItem_isTristate(const QStandardItem* self);
void QStandardItem_setTristate(QStandardItem* self, bool tristate);
bool QStandardItem_isDragEnabled(const QStandardItem* self);
void QStandardItem_setDragEnabled(QStandardItem* self, bool dragEnabled);
bool QStandardItem_isDropEnabled(const QStandardItem* self);
void QStandardItem_setDropEnabled(QStandardItem* self, bool dropEnabled);
QStandardItem* QStandardItem_parent(const QStandardItem* self);
int QStandardItem_row(const QStandardItem* self);
int QStandardItem_column(const QStandardItem* self);
QModelIndex* QStandardItem_index(const QStandardItem* self);
QStandardItemModel* QStandardItem_model(const QStandardItem* self);
int QStandardItem_rowCount(const QStandardItem* self);
void QStandardItem_setRowCount(QStandardItem* self, int rows);
int QStandardItem_columnCount(const QStandardItem* self);
void QStandardItem_setColumnCount(QStandardItem* self, int columns);
bool QStandardItem_hasChildren(const QStandardItem* self);
QStandardItem* QStandardItem_child(const QStandardItem* self, int row);
void QStandardItem_setChild(QStandardItem* self, int row, int column, QStandardItem* item);
void QStandardItem_setChild2(QStandardItem* self, int row, QStandardItem* item);
void QStandardItem_insertRow(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_insertColumn(QStandardItem* self, int column, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_insertRows(QStandardItem* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_insertRows2(QStandardItem* self, int row, int count);
void QStandardItem_insertColumns(QStandardItem* self, int column, int count);
void QStandardItem_removeRow(QStandardItem* self, int row);
void QStandardItem_removeColumn(QStandardItem* self, int column);
void QStandardItem_removeRows(QStandardItem* self, int row, int count);
void QStandardItem_removeColumns(QStandardItem* self, int column, int count);
void QStandardItem_appendRow(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_appendRows(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_appendColumn(QStandardItem* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItem_insertRow2(QStandardItem* self, int row, QStandardItem* item);
void QStandardItem_appendRowWithItem(QStandardItem* self, QStandardItem* item);
QStandardItem* QStandardItem_takeChild(QStandardItem* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItem_takeRow(QStandardItem* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItem_takeColumn(QStandardItem* self, int column);
void QStandardItem_sortChildren(QStandardItem* self, int column);
QStandardItem* QStandardItem_clone(const QStandardItem* self);
int QStandardItem_type(const QStandardItem* self);
void QStandardItem_read(QStandardItem* self, QDataStream* in);
void QStandardItem_write(const QStandardItem* self, QDataStream* out);
bool QStandardItem_operatorLesser(const QStandardItem* self, QStandardItem* other);
QStandardItem* QStandardItem_child2(const QStandardItem* self, int row, int column);
QStandardItem* QStandardItem_takeChild2(QStandardItem* self, int row, int column);
void QStandardItem_sortChildren2(QStandardItem* self, int column, int order);
bool QStandardItem_override_virtual_data(void* self, intptr_t slot);
QVariant* QStandardItem_virtualbase_data(const void* self, int role);
bool QStandardItem_override_virtual_setData(void* self, intptr_t slot);
void QStandardItem_virtualbase_setData(void* self, QVariant* value, int role);
bool QStandardItem_override_virtual_clone(void* self, intptr_t slot);
QStandardItem* QStandardItem_virtualbase_clone(const void* self);
bool QStandardItem_override_virtual_type(void* self, intptr_t slot);
int QStandardItem_virtualbase_type(const void* self);
bool QStandardItem_override_virtual_read(void* self, intptr_t slot);
void QStandardItem_virtualbase_read(void* self, QDataStream* in);
bool QStandardItem_override_virtual_write(void* self, intptr_t slot);
void QStandardItem_virtualbase_write(const void* self, QDataStream* out);
bool QStandardItem_override_virtual_operatorLesser(void* self, intptr_t slot);
bool QStandardItem_virtualbase_operatorLesser(const void* self, QStandardItem* other);
void QStandardItem_protectedbase_emitDataChanged(bool* _dynamic_cast_ok, void* self);
void QStandardItem_delete(QStandardItem* self);

QStandardItemModel* QStandardItemModel_new();
QStandardItemModel* QStandardItemModel_new2(int rows, int columns);
QStandardItemModel* QStandardItemModel_new3(QObject* parent);
QStandardItemModel* QStandardItemModel_new4(int rows, int columns, QObject* parent);
void QStandardItemModel_virtbase(QStandardItemModel* src, QAbstractItemModel** outptr_QAbstractItemModel);
QMetaObject* QStandardItemModel_metaObject(const QStandardItemModel* self);
void* QStandardItemModel_metacast(QStandardItemModel* self, const char* param1);
struct miqt_string QStandardItemModel_tr(const char* s);
struct miqt_string QStandardItemModel_trUtf8(const char* s);
void QStandardItemModel_setItemRoleNames(QStandardItemModel* self, struct miqt_map /* of int to struct miqt_string */  roleNames);
QModelIndex* QStandardItemModel_index(const QStandardItemModel* self, int row, int column, QModelIndex* parent);
QModelIndex* QStandardItemModel_parent(const QStandardItemModel* self, QModelIndex* child);
int QStandardItemModel_rowCount(const QStandardItemModel* self, QModelIndex* parent);
int QStandardItemModel_columnCount(const QStandardItemModel* self, QModelIndex* parent);
bool QStandardItemModel_hasChildren(const QStandardItemModel* self, QModelIndex* parent);
QModelIndex* QStandardItemModel_sibling(const QStandardItemModel* self, int row, int column, QModelIndex* idx);
QVariant* QStandardItemModel_data(const QStandardItemModel* self, QModelIndex* index, int role);
bool QStandardItemModel_setData(QStandardItemModel* self, QModelIndex* index, QVariant* value, int role);
bool QStandardItemModel_clearItemData(QStandardItemModel* self, QModelIndex* index);
QVariant* QStandardItemModel_headerData(const QStandardItemModel* self, int section, int orientation, int role);
bool QStandardItemModel_setHeaderData(QStandardItemModel* self, int section, int orientation, QVariant* value, int role);
bool QStandardItemModel_insertRows(QStandardItemModel* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_insertColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_removeRows(QStandardItemModel* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_removeColumns(QStandardItemModel* self, int column, int count, QModelIndex* parent);
int QStandardItemModel_flags(const QStandardItemModel* self, QModelIndex* index);
int QStandardItemModel_supportedDropActions(const QStandardItemModel* self);
struct miqt_map /* of int to QVariant* */  QStandardItemModel_itemData(const QStandardItemModel* self, QModelIndex* index);
bool QStandardItemModel_setItemData(QStandardItemModel* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
void QStandardItemModel_clear(QStandardItemModel* self);
void QStandardItemModel_sort(QStandardItemModel* self, int column, int order);
QStandardItem* QStandardItemModel_itemFromIndex(const QStandardItemModel* self, QModelIndex* index);
QModelIndex* QStandardItemModel_indexFromItem(const QStandardItemModel* self, QStandardItem* item);
QStandardItem* QStandardItemModel_item(const QStandardItemModel* self, int row);
void QStandardItemModel_setItem(QStandardItemModel* self, int row, int column, QStandardItem* item);
void QStandardItemModel_setItem2(QStandardItemModel* self, int row, QStandardItem* item);
QStandardItem* QStandardItemModel_invisibleRootItem(const QStandardItemModel* self);
QStandardItem* QStandardItemModel_horizontalHeaderItem(const QStandardItemModel* self, int column);
void QStandardItemModel_setHorizontalHeaderItem(QStandardItemModel* self, int column, QStandardItem* item);
QStandardItem* QStandardItemModel_verticalHeaderItem(const QStandardItemModel* self, int row);
void QStandardItemModel_setVerticalHeaderItem(QStandardItemModel* self, int row, QStandardItem* item);
void QStandardItemModel_setHorizontalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels);
void QStandardItemModel_setVerticalHeaderLabels(QStandardItemModel* self, struct miqt_array /* of struct miqt_string */  labels);
void QStandardItemModel_setRowCount(QStandardItemModel* self, int rows);
void QStandardItemModel_setColumnCount(QStandardItemModel* self, int columns);
void QStandardItemModel_appendRow(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_appendColumn(QStandardItemModel* self, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_appendRowWithItem(QStandardItemModel* self, QStandardItem* item);
void QStandardItemModel_insertRow(QStandardItemModel* self, int row, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_insertColumn(QStandardItemModel* self, int column, struct miqt_array /* of QStandardItem* */  items);
void QStandardItemModel_insertRow2(QStandardItemModel* self, int row, QStandardItem* item);
bool QStandardItemModel_insertRowWithRow(QStandardItemModel* self, int row);
bool QStandardItemModel_insertColumnWithColumn(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_takeItem(QStandardItemModel* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_takeRow(QStandardItemModel* self, int row);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_takeColumn(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_takeHorizontalHeaderItem(QStandardItemModel* self, int column);
QStandardItem* QStandardItemModel_takeVerticalHeaderItem(QStandardItemModel* self, int row);
QStandardItem* QStandardItemModel_itemPrototype(const QStandardItemModel* self);
void QStandardItemModel_setItemPrototype(QStandardItemModel* self, QStandardItem* item);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_findItems(const QStandardItemModel* self, struct miqt_string text);
int QStandardItemModel_sortRole(const QStandardItemModel* self);
void QStandardItemModel_setSortRole(QStandardItemModel* self, int role);
struct miqt_array /* of struct miqt_string */  QStandardItemModel_mimeTypes(const QStandardItemModel* self);
QMimeData* QStandardItemModel_mimeData(const QStandardItemModel* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStandardItemModel_dropMimeData(QStandardItemModel* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
void QStandardItemModel_itemChanged(QStandardItemModel* self, QStandardItem* item);
void QStandardItemModel_connect_itemChanged(QStandardItemModel* self, intptr_t slot);
struct miqt_string QStandardItemModel_tr2(const char* s, const char* c);
struct miqt_string QStandardItemModel_tr3(const char* s, const char* c, int n);
struct miqt_string QStandardItemModel_trUtf82(const char* s, const char* c);
struct miqt_string QStandardItemModel_trUtf83(const char* s, const char* c, int n);
QStandardItem* QStandardItemModel_item2(const QStandardItemModel* self, int row, int column);
bool QStandardItemModel_insertRow3(QStandardItemModel* self, int row, QModelIndex* parent);
bool QStandardItemModel_insertColumn2(QStandardItemModel* self, int column, QModelIndex* parent);
QStandardItem* QStandardItemModel_takeItem2(QStandardItemModel* self, int row, int column);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_findItems2(const QStandardItemModel* self, struct miqt_string text, int flags);
struct miqt_array /* of QStandardItem* */  QStandardItemModel_findItems3(const QStandardItemModel* self, struct miqt_string text, int flags, int column);
bool QStandardItemModel_override_virtual_index(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_index(const void* self, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_parent(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_parent(const void* self, QModelIndex* child);
bool QStandardItemModel_override_virtual_rowCount(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_rowCount(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_columnCount(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_columnCount(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_hasChildren(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_hasChildren(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_sibling(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_sibling(const void* self, int row, int column, QModelIndex* idx);
bool QStandardItemModel_override_virtual_data(void* self, intptr_t slot);
QVariant* QStandardItemModel_virtualbase_data(const void* self, QModelIndex* index, int role);
bool QStandardItemModel_override_virtual_setData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_setData(void* self, QModelIndex* index, QVariant* value, int role);
bool QStandardItemModel_override_virtual_headerData(void* self, intptr_t slot);
QVariant* QStandardItemModel_virtualbase_headerData(const void* self, int section, int orientation, int role);
bool QStandardItemModel_override_virtual_setHeaderData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_setHeaderData(void* self, int section, int orientation, QVariant* value, int role);
bool QStandardItemModel_override_virtual_insertRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_insertRows(void* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_insertColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_insertColumns(void* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_removeRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_removeRows(void* self, int row, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_removeColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_removeColumns(void* self, int column, int count, QModelIndex* parent);
bool QStandardItemModel_override_virtual_flags(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_flags(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_supportedDropActions(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_supportedDropActions(const void* self);
bool QStandardItemModel_override_virtual_itemData(void* self, intptr_t slot);
struct miqt_map /* of int to QVariant* */  QStandardItemModel_virtualbase_itemData(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_setItemData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_setItemData(void* self, QModelIndex* index, struct miqt_map /* of int to QVariant* */  roles);
bool QStandardItemModel_override_virtual_sort(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_sort(void* self, int column, int order);
bool QStandardItemModel_override_virtual_mimeTypes(void* self, intptr_t slot);
struct miqt_array /* of struct miqt_string */  QStandardItemModel_virtualbase_mimeTypes(const void* self);
bool QStandardItemModel_override_virtual_mimeData(void* self, intptr_t slot);
QMimeData* QStandardItemModel_virtualbase_mimeData(const void* self, struct miqt_array /* of QModelIndex* */  indexes);
bool QStandardItemModel_override_virtual_dropMimeData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_dropMimeData(void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_canDropMimeData(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_canDropMimeData(const void* self, QMimeData* data, int action, int row, int column, QModelIndex* parent);
bool QStandardItemModel_override_virtual_supportedDragActions(void* self, intptr_t slot);
int QStandardItemModel_virtualbase_supportedDragActions(const void* self);
bool QStandardItemModel_override_virtual_moveRows(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_moveRows(void* self, QModelIndex* sourceParent, int sourceRow, int count, QModelIndex* destinationParent, int destinationChild);
bool QStandardItemModel_override_virtual_moveColumns(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_moveColumns(void* self, QModelIndex* sourceParent, int sourceColumn, int count, QModelIndex* destinationParent, int destinationChild);
bool QStandardItemModel_override_virtual_fetchMore(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_fetchMore(void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_canFetchMore(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_canFetchMore(const void* self, QModelIndex* parent);
bool QStandardItemModel_override_virtual_buddy(void* self, intptr_t slot);
QModelIndex* QStandardItemModel_virtualbase_buddy(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_match(void* self, intptr_t slot);
struct miqt_array /* of QModelIndex* */  QStandardItemModel_virtualbase_match(const void* self, QModelIndex* start, int role, QVariant* value, int hits, int flags);
bool QStandardItemModel_override_virtual_span(void* self, intptr_t slot);
QSize* QStandardItemModel_virtualbase_span(const void* self, QModelIndex* index);
bool QStandardItemModel_override_virtual_roleNames(void* self, intptr_t slot);
struct miqt_map /* of int to struct miqt_string */  QStandardItemModel_virtualbase_roleNames(const void* self);
bool QStandardItemModel_override_virtual_submit(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_submit(void* self);
bool QStandardItemModel_override_virtual_revert(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_revert(void* self);
bool QStandardItemModel_override_virtual_event(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_event(void* self, QEvent* event);
bool QStandardItemModel_override_virtual_eventFilter(void* self, intptr_t slot);
bool QStandardItemModel_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);
bool QStandardItemModel_override_virtual_timerEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QStandardItemModel_override_virtual_childEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_childEvent(void* self, QChildEvent* event);
bool QStandardItemModel_override_virtual_customEvent(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_customEvent(void* self, QEvent* event);
bool QStandardItemModel_override_virtual_connectNotify(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QStandardItemModel_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QStandardItemModel_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QStandardItemModel_protectedbase_resetInternalData(bool* _dynamic_cast_ok, void* self);
QModelIndex* QStandardItemModel_protectedbase_createIndex(bool* _dynamic_cast_ok, const void* self, int row, int column);
void QStandardItemModel_protectedbase_encodeData(bool* _dynamic_cast_ok, const void* self, struct miqt_array /* of QModelIndex* */  indexes, QDataStream* stream);
bool QStandardItemModel_protectedbase_decodeData(bool* _dynamic_cast_ok, void* self, int row, int column, QModelIndex* parent, QDataStream* stream);
void QStandardItemModel_protectedbase_beginInsertRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QStandardItemModel_protectedbase_endInsertRows(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_beginRemoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QStandardItemModel_protectedbase_endRemoveRows(bool* _dynamic_cast_ok, void* self);
bool QStandardItemModel_protectedbase_beginMoveRows(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationRow);
void QStandardItemModel_protectedbase_endMoveRows(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_beginInsertColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QStandardItemModel_protectedbase_endInsertColumns(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_beginRemoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* parent, int first, int last);
void QStandardItemModel_protectedbase_endRemoveColumns(bool* _dynamic_cast_ok, void* self);
bool QStandardItemModel_protectedbase_beginMoveColumns(bool* _dynamic_cast_ok, void* self, QModelIndex* sourceParent, int sourceFirst, int sourceLast, QModelIndex* destinationParent, int destinationColumn);
void QStandardItemModel_protectedbase_endMoveColumns(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_beginResetModel(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_endResetModel(bool* _dynamic_cast_ok, void* self);
void QStandardItemModel_protectedbase_changePersistentIndex(bool* _dynamic_cast_ok, void* self, QModelIndex* from, QModelIndex* to);
void QStandardItemModel_protectedbase_changePersistentIndexList(bool* _dynamic_cast_ok, void* self, struct miqt_array /* of QModelIndex* */  from, struct miqt_array /* of QModelIndex* */  to);
struct miqt_array /* of QModelIndex* */  QStandardItemModel_protectedbase_persistentIndexList(bool* _dynamic_cast_ok, const void* self);
QObject* QStandardItemModel_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QStandardItemModel_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QStandardItemModel_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QStandardItemModel_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QStandardItemModel_delete(QStandardItemModel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
