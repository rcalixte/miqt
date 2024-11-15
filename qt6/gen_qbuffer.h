#ifndef GEN_QBUFFER_H
#define GEN_QBUFFER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBuffer;
class QByteArray;
class QMetaObject;
class QObject;
#else
typedef struct QBuffer QBuffer;
typedef struct QByteArray QByteArray;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QBuffer* QBuffer_new();
QBuffer* QBuffer_new2(QObject* parent);
QMetaObject* QBuffer_MetaObject(const QBuffer* self);
void* QBuffer_Metacast(QBuffer* self, const char* param1);
struct miqt_string QBuffer_Tr(const char* s);
struct miqt_string QBuffer_Buffer(QBuffer* self);
struct miqt_string QBuffer_Buffer2(const QBuffer* self);
void QBuffer_SetData(QBuffer* self, struct miqt_string data);
void QBuffer_SetData2(QBuffer* self, const char* data, int lenVal);
struct miqt_string QBuffer_Data(const QBuffer* self);
bool QBuffer_Open(QBuffer* self, int openMode);
void QBuffer_Close(QBuffer* self);
long long QBuffer_Size(const QBuffer* self);
long long QBuffer_Pos(const QBuffer* self);
bool QBuffer_Seek(QBuffer* self, long long off);
bool QBuffer_AtEnd(const QBuffer* self);
bool QBuffer_CanReadLine(const QBuffer* self);
struct miqt_string QBuffer_Tr2(const char* s, const char* c);
struct miqt_string QBuffer_Tr3(const char* s, const char* c, int n);
void QBuffer_Delete(QBuffer* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
