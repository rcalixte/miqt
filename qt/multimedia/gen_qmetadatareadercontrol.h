#ifndef GEN_QMETADATAREADERCONTROL_H
#define GEN_QMETADATAREADERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaDataReaderControl;
class QMetaObject;
class QVariant;
#else
typedef struct QMetaDataReaderControl QMetaDataReaderControl;
typedef struct QMetaObject QMetaObject;
typedef struct QVariant QVariant;
#endif

QMetaObject* QMetaDataReaderControl_MetaObject(const QMetaDataReaderControl* self);
void* QMetaDataReaderControl_Metacast(QMetaDataReaderControl* self, const char* param1);
struct miqt_string QMetaDataReaderControl_Tr(const char* s);
struct miqt_string QMetaDataReaderControl_TrUtf8(const char* s);
bool QMetaDataReaderControl_IsMetaDataAvailable(const QMetaDataReaderControl* self);
QVariant* QMetaDataReaderControl_MetaData(const QMetaDataReaderControl* self, struct miqt_string key);
struct miqt_array QMetaDataReaderControl_AvailableMetaData(const QMetaDataReaderControl* self);
void QMetaDataReaderControl_MetaDataChanged(QMetaDataReaderControl* self);
void QMetaDataReaderControl_connect_MetaDataChanged(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_MetaDataChanged2(QMetaDataReaderControl* self, struct miqt_string key, QVariant* value);
void QMetaDataReaderControl_connect_MetaDataChanged2(QMetaDataReaderControl* self, intptr_t slot);
void QMetaDataReaderControl_MetaDataAvailableChanged(QMetaDataReaderControl* self, bool available);
void QMetaDataReaderControl_connect_MetaDataAvailableChanged(QMetaDataReaderControl* self, intptr_t slot);
struct miqt_string QMetaDataReaderControl_Tr2(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMetaDataReaderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMetaDataReaderControl_TrUtf83(const char* s, const char* c, int n);
void QMetaDataReaderControl_Delete(QMetaDataReaderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
