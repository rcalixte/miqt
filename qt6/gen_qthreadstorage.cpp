#include <QThreadStorageData>
#include <qthreadstorage.h>
#include "gen_qthreadstorage.h"
#include "_cgo_export.h"

QThreadStorageData* QThreadStorageData_new(QThreadStorageData* param1) {
	return new QThreadStorageData(*param1);
}

void QThreadStorageData_Delete(QThreadStorageData* self) {
	delete self;
}

