#include <QChar>
#include <QLatin1Char>
#include <QString>
#include <QByteArray>
#include <cstring>
#include "qchar.h"

#include "gen_qchar.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QLatin1Char* QLatin1Char_new(char c) {
	return new QLatin1Char(static_cast<char>(c));
}

QLatin1Char* QLatin1Char_new2(QLatin1Char* param1) {
	return new QLatin1Char(*param1);
}

char QLatin1Char_ToLatin1(QLatin1Char* self) {
	return const_cast<const QLatin1Char*>(self)->toLatin1();
}

uint16_t QLatin1Char_Unicode(QLatin1Char* self) {
	return const_cast<const QLatin1Char*>(self)->unicode();
}

void QLatin1Char_Delete(QLatin1Char* self) {
	delete self;
}

QChar* QChar_new() {
	return new QChar();
}

QChar* QChar_new2(uint16_t rc) {
	return new QChar(static_cast<ushort>(rc));
}

QChar* QChar_new3(unsigned char c, unsigned char r) {
	return new QChar(static_cast<uchar>(c), static_cast<uchar>(r));
}

QChar* QChar_new4(int16_t rc) {
	return new QChar(static_cast<short>(rc));
}

QChar* QChar_new5(unsigned int rc) {
	return new QChar(static_cast<uint>(rc));
}

QChar* QChar_new6(int rc) {
	return new QChar(static_cast<int>(rc));
}

QChar* QChar_new7(uintptr_t s) {
	return new QChar(static_cast<QChar::SpecialCharacter>(s));
}

QChar* QChar_new8(QLatin1Char* ch) {
	return new QChar(*ch);
}

QChar* QChar_new9(char c) {
	return new QChar(static_cast<char>(c));
}

QChar* QChar_new10(unsigned char c) {
	return new QChar(static_cast<uchar>(c));
}

QChar* QChar_new11(QChar* param1) {
	return new QChar(*param1);
}

uintptr_t QChar_Category(QChar* self) {
	QChar::Category ret = const_cast<const QChar*>(self)->category();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_Direction(QChar* self) {
	QChar::Direction ret = const_cast<const QChar*>(self)->direction();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_JoiningType(QChar* self) {
	QChar::JoiningType ret = const_cast<const QChar*>(self)->joiningType();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_Joining(QChar* self) {
	QChar::Joining ret = const_cast<const QChar*>(self)->joining();
	return static_cast<uintptr_t>(ret);
}

unsigned char QChar_CombiningClass(QChar* self) {
	return const_cast<const QChar*>(self)->combiningClass();
}

QChar* QChar_MirroredChar(QChar* self) {
	QChar ret = const_cast<const QChar*>(self)->mirroredChar();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QChar_HasMirrored(QChar* self) {
	return const_cast<const QChar*>(self)->hasMirrored();
}

void QChar_Decomposition(QChar* self, char** _out, int* _out_Strlen) {
	QString ret = const_cast<const QChar*>(self)->decomposition();
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QChar_DecompositionTag(QChar* self) {
	QChar::Decomposition ret = const_cast<const QChar*>(self)->decompositionTag();
	return static_cast<uintptr_t>(ret);
}

int QChar_DigitValue(QChar* self) {
	return const_cast<const QChar*>(self)->digitValue();
}

QChar* QChar_ToLower(QChar* self) {
	QChar ret = const_cast<const QChar*>(self)->toLower();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToUpper(QChar* self) {
	QChar ret = const_cast<const QChar*>(self)->toUpper();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToTitleCase(QChar* self) {
	QChar ret = const_cast<const QChar*>(self)->toTitleCase();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

QChar* QChar_ToCaseFolded(QChar* self) {
	QChar ret = const_cast<const QChar*>(self)->toCaseFolded();
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

uintptr_t QChar_Script(QChar* self) {
	QChar::Script ret = const_cast<const QChar*>(self)->script();
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_UnicodeVersion(QChar* self) {
	QChar::UnicodeVersion ret = const_cast<const QChar*>(self)->unicodeVersion();
	return static_cast<uintptr_t>(ret);
}

char QChar_ToLatin1(QChar* self) {
	return const_cast<const QChar*>(self)->toLatin1();
}

uint16_t QChar_Unicode(QChar* self) {
	return const_cast<const QChar*>(self)->unicode();
}

QChar* QChar_FromLatin1(char c) {
	QChar ret = QChar::fromLatin1(static_cast<char>(c));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QChar*>(new QChar(ret));
}

bool QChar_IsNull(QChar* self) {
	return const_cast<const QChar*>(self)->isNull();
}

bool QChar_IsPrint(QChar* self) {
	return const_cast<const QChar*>(self)->isPrint();
}

bool QChar_IsSpace(QChar* self) {
	return const_cast<const QChar*>(self)->isSpace();
}

bool QChar_IsMark(QChar* self) {
	return const_cast<const QChar*>(self)->isMark();
}

bool QChar_IsPunct(QChar* self) {
	return const_cast<const QChar*>(self)->isPunct();
}

bool QChar_IsSymbol(QChar* self) {
	return const_cast<const QChar*>(self)->isSymbol();
}

bool QChar_IsLetter(QChar* self) {
	return const_cast<const QChar*>(self)->isLetter();
}

bool QChar_IsNumber(QChar* self) {
	return const_cast<const QChar*>(self)->isNumber();
}

bool QChar_IsLetterOrNumber(QChar* self) {
	return const_cast<const QChar*>(self)->isLetterOrNumber();
}

bool QChar_IsDigit(QChar* self) {
	return const_cast<const QChar*>(self)->isDigit();
}

bool QChar_IsLower(QChar* self) {
	return const_cast<const QChar*>(self)->isLower();
}

bool QChar_IsUpper(QChar* self) {
	return const_cast<const QChar*>(self)->isUpper();
}

bool QChar_IsTitleCase(QChar* self) {
	return const_cast<const QChar*>(self)->isTitleCase();
}

bool QChar_IsNonCharacter(QChar* self) {
	return const_cast<const QChar*>(self)->isNonCharacter();
}

bool QChar_IsHighSurrogate(QChar* self) {
	return const_cast<const QChar*>(self)->isHighSurrogate();
}

bool QChar_IsLowSurrogate(QChar* self) {
	return const_cast<const QChar*>(self)->isLowSurrogate();
}

bool QChar_IsSurrogate(QChar* self) {
	return const_cast<const QChar*>(self)->isSurrogate();
}

unsigned char QChar_Cell(QChar* self) {
	return const_cast<const QChar*>(self)->cell();
}

unsigned char QChar_Row(QChar* self) {
	return const_cast<const QChar*>(self)->row();
}

void QChar_SetCell(QChar* self, unsigned char acell) {
	self->setCell(static_cast<uchar>(acell));
}

void QChar_SetRow(QChar* self, unsigned char arow) {
	self->setRow(static_cast<uchar>(arow));
}

bool QChar_IsNonCharacterWithUcs4(unsigned int ucs4) {
	return QChar::isNonCharacter(static_cast<uint>(ucs4));
}

bool QChar_IsHighSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isHighSurrogate(static_cast<uint>(ucs4));
}

bool QChar_IsLowSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isLowSurrogate(static_cast<uint>(ucs4));
}

bool QChar_IsSurrogateWithUcs4(unsigned int ucs4) {
	return QChar::isSurrogate(static_cast<uint>(ucs4));
}

bool QChar_RequiresSurrogates(unsigned int ucs4) {
	return QChar::requiresSurrogates(static_cast<uint>(ucs4));
}

unsigned int QChar_SurrogateToUcs4(uint16_t high, uint16_t low) {
	return QChar::surrogateToUcs4(static_cast<ushort>(high), static_cast<ushort>(low));
}

unsigned int QChar_SurrogateToUcs42(QChar* high, QChar* low) {
	return QChar::surrogateToUcs4(*high, *low);
}

uint16_t QChar_HighSurrogate(unsigned int ucs4) {
	return QChar::highSurrogate(static_cast<uint>(ucs4));
}

uint16_t QChar_LowSurrogate(unsigned int ucs4) {
	return QChar::lowSurrogate(static_cast<uint>(ucs4));
}

uintptr_t QChar_CategoryWithUcs4(unsigned int ucs4) {
	QChar::Category ret = QChar::category(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_DirectionWithUcs4(unsigned int ucs4) {
	QChar::Direction ret = QChar::direction(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_JoiningTypeWithUcs4(unsigned int ucs4) {
	QChar::JoiningType ret = QChar::joiningType(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_JoiningWithUcs4(unsigned int ucs4) {
	QChar::Joining ret = QChar::joining(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

unsigned char QChar_CombiningClassWithUcs4(unsigned int ucs4) {
	return QChar::combiningClass(static_cast<uint>(ucs4));
}

unsigned int QChar_MirroredCharWithUcs4(unsigned int ucs4) {
	return QChar::mirroredChar(static_cast<uint>(ucs4));
}

bool QChar_HasMirroredWithUcs4(unsigned int ucs4) {
	return QChar::hasMirrored(static_cast<uint>(ucs4));
}

void QChar_DecompositionWithUcs4(unsigned int ucs4, char** _out, int* _out_Strlen) {
	QString ret = QChar::decomposition(static_cast<uint>(ucs4));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

uintptr_t QChar_DecompositionTagWithUcs4(unsigned int ucs4) {
	QChar::Decomposition ret = QChar::decompositionTag(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

int QChar_DigitValueWithUcs4(unsigned int ucs4) {
	return QChar::digitValue(static_cast<uint>(ucs4));
}

unsigned int QChar_ToLowerWithUcs4(unsigned int ucs4) {
	return QChar::toLower(static_cast<uint>(ucs4));
}

unsigned int QChar_ToUpperWithUcs4(unsigned int ucs4) {
	return QChar::toUpper(static_cast<uint>(ucs4));
}

unsigned int QChar_ToTitleCaseWithUcs4(unsigned int ucs4) {
	return QChar::toTitleCase(static_cast<uint>(ucs4));
}

unsigned int QChar_ToCaseFoldedWithUcs4(unsigned int ucs4) {
	return QChar::toCaseFolded(static_cast<uint>(ucs4));
}

uintptr_t QChar_ScriptWithUcs4(unsigned int ucs4) {
	QChar::Script ret = QChar::script(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_UnicodeVersionWithUcs4(unsigned int ucs4) {
	QChar::UnicodeVersion ret = QChar::unicodeVersion(static_cast<uint>(ucs4));
	return static_cast<uintptr_t>(ret);
}

uintptr_t QChar_CurrentUnicodeVersion() {
	QChar::UnicodeVersion ret = QChar::currentUnicodeVersion();
	return static_cast<uintptr_t>(ret);
}

bool QChar_IsPrintWithUcs4(unsigned int ucs4) {
	return QChar::isPrint(static_cast<uint>(ucs4));
}

bool QChar_IsSpaceWithUcs4(unsigned int ucs4) {
	return QChar::isSpace(static_cast<uint>(ucs4));
}

bool QChar_IsMarkWithUcs4(unsigned int ucs4) {
	return QChar::isMark(static_cast<uint>(ucs4));
}

bool QChar_IsPunctWithUcs4(unsigned int ucs4) {
	return QChar::isPunct(static_cast<uint>(ucs4));
}

bool QChar_IsSymbolWithUcs4(unsigned int ucs4) {
	return QChar::isSymbol(static_cast<uint>(ucs4));
}

bool QChar_IsLetterWithUcs4(unsigned int ucs4) {
	return QChar::isLetter(static_cast<uint>(ucs4));
}

bool QChar_IsNumberWithUcs4(unsigned int ucs4) {
	return QChar::isNumber(static_cast<uint>(ucs4));
}

bool QChar_IsLetterOrNumberWithUcs4(unsigned int ucs4) {
	return QChar::isLetterOrNumber(static_cast<uint>(ucs4));
}

bool QChar_IsDigitWithUcs4(unsigned int ucs4) {
	return QChar::isDigit(static_cast<uint>(ucs4));
}

bool QChar_IsLowerWithUcs4(unsigned int ucs4) {
	return QChar::isLower(static_cast<uint>(ucs4));
}

bool QChar_IsUpperWithUcs4(unsigned int ucs4) {
	return QChar::isUpper(static_cast<uint>(ucs4));
}

bool QChar_IsTitleCaseWithUcs4(unsigned int ucs4) {
	return QChar::isTitleCase(static_cast<uint>(ucs4));
}

void QChar_Delete(QChar* self) {
	delete self;
}
