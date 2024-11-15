#ifndef GEN_QBITMAP_H
#define GEN_QBITMAP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QBitmap;
class QImage;
class QPixmap;
class QSize;
class QTransform;
#else
typedef struct QBitmap QBitmap;
typedef struct QImage QImage;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
#endif

QBitmap* QBitmap_new();
QBitmap* QBitmap_new2(QPixmap* param1);
QBitmap* QBitmap_new3(int w, int h);
QBitmap* QBitmap_new4(QSize* param1);
QBitmap* QBitmap_new5(struct miqt_string fileName);
QBitmap* QBitmap_new6(QBitmap* param1);
QBitmap* QBitmap_new7(struct miqt_string fileName, const char* format);
void QBitmap_OperatorAssign(QBitmap* self, QPixmap* param1);
void QBitmap_Swap(QBitmap* self, QBitmap* other);
void QBitmap_Clear(QBitmap* self);
QBitmap* QBitmap_FromImage(QImage* image);
QBitmap* QBitmap_FromData(QSize* size, const unsigned char* bits);
QBitmap* QBitmap_FromPixmap(QPixmap* pixmap);
QBitmap* QBitmap_Transformed(const QBitmap* self, QTransform* matrix);
void QBitmap_OperatorAssignWithQBitmap(QBitmap* self, QBitmap* param1);
QBitmap* QBitmap_FromImage2(QImage* image, int flags);
QBitmap* QBitmap_FromData3(QSize* size, const unsigned char* bits, int monoFormat);
void QBitmap_Delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
