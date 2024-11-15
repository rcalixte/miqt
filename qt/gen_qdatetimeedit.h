#ifndef GEN_QDATETIMEEDIT_H
#define GEN_QDATETIMEEDIT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QCalendar;
class QCalendarWidget;
class QDate;
class QDateEdit;
class QDateTime;
class QDateTimeEdit;
class QEvent;
class QMetaObject;
class QSize;
class QTime;
class QTimeEdit;
class QWidget;
#else
typedef struct QCalendar QCalendar;
typedef struct QCalendarWidget QCalendarWidget;
typedef struct QDate QDate;
typedef struct QDateEdit QDateEdit;
typedef struct QDateTime QDateTime;
typedef struct QDateTimeEdit QDateTimeEdit;
typedef struct QEvent QEvent;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
typedef struct QTime QTime;
typedef struct QTimeEdit QTimeEdit;
typedef struct QWidget QWidget;
#endif

QDateTimeEdit* QDateTimeEdit_new(QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new2();
QDateTimeEdit* QDateTimeEdit_new3(QDateTime* dt);
QDateTimeEdit* QDateTimeEdit_new4(QDate* d);
QDateTimeEdit* QDateTimeEdit_new5(QTime* t);
QDateTimeEdit* QDateTimeEdit_new6(QDateTime* dt, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new7(QDate* d, QWidget* parent);
QDateTimeEdit* QDateTimeEdit_new8(QTime* t, QWidget* parent);
QMetaObject* QDateTimeEdit_MetaObject(const QDateTimeEdit* self);
void* QDateTimeEdit_Metacast(QDateTimeEdit* self, const char* param1);
struct miqt_string QDateTimeEdit_Tr(const char* s);
struct miqt_string QDateTimeEdit_TrUtf8(const char* s);
QDateTime* QDateTimeEdit_DateTime(const QDateTimeEdit* self);
QDate* QDateTimeEdit_Date(const QDateTimeEdit* self);
QTime* QDateTimeEdit_Time(const QDateTimeEdit* self);
QCalendar* QDateTimeEdit_Calendar(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendar(QDateTimeEdit* self, QCalendar* calendar);
QDateTime* QDateTimeEdit_MinimumDateTime(const QDateTimeEdit* self);
void QDateTimeEdit_ClearMinimumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDateTime(QDateTimeEdit* self, QDateTime* dt);
QDateTime* QDateTimeEdit_MaximumDateTime(const QDateTimeEdit* self);
void QDateTimeEdit_ClearMaximumDateTime(QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDateTime(QDateTimeEdit* self, QDateTime* dt);
void QDateTimeEdit_SetDateTimeRange(QDateTimeEdit* self, QDateTime* min, QDateTime* max);
QDate* QDateTimeEdit_MinimumDate(const QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumDate(QDateTimeEdit* self, QDate* min);
void QDateTimeEdit_ClearMinimumDate(QDateTimeEdit* self);
QDate* QDateTimeEdit_MaximumDate(const QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumDate(QDateTimeEdit* self, QDate* max);
void QDateTimeEdit_ClearMaximumDate(QDateTimeEdit* self);
void QDateTimeEdit_SetDateRange(QDateTimeEdit* self, QDate* min, QDate* max);
QTime* QDateTimeEdit_MinimumTime(const QDateTimeEdit* self);
void QDateTimeEdit_SetMinimumTime(QDateTimeEdit* self, QTime* min);
void QDateTimeEdit_ClearMinimumTime(QDateTimeEdit* self);
QTime* QDateTimeEdit_MaximumTime(const QDateTimeEdit* self);
void QDateTimeEdit_SetMaximumTime(QDateTimeEdit* self, QTime* max);
void QDateTimeEdit_ClearMaximumTime(QDateTimeEdit* self);
void QDateTimeEdit_SetTimeRange(QDateTimeEdit* self, QTime* min, QTime* max);
int QDateTimeEdit_DisplayedSections(const QDateTimeEdit* self);
int QDateTimeEdit_CurrentSection(const QDateTimeEdit* self);
int QDateTimeEdit_SectionAt(const QDateTimeEdit* self, int index);
void QDateTimeEdit_SetCurrentSection(QDateTimeEdit* self, int section);
int QDateTimeEdit_CurrentSectionIndex(const QDateTimeEdit* self);
void QDateTimeEdit_SetCurrentSectionIndex(QDateTimeEdit* self, int index);
QCalendarWidget* QDateTimeEdit_CalendarWidget(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarWidget(QDateTimeEdit* self, QCalendarWidget* calendarWidget);
int QDateTimeEdit_SectionCount(const QDateTimeEdit* self);
void QDateTimeEdit_SetSelectedSection(QDateTimeEdit* self, int section);
struct miqt_string QDateTimeEdit_SectionText(const QDateTimeEdit* self, int section);
struct miqt_string QDateTimeEdit_DisplayFormat(const QDateTimeEdit* self);
void QDateTimeEdit_SetDisplayFormat(QDateTimeEdit* self, struct miqt_string format);
bool QDateTimeEdit_CalendarPopup(const QDateTimeEdit* self);
void QDateTimeEdit_SetCalendarPopup(QDateTimeEdit* self, bool enable);
int QDateTimeEdit_TimeSpec(const QDateTimeEdit* self);
void QDateTimeEdit_SetTimeSpec(QDateTimeEdit* self, int spec);
QSize* QDateTimeEdit_SizeHint(const QDateTimeEdit* self);
void QDateTimeEdit_Clear(QDateTimeEdit* self);
void QDateTimeEdit_StepBy(QDateTimeEdit* self, int steps);
bool QDateTimeEdit_Event(QDateTimeEdit* self, QEvent* event);
void QDateTimeEdit_DateTimeChanged(QDateTimeEdit* self, QDateTime* dateTime);
void QDateTimeEdit_connect_DateTimeChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_TimeChanged(QDateTimeEdit* self, QTime* time);
void QDateTimeEdit_connect_TimeChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_DateChanged(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_connect_DateChanged(QDateTimeEdit* self, intptr_t slot);
void QDateTimeEdit_SetDateTime(QDateTimeEdit* self, QDateTime* dateTime);
void QDateTimeEdit_SetDate(QDateTimeEdit* self, QDate* date);
void QDateTimeEdit_SetTime(QDateTimeEdit* self, QTime* time);
struct miqt_string QDateTimeEdit_Tr2(const char* s, const char* c);
struct miqt_string QDateTimeEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string QDateTimeEdit_TrUtf82(const char* s, const char* c);
struct miqt_string QDateTimeEdit_TrUtf83(const char* s, const char* c, int n);
void QDateTimeEdit_Delete(QDateTimeEdit* self);

QTimeEdit* QTimeEdit_new(QWidget* parent);
QTimeEdit* QTimeEdit_new2();
QTimeEdit* QTimeEdit_new3(QTime* time);
QTimeEdit* QTimeEdit_new4(QTime* time, QWidget* parent);
QMetaObject* QTimeEdit_MetaObject(const QTimeEdit* self);
void* QTimeEdit_Metacast(QTimeEdit* self, const char* param1);
struct miqt_string QTimeEdit_Tr(const char* s);
struct miqt_string QTimeEdit_TrUtf8(const char* s);
void QTimeEdit_UserTimeChanged(QTimeEdit* self, QTime* time);
void QTimeEdit_connect_UserTimeChanged(QTimeEdit* self, intptr_t slot);
struct miqt_string QTimeEdit_Tr2(const char* s, const char* c);
struct miqt_string QTimeEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string QTimeEdit_TrUtf82(const char* s, const char* c);
struct miqt_string QTimeEdit_TrUtf83(const char* s, const char* c, int n);
void QTimeEdit_Delete(QTimeEdit* self);

QDateEdit* QDateEdit_new(QWidget* parent);
QDateEdit* QDateEdit_new2();
QDateEdit* QDateEdit_new3(QDate* date);
QDateEdit* QDateEdit_new4(QDate* date, QWidget* parent);
QMetaObject* QDateEdit_MetaObject(const QDateEdit* self);
void* QDateEdit_Metacast(QDateEdit* self, const char* param1);
struct miqt_string QDateEdit_Tr(const char* s);
struct miqt_string QDateEdit_TrUtf8(const char* s);
void QDateEdit_UserDateChanged(QDateEdit* self, QDate* date);
void QDateEdit_connect_UserDateChanged(QDateEdit* self, intptr_t slot);
struct miqt_string QDateEdit_Tr2(const char* s, const char* c);
struct miqt_string QDateEdit_Tr3(const char* s, const char* c, int n);
struct miqt_string QDateEdit_TrUtf82(const char* s, const char* c);
struct miqt_string QDateEdit_TrUtf83(const char* s, const char* c, int n);
void QDateEdit_Delete(QDateEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
