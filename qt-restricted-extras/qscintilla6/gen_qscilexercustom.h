#ifndef GEN_QSCILEXERCUSTOM_H
#define GEN_QSCILEXERCUSTOM_H

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
class QsciLexerCustom;
class QsciScintilla;
class QsciStyle;
#else
typedef struct QMetaObject QMetaObject;
typedef struct QsciLexerCustom QsciLexerCustom;
typedef struct QsciScintilla QsciScintilla;
typedef struct QsciStyle QsciStyle;
#endif

QMetaObject* QsciLexerCustom_MetaObject(const QsciLexerCustom* self);
void* QsciLexerCustom_Metacast(QsciLexerCustom* self, const char* param1);
struct miqt_string QsciLexerCustom_Tr(const char* s);
void QsciLexerCustom_SetStyling(QsciLexerCustom* self, int length, int style);
void QsciLexerCustom_SetStyling2(QsciLexerCustom* self, int length, QsciStyle* style);
void QsciLexerCustom_StartStyling(QsciLexerCustom* self, int pos);
void QsciLexerCustom_StyleText(QsciLexerCustom* self, int start, int end);
void QsciLexerCustom_SetEditor(QsciLexerCustom* self, QsciScintilla* editor);
int QsciLexerCustom_StyleBitsNeeded(const QsciLexerCustom* self);
struct miqt_string QsciLexerCustom_Tr2(const char* s, const char* c);
struct miqt_string QsciLexerCustom_Tr3(const char* s, const char* c, int n);
void QsciLexerCustom_StartStyling2(QsciLexerCustom* self, int pos, int styleBits);
void QsciLexerCustom_Delete(QsciLexerCustom* self);

#ifdef __cplusplus
} /* extern C */
#endif 

#endif