#ifndef GEN_QANIMATIONGROUP_H
#define GEN_QANIMATIONGROUP_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QAbstractAnimation;
class QAnimationGroup;
class QMetaObject;
#else
typedef struct QAbstractAnimation QAbstractAnimation;
typedef struct QAnimationGroup QAnimationGroup;
typedef struct QMetaObject QMetaObject;
#endif

QMetaObject* QAnimationGroup_MetaObject(const QAnimationGroup* self);
void* QAnimationGroup_Metacast(QAnimationGroup* self, const char* param1);
struct miqt_string QAnimationGroup_Tr(const char* s);
QAbstractAnimation* QAnimationGroup_AnimationAt(const QAnimationGroup* self, int index);
int QAnimationGroup_AnimationCount(const QAnimationGroup* self);
int QAnimationGroup_IndexOfAnimation(const QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_AddAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
void QAnimationGroup_InsertAnimation(QAnimationGroup* self, int index, QAbstractAnimation* animation);
void QAnimationGroup_RemoveAnimation(QAnimationGroup* self, QAbstractAnimation* animation);
QAbstractAnimation* QAnimationGroup_TakeAnimation(QAnimationGroup* self, int index);
void QAnimationGroup_Clear(QAnimationGroup* self);
struct miqt_string QAnimationGroup_Tr2(const char* s, const char* c);
struct miqt_string QAnimationGroup_Tr3(const char* s, const char* c, int n);
void QAnimationGroup_Delete(QAnimationGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
