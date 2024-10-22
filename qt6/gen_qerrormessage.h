#ifndef GEN_QERRORMESSAGE_H
#define GEN_QERRORMESSAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QErrorMessage;
class QMetaObject;
class QWidget;
#else
typedef struct QErrorMessage QErrorMessage;
typedef struct QMetaObject QMetaObject;
typedef struct QWidget QWidget;
#endif

QErrorMessage* QErrorMessage_new();
QErrorMessage* QErrorMessage_new2(QWidget* parent);
QMetaObject* QErrorMessage_MetaObject(const QErrorMessage* self);
void* QErrorMessage_Metacast(QErrorMessage* self, const char* param1);
struct miqt_string QErrorMessage_Tr(const char* s);
QErrorMessage* QErrorMessage_QtHandler();
void QErrorMessage_ShowMessage(QErrorMessage* self, struct miqt_string message);
void QErrorMessage_ShowMessage2(QErrorMessage* self, struct miqt_string message, struct miqt_string typeVal);
struct miqt_string QErrorMessage_Tr2(const char* s, const char* c);
struct miqt_string QErrorMessage_Tr3(const char* s, const char* c, int n);
void QErrorMessage_Delete(QErrorMessage* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif