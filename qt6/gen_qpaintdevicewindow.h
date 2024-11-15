#ifndef GEN_QPAINTDEVICEWINDOW_H
#define GEN_QPAINTDEVICEWINDOW_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QPaintDeviceWindow;
class QRect;
class QRegion;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QPaintDeviceWindow QPaintDeviceWindow;
typedef struct QRect QRect;
typedef struct QRegion QRegion;
#endif

QMetaObject* QPaintDeviceWindow_MetaObject(const QPaintDeviceWindow* self);
void* QPaintDeviceWindow_Metacast(QPaintDeviceWindow* self, const char* param1);
struct miqt_string QPaintDeviceWindow_Tr(const char* s);
void QPaintDeviceWindow_Update(QPaintDeviceWindow* self, QRect* rect);
void QPaintDeviceWindow_UpdateWithRegion(QPaintDeviceWindow* self, QRegion* region);
void QPaintDeviceWindow_Update2(QPaintDeviceWindow* self);
struct miqt_string QPaintDeviceWindow_Tr2(const char* s, const char* c);
struct miqt_string QPaintDeviceWindow_Tr3(const char* s, const char* c, int n);
void QPaintDeviceWindow_Delete(QPaintDeviceWindow* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
