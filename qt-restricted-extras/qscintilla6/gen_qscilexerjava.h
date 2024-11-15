#ifndef GEN_QSCILEXERJAVA_H
#define GEN_QSCILEXERJAVA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../../libmiqt/libmiqt.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
class QMetaObject;
class QObject;
class QsciLexerJava;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QObject QObject;
typedef struct QsciLexerJava QsciLexerJava;
#endif

QsciLexerJava* QsciLexerJava_new();
QsciLexerJava* QsciLexerJava_new2(QObject* parent);
QMetaObject* QsciLexerJava_MetaObject(const QsciLexerJava* self);
void* QsciLexerJava_Metacast(QsciLexerJava* self, const char* param1);
struct miqt_string QsciLexerJava_Tr(const char* s);
const char* QsciLexerJava_Language(const QsciLexerJava* self);
const char* QsciLexerJava_Keywords(const QsciLexerJava* self, int set);
struct miqt_string QsciLexerJava_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerJava_Tr3(const char* s, const char* c, int n);
void QsciLexerJava_Delete(QsciLexerJava* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif
