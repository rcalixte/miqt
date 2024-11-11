#ifndef GEN_QMEDIACONTAINERCONTROL_H
#define GEN_QMEDIACONTAINERCONTROL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMediaContainerControl;
class QMetaObject;
#else
typedef struct QMediaContainerControl QMediaContainerControl;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QMediaContainerControl_MetaObject(const QMediaContainerControl* self);
void* QMediaContainerControl_Metacast(QMediaContainerControl* self, const char* param1);
struct miqt_string QMediaContainerControl_Tr(const char* s);
struct miqt_string QMediaContainerControl_TrUtf8(const char* s);
struct miqt_array QMediaContainerControl_SupportedContainers(const QMediaContainerControl* self);
struct miqt_string QMediaContainerControl_ContainerFormat(const QMediaContainerControl* self);
void QMediaContainerControl_SetContainerFormat(QMediaContainerControl* self, struct miqt_string format);
struct miqt_string QMediaContainerControl_ContainerDescription(const QMediaContainerControl* self, struct miqt_string formatMimeType);
struct miqt_string QMediaContainerControl_Tr2(const char* s, const char* c);
struct miqt_string QMediaContainerControl_Tr3(const char* s, const char* c, int n);
struct miqt_string QMediaContainerControl_TrUtf82(const char* s, const char* c);
struct miqt_string QMediaContainerControl_TrUtf83(const char* s, const char* c, int n);
void QMediaContainerControl_Delete(QMediaContainerControl* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif