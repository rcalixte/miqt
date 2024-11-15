#ifndef GEN_QAUDIOINPUT_H
#define GEN_QAUDIOINPUT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAudioDeviceInfo;
class QAudioFormat;
class QAudioInput;
class QIODevice;
class QMetaObject;
class QObject;
#else
typedef struct QAudioDeviceInfo QAudioDeviceInfo;
typedef struct QAudioFormat QAudioFormat;
typedef struct QAudioInput QAudioInput;
typedef struct QIODevice QIODevice;
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
#endif

QAudioInput* QAudioInput_new();
QAudioInput* QAudioInput_new2(QAudioDeviceInfo* audioDeviceInfo);
QAudioInput* QAudioInput_new3(QAudioFormat* format);
QAudioInput* QAudioInput_new4(QAudioFormat* format, QObject* parent);
QAudioInput* QAudioInput_new5(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format);
QAudioInput* QAudioInput_new6(QAudioDeviceInfo* audioDeviceInfo, QAudioFormat* format, QObject* parent);
QMetaObject* QAudioInput_MetaObject(const QAudioInput* self);
void* QAudioInput_Metacast(QAudioInput* self, const char* param1);
struct miqt_string QAudioInput_Tr(const char* s);
struct miqt_string QAudioInput_TrUtf8(const char* s);
QAudioFormat* QAudioInput_Format(const QAudioInput* self);
void QAudioInput_Start(QAudioInput* self, QIODevice* device);
QIODevice* QAudioInput_Start2(QAudioInput* self);
void QAudioInput_Stop(QAudioInput* self);
void QAudioInput_Reset(QAudioInput* self);
void QAudioInput_Suspend(QAudioInput* self);
void QAudioInput_Resume(QAudioInput* self);
void QAudioInput_SetBufferSize(QAudioInput* self, int bytes);
int QAudioInput_BufferSize(const QAudioInput* self);
int QAudioInput_BytesReady(const QAudioInput* self);
int QAudioInput_PeriodSize(const QAudioInput* self);
void QAudioInput_SetNotifyInterval(QAudioInput* self, int milliSeconds);
int QAudioInput_NotifyInterval(const QAudioInput* self);
void QAudioInput_SetVolume(QAudioInput* self, double volume);
double QAudioInput_Volume(const QAudioInput* self);
long long QAudioInput_ProcessedUSecs(const QAudioInput* self);
long long QAudioInput_ElapsedUSecs(const QAudioInput* self);
int QAudioInput_Error(const QAudioInput* self);
int QAudioInput_State(const QAudioInput* self);
void QAudioInput_StateChanged(QAudioInput* self, int state);
void QAudioInput_connect_StateChanged(QAudioInput* self, intptr_t slot);
void QAudioInput_Notify(QAudioInput* self);
void QAudioInput_connect_Notify(QAudioInput* self, intptr_t slot);
struct miqt_string QAudioInput_Tr2(const char* s, const char* c);
struct miqt_string QAudioInput_Tr3(const char* s, const char* c, int n);
struct miqt_string QAudioInput_TrUtf82(const char* s, const char* c);
struct miqt_string QAudioInput_TrUtf83(const char* s, const char* c, int n);
void QAudioInput_Delete(QAudioInput* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
