#ifndef GEN_QEXCEPTION_H
#define GEN_QEXCEPTION_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionHolder)
typedef QtPrivate::ExceptionHolder QtPrivate__ExceptionHolder;
#else
class QtPrivate__ExceptionHolder;
#endif
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QtPrivate__ExceptionStore)
typedef QtPrivate::ExceptionStore QtPrivate__ExceptionStore;
#else
class QtPrivate__ExceptionStore;
#endif
#else
typedef struct QtPrivate__ExceptionHolder QtPrivate__ExceptionHolder;
typedef struct QtPrivate__ExceptionStore QtPrivate__ExceptionStore;
#endif

QtPrivate__ExceptionHolder* QtPrivate__ExceptionHolder_new();
void QtPrivate__ExceptionHolder_Delete(QtPrivate__ExceptionHolder* self);

bool QtPrivate__ExceptionStore_HasException(const QtPrivate__ExceptionStore* self);
void QtPrivate__ExceptionStore_ThrowPossibleException(QtPrivate__ExceptionStore* self);
bool QtPrivate__ExceptionStore_HasThrown(const QtPrivate__ExceptionStore* self);
void QtPrivate__ExceptionStore_Delete(QtPrivate__ExceptionStore* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
