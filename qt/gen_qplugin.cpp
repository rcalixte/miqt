#include <QJsonObject>
#include <QStaticPlugin>
#include <qplugin.h>
#include "gen_qplugin.h"
#include "_cgo_export.h"

QJsonObject* QStaticPlugin_MetaData(const QStaticPlugin* self) {
	return new QJsonObject(self->metaData());
}

void QStaticPlugin_Delete(QStaticPlugin* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QStaticPlugin*>( self );
	} else {
		delete self;
	}
}

