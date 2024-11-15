#ifndef GEN_QIMAGEENCODERCONTROL_H
#define GEN_QIMAGEENCODERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QImageEncoderControl;
class QImageEncoderSettings;
class QMetaObject;
class QSize;
#else
typedef struct QImageEncoderControl QImageEncoderControl;
typedef struct QImageEncoderSettings QImageEncoderSettings;
typedef struct QMetaObject QMetaObject;
typedef struct QSize QSize;
#endif

QMetaObject* QImageEncoderControl_MetaObject(const QImageEncoderControl* self);
void* QImageEncoderControl_Metacast(QImageEncoderControl* self, const char* param1);
struct miqt_string QImageEncoderControl_Tr(const char* s);
struct miqt_string QImageEncoderControl_TrUtf8(const char* s);
struct miqt_array QImageEncoderControl_SupportedImageCodecs(const QImageEncoderControl* self);
struct miqt_string QImageEncoderControl_ImageCodecDescription(const QImageEncoderControl* self, struct miqt_string codec);
struct miqt_array QImageEncoderControl_SupportedResolutions(const QImageEncoderControl* self, QImageEncoderSettings* settings);
QImageEncoderSettings* QImageEncoderControl_ImageSettings(const QImageEncoderControl* self);
void QImageEncoderControl_SetImageSettings(QImageEncoderControl* self, QImageEncoderSettings* settings);
struct miqt_string QImageEncoderControl_Tr2(const char* s, const char* c);
struct miqt_string QImageEncoderControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QImageEncoderControl_TrUtf82(const char* s, const char* c);
struct miqt_string QImageEncoderControl_TrUtf83(const char* s, const char* c, int n);
struct miqt_array QImageEncoderControl_SupportedResolutions2(const QImageEncoderControl* self, QImageEncoderSettings* settings, bool* continuous);
void QImageEncoderControl_Delete(QImageEncoderControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
