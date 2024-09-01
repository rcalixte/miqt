#include <QByteArray>
#include <QFileInfo>
#include <QIODevice>
#include <QList>
#include <QMimeDatabase>
#include <QMimeType>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include "qmimedatabase.h"

#include "gen_qmimedatabase.h"

extern "C" {
    extern void miqt_exec_callback(void* cb, int argc, void* argv);
}

QMimeDatabase* QMimeDatabase_new() {
	return new QMimeDatabase();
}

QMimeType* QMimeDatabase_MimeTypeForName(QMimeDatabase* self, const char* nameOrAlias, size_t nameOrAlias_Strlen) {
	QString nameOrAlias_QString = QString::fromUtf8(nameOrAlias, nameOrAlias_Strlen);
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForName(nameOrAlias_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForFile(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForFile(fileName_QString);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForFileWithFileInfo(QMimeDatabase* self, QFileInfo* fileInfo) {
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForFile(*fileInfo);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

void QMimeDatabase_MimeTypesForFileName(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QMimeType*** _out, size_t* _out_len) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QList<QMimeType> ret = const_cast<const QMimeDatabase*>(self)->mimeTypesForFileName(fileName_QString);
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QMimeType** __out = static_cast<QMimeType**>(malloc(sizeof(QMimeType**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QMimeType(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QMimeType* QMimeDatabase_MimeTypeForData(QMimeDatabase* self, QByteArray* data) {
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForData(*data);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForDataWithDevice(QMimeDatabase* self, QIODevice* device) {
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForData(device);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForUrl(QMimeDatabase* self, QUrl* url) {
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForUrl(*url);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QIODevice* device) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForFileNameAndData(fileName_QString, device);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForFileNameAndData2(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, QByteArray* data) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QMimeType ret = const_cast<const QMimeDatabase*>(self)->mimeTypeForFileNameAndData(fileName_QString, *data);
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

void QMimeDatabase_SuffixForFileName(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, char** _out, int* _out_Strlen) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QString ret = const_cast<const QMimeDatabase*>(self)->suffixForFileName(fileName_QString);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray b = ret.toUtf8();
	*_out = static_cast<char*>(malloc(b.length()));
	memcpy(*_out, b.data(), b.length());
	*_out_Strlen = b.length();
}

void QMimeDatabase_AllMimeTypes(QMimeDatabase* self, QMimeType*** _out, size_t* _out_len) {
	QList<QMimeType> ret = const_cast<const QMimeDatabase*>(self)->allMimeTypes();
	// Convert QList<> from C++ memory to manually-managed C memory of copy-constructed pointers
	QMimeType** __out = static_cast<QMimeType**>(malloc(sizeof(QMimeType**) * ret.length()));
	for (size_t i = 0, e = ret.length(); i < e; ++i) {
		__out[i] = new QMimeType(ret[i]);
	}
	*_out = __out;
	*_out_len = ret.length();
}

QMimeType* QMimeDatabase_MimeTypeForFile2(QMimeDatabase* self, const char* fileName, size_t fileName_Strlen, uintptr_t mode) {
	QString fileName_QString = QString::fromUtf8(fileName, fileName_Strlen);
	QMimeType ret = self->mimeTypeForFile(fileName_QString, static_cast<QMimeDatabase::MatchMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

QMimeType* QMimeDatabase_MimeTypeForFile22(QMimeDatabase* self, QFileInfo* fileInfo, uintptr_t mode) {
	QMimeType ret = self->mimeTypeForFile(*fileInfo, static_cast<QMimeDatabase::MatchMode>(mode));
	// Copy-construct value returned type into heap-allocated copy
	return static_cast<QMimeType*>(new QMimeType(ret));
}

void QMimeDatabase_Delete(QMimeDatabase* self) {
	delete self;
}
