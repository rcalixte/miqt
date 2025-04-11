#pragma once
#ifndef MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCISCINTILLABASE_H
#define MIQT_QT_RESTRICTED_EXTRAS_QSCINTILLA_GEN_QSCISCINTILLABASE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractScrollArea;
class QActionEvent;
class QChildEvent;
class QCloseEvent;
class QColor;
class QContextMenuEvent;
class QDragEnterEvent;
class QDragLeaveEvent;
class QDragMoveEvent;
class QDropEvent;
class QEvent;
class QFocusEvent;
class QFrame;
class QHideEvent;
class QImage;
class QInputMethodEvent;
class QKeyEvent;
class QMargins;
class QMetaMethod;
class QMetaObject;
class QMimeData;
class QMouseEvent;
class QMoveEvent;
class QObject;
class QPaintDevice;
class QPaintEngine;
class QPaintEvent;
class QPainter;
class QPixmap;
class QPoint;
class QRect;
class QResizeEvent;
class QScrollBar;
class QShowEvent;
class QSize;
class QStyleOptionFrame;
class QTabletEvent;
class QTimerEvent;
class QUrl;
class QVariant;
class QWheelEvent;
class QWidget;
class QsciScintillaBase;
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QActionEvent QActionEvent;
typedef struct QChildEvent QChildEvent;
typedef struct QCloseEvent QCloseEvent;
typedef struct QColor QColor;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QHideEvent QHideEvent;
typedef struct QImage QImage;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMargins QMargins;
typedef struct QMetaMethod QMetaMethod;
typedef struct QMetaObject QMetaObject;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMoveEvent QMoveEvent;
typedef struct QObject QObject;
typedef struct QPaintDevice QPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QResizeEvent QResizeEvent;
typedef struct QScrollBar QScrollBar;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTabletEvent QTabletEvent;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct QsciScintillaBase QsciScintillaBase;
#endif

QsciScintillaBase* QsciScintillaBase_new(QWidget* parent);
QsciScintillaBase* QsciScintillaBase_new2();
void QsciScintillaBase_virtbase(QsciScintillaBase* src, QAbstractScrollArea** outptr_QAbstractScrollArea);
QMetaObject* QsciScintillaBase_metaObject(const QsciScintillaBase* self);
void* QsciScintillaBase_metacast(QsciScintillaBase* self, const char* param1);
struct miqt_string QsciScintillaBase_tr(const char* s);
struct miqt_string QsciScintillaBase_trUtf8(const char* s);
QsciScintillaBase* QsciScintillaBase_pool();
void QsciScintillaBase_replaceHorizontalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
void QsciScintillaBase_replaceVerticalScrollBar(QsciScintillaBase* self, QScrollBar* scrollBar);
long QsciScintillaBase_SendScintilla(const QsciScintillaBase* self, unsigned int msg);
long QsciScintillaBase_SendScintilla2(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, void* lParam);
long QsciScintillaBase_SendScintilla3(const QsciScintillaBase* self, unsigned int msg, uintptr_t wParam, const char* lParam);
long QsciScintillaBase_SendScintilla4(const QsciScintillaBase* self, unsigned int msg, const char* lParam);
long QsciScintillaBase_SendScintilla5(const QsciScintillaBase* self, unsigned int msg, const char* wParam, const char* lParam);
long QsciScintillaBase_SendScintilla6(const QsciScintillaBase* self, unsigned int msg, long wParam);
long QsciScintillaBase_SendScintilla7(const QsciScintillaBase* self, unsigned int msg, int wParam);
long QsciScintillaBase_SendScintilla8(const QsciScintillaBase* self, unsigned int msg, long cpMin, long cpMax, char* lpstrText);
long QsciScintillaBase_SendScintilla9(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QColor* col);
long QsciScintillaBase_SendScintilla10(const QsciScintillaBase* self, unsigned int msg, QColor* col);
long QsciScintillaBase_SendScintilla11(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPainter* hdc, QRect* rc, long cpMin, long cpMax);
long QsciScintillaBase_SendScintilla12(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QPixmap* lParam);
long QsciScintillaBase_SendScintilla13(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, QImage* lParam);
void* QsciScintillaBase_SendScintillaPtrResult(const QsciScintillaBase* self, unsigned int msg);
int QsciScintillaBase_commandKey(int qt_key, int* modifiers);
void QsciScintillaBase_QSCN_SELCHANGED(QsciScintillaBase* self, bool yes);
void QsciScintillaBase_connect_QSCN_SELCHANGED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCANCELLED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCANCELLED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCHARDELETED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_AUTOCCHARDELETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCCOMPLETED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION(QsciScintillaBase* self, const char* selection, int position, int ch, int method);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTION2(QsciScintillaBase* self, const char* selection, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, const char* selection, int id, int position);
void QsciScintillaBase_connect_SCN_AUTOCSELECTIONCHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCEN_CHANGE(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCEN_CHANGE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CALLTIPCLICK(QsciScintillaBase* self, int direction);
void QsciScintillaBase_connect_SCN_CALLTIPCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_CHARADDED(QsciScintillaBase* self, int charadded);
void QsciScintillaBase_connect_SCN_CHARADDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DOUBLECLICK(QsciScintillaBase* self, int position, int line, int modifiers);
void QsciScintillaBase_connect_SCN_DOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLEND(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLEND(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_DWELLSTART(QsciScintillaBase* self, int position, int x, int y);
void QsciScintillaBase_connect_SCN_DWELLSTART(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSIN(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSIN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_FOCUSOUT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_FOCUSOUT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTDOUBLECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_HOTSPOTRELEASECLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORCLICK(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_INDICATORRELEASE(QsciScintillaBase* self, int position, int modifiers);
void QsciScintillaBase_connect_SCN_INDICATORRELEASE(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MACRORECORD(QsciScintillaBase* self, unsigned int param1, unsigned long param2, void* param3);
void QsciScintillaBase_connect_SCN_MACRORECORD(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, int position, int modifiers, int margin);
void QsciScintillaBase_connect_SCN_MARGINRIGHTCLICK(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFIED(QsciScintillaBase* self, int param1, int param2, const char* param3, int param4, int param5, int param6, int param7, int param8, int param9, int param10);
void QsciScintillaBase_connect_SCN_MODIFIED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_MODIFYATTEMPTRO(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_NEEDSHOWN(QsciScintillaBase* self, int param1, int param2);
void QsciScintillaBase_connect_SCN_NEEDSHOWN(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_PAINTED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_PAINTED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTLEFT(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTLEFT(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_SAVEPOINTREACHED(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_SAVEPOINTREACHED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_STYLENEEDED(QsciScintillaBase* self, int position);
void QsciScintillaBase_connect_SCN_STYLENEEDED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_URIDROPPED(QsciScintillaBase* self, QUrl* url);
void QsciScintillaBase_connect_SCN_URIDROPPED(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_UPDATEUI(QsciScintillaBase* self, int updated);
void QsciScintillaBase_connect_SCN_UPDATEUI(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION(QsciScintillaBase* self, const char* selection, int id, int ch, int method, int position);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION2(QsciScintillaBase* self, const char* selection, int id, int ch, int method);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION2(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_USERLISTSELECTION3(QsciScintillaBase* self, const char* selection, int id);
void QsciScintillaBase_connect_SCN_USERLISTSELECTION3(QsciScintillaBase* self, intptr_t slot);
void QsciScintillaBase_SCN_ZOOM(QsciScintillaBase* self);
void QsciScintillaBase_connect_SCN_ZOOM(QsciScintillaBase* self, intptr_t slot);
bool QsciScintillaBase_canInsertFromMimeData(const QsciScintillaBase* self, QMimeData* source);
struct miqt_string QsciScintillaBase_fromMimeData(const QsciScintillaBase* self, QMimeData* source, bool* rectangular);
QMimeData* QsciScintillaBase_toMimeData(const QsciScintillaBase* self, struct miqt_string text, bool rectangular);
void QsciScintillaBase_changeEvent(QsciScintillaBase* self, QEvent* e);
void QsciScintillaBase_contextMenuEvent(QsciScintillaBase* self, QContextMenuEvent* e);
void QsciScintillaBase_dragEnterEvent(QsciScintillaBase* self, QDragEnterEvent* e);
void QsciScintillaBase_dragLeaveEvent(QsciScintillaBase* self, QDragLeaveEvent* e);
void QsciScintillaBase_dragMoveEvent(QsciScintillaBase* self, QDragMoveEvent* e);
void QsciScintillaBase_dropEvent(QsciScintillaBase* self, QDropEvent* e);
void QsciScintillaBase_focusInEvent(QsciScintillaBase* self, QFocusEvent* e);
void QsciScintillaBase_focusOutEvent(QsciScintillaBase* self, QFocusEvent* e);
bool QsciScintillaBase_focusNextPrevChild(QsciScintillaBase* self, bool next);
void QsciScintillaBase_keyPressEvent(QsciScintillaBase* self, QKeyEvent* e);
void QsciScintillaBase_inputMethodEvent(QsciScintillaBase* self, QInputMethodEvent* event);
QVariant* QsciScintillaBase_inputMethodQuery(const QsciScintillaBase* self, int query);
void QsciScintillaBase_mouseDoubleClickEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_mouseMoveEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_mousePressEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_mouseReleaseEvent(QsciScintillaBase* self, QMouseEvent* e);
void QsciScintillaBase_paintEvent(QsciScintillaBase* self, QPaintEvent* e);
void QsciScintillaBase_resizeEvent(QsciScintillaBase* self, QResizeEvent* e);
void QsciScintillaBase_scrollContentsBy(QsciScintillaBase* self, int dx, int dy);
struct miqt_string QsciScintillaBase_tr2(const char* s, const char* c);
struct miqt_string QsciScintillaBase_tr3(const char* s, const char* c, int n);
struct miqt_string QsciScintillaBase_trUtf82(const char* s, const char* c);
struct miqt_string QsciScintillaBase_trUtf83(const char* s, const char* c, int n);
long QsciScintillaBase_SendScintilla14(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam);
long QsciScintillaBase_SendScintilla15(const QsciScintillaBase* self, unsigned int msg, unsigned long wParam, long lParam);
bool QsciScintillaBase_override_virtual_canInsertFromMimeData(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_canInsertFromMimeData(const void* self, QMimeData* source);
bool QsciScintillaBase_override_virtual_fromMimeData(void* self, intptr_t slot);
struct miqt_string QsciScintillaBase_virtualbase_fromMimeData(const void* self, QMimeData* source, bool* rectangular);
bool QsciScintillaBase_override_virtual_toMimeData(void* self, intptr_t slot);
QMimeData* QsciScintillaBase_virtualbase_toMimeData(const void* self, struct miqt_string text, bool rectangular);
bool QsciScintillaBase_override_virtual_changeEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_changeEvent(void* self, QEvent* e);
bool QsciScintillaBase_override_virtual_contextMenuEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_contextMenuEvent(void* self, QContextMenuEvent* e);
bool QsciScintillaBase_override_virtual_dragEnterEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_dragEnterEvent(void* self, QDragEnterEvent* e);
bool QsciScintillaBase_override_virtual_dragLeaveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_dragLeaveEvent(void* self, QDragLeaveEvent* e);
bool QsciScintillaBase_override_virtual_dragMoveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_dragMoveEvent(void* self, QDragMoveEvent* e);
bool QsciScintillaBase_override_virtual_dropEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_dropEvent(void* self, QDropEvent* e);
bool QsciScintillaBase_override_virtual_focusInEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_focusInEvent(void* self, QFocusEvent* e);
bool QsciScintillaBase_override_virtual_focusOutEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_focusOutEvent(void* self, QFocusEvent* e);
bool QsciScintillaBase_override_virtual_focusNextPrevChild(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_focusNextPrevChild(void* self, bool next);
bool QsciScintillaBase_override_virtual_keyPressEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_keyPressEvent(void* self, QKeyEvent* e);
bool QsciScintillaBase_override_virtual_inputMethodEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_inputMethodEvent(void* self, QInputMethodEvent* event);
bool QsciScintillaBase_override_virtual_inputMethodQuery(void* self, intptr_t slot);
QVariant* QsciScintillaBase_virtualbase_inputMethodQuery(const void* self, int query);
bool QsciScintillaBase_override_virtual_mouseDoubleClickEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_mouseDoubleClickEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_mouseMoveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_mouseMoveEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_mousePressEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_mousePressEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_mouseReleaseEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_mouseReleaseEvent(void* self, QMouseEvent* e);
bool QsciScintillaBase_override_virtual_paintEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_paintEvent(void* self, QPaintEvent* e);
bool QsciScintillaBase_override_virtual_resizeEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_resizeEvent(void* self, QResizeEvent* e);
bool QsciScintillaBase_override_virtual_scrollContentsBy(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_scrollContentsBy(void* self, int dx, int dy);
bool QsciScintillaBase_override_virtual_minimumSizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_minimumSizeHint(const void* self);
bool QsciScintillaBase_override_virtual_sizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_sizeHint(const void* self);
bool QsciScintillaBase_override_virtual_setupViewport(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_setupViewport(void* self, QWidget* viewport);
bool QsciScintillaBase_override_virtual_eventFilter(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_eventFilter(void* self, QObject* param1, QEvent* param2);
bool QsciScintillaBase_override_virtual_event(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_event(void* self, QEvent* param1);
bool QsciScintillaBase_override_virtual_viewportEvent(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_viewportEvent(void* self, QEvent* param1);
bool QsciScintillaBase_override_virtual_wheelEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_wheelEvent(void* self, QWheelEvent* param1);
bool QsciScintillaBase_override_virtual_viewportSizeHint(void* self, intptr_t slot);
QSize* QsciScintillaBase_virtualbase_viewportSizeHint(const void* self);
bool QsciScintillaBase_override_virtual_devType(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_devType(const void* self);
bool QsciScintillaBase_override_virtual_setVisible(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_setVisible(void* self, bool visible);
bool QsciScintillaBase_override_virtual_heightForWidth(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_heightForWidth(const void* self, int param1);
bool QsciScintillaBase_override_virtual_hasHeightForWidth(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_hasHeightForWidth(const void* self);
bool QsciScintillaBase_override_virtual_paintEngine(void* self, intptr_t slot);
QPaintEngine* QsciScintillaBase_virtualbase_paintEngine(const void* self);
bool QsciScintillaBase_override_virtual_keyReleaseEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_keyReleaseEvent(void* self, QKeyEvent* event);
bool QsciScintillaBase_override_virtual_enterEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_enterEvent(void* self, QEvent* event);
bool QsciScintillaBase_override_virtual_leaveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_leaveEvent(void* self, QEvent* event);
bool QsciScintillaBase_override_virtual_moveEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_moveEvent(void* self, QMoveEvent* event);
bool QsciScintillaBase_override_virtual_closeEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_closeEvent(void* self, QCloseEvent* event);
bool QsciScintillaBase_override_virtual_tabletEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_tabletEvent(void* self, QTabletEvent* event);
bool QsciScintillaBase_override_virtual_actionEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_actionEvent(void* self, QActionEvent* event);
bool QsciScintillaBase_override_virtual_showEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_showEvent(void* self, QShowEvent* event);
bool QsciScintillaBase_override_virtual_hideEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_hideEvent(void* self, QHideEvent* event);
bool QsciScintillaBase_override_virtual_nativeEvent(void* self, intptr_t slot);
bool QsciScintillaBase_virtualbase_nativeEvent(void* self, struct miqt_string eventType, void* message, long* result);
bool QsciScintillaBase_override_virtual_metric(void* self, intptr_t slot);
int QsciScintillaBase_virtualbase_metric(const void* self, int param1);
bool QsciScintillaBase_override_virtual_initPainter(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_initPainter(const void* self, QPainter* painter);
bool QsciScintillaBase_override_virtual_redirected(void* self, intptr_t slot);
QPaintDevice* QsciScintillaBase_virtualbase_redirected(const void* self, QPoint* offset);
bool QsciScintillaBase_override_virtual_sharedPainter(void* self, intptr_t slot);
QPainter* QsciScintillaBase_virtualbase_sharedPainter(const void* self);
bool QsciScintillaBase_override_virtual_timerEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_timerEvent(void* self, QTimerEvent* event);
bool QsciScintillaBase_override_virtual_childEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_childEvent(void* self, QChildEvent* event);
bool QsciScintillaBase_override_virtual_customEvent(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_customEvent(void* self, QEvent* event);
bool QsciScintillaBase_override_virtual_connectNotify(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_connectNotify(void* self, QMetaMethod* signal);
bool QsciScintillaBase_override_virtual_disconnectNotify(void* self, intptr_t slot);
void QsciScintillaBase_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);
void QsciScintillaBase_protectedbase_setScrollBars(bool* _dynamic_cast_ok, void* self);
struct miqt_string QsciScintillaBase_protectedbase_textAsBytes(bool* _dynamic_cast_ok, const void* self, struct miqt_string text);
struct miqt_string QsciScintillaBase_protectedbase_bytesAsText(bool* _dynamic_cast_ok, const void* self, const char* bytes);
bool QsciScintillaBase_protectedbase_contextMenuNeeded(bool* _dynamic_cast_ok, const void* self, int x, int y);
void QsciScintillaBase_protectedbase_setViewportMargins(bool* _dynamic_cast_ok, void* self, int left, int top, int right, int bottom);
QMargins* QsciScintillaBase_protectedbase_viewportMargins(bool* _dynamic_cast_ok, const void* self);
void QsciScintillaBase_protectedbase_drawFrame(bool* _dynamic_cast_ok, void* self, QPainter* param1);
void QsciScintillaBase_protectedbase_initStyleOption(bool* _dynamic_cast_ok, const void* self, QStyleOptionFrame* option);
void QsciScintillaBase_protectedbase_updateMicroFocus(bool* _dynamic_cast_ok, void* self);
void QsciScintillaBase_protectedbase_create(bool* _dynamic_cast_ok, void* self);
void QsciScintillaBase_protectedbase_destroy(bool* _dynamic_cast_ok, void* self);
bool QsciScintillaBase_protectedbase_focusNextChild(bool* _dynamic_cast_ok, void* self);
bool QsciScintillaBase_protectedbase_focusPreviousChild(bool* _dynamic_cast_ok, void* self);
QObject* QsciScintillaBase_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
int QsciScintillaBase_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
int QsciScintillaBase_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
bool QsciScintillaBase_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
void QsciScintillaBase_delete(QsciScintillaBase* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
