#include <QHashSeed>
#include <qhashfunctions.h>
#include "gen_qhashfunctions.h"
#include "_cgo_export.h"

QHashSeed* QHashSeed_new() {
	return new QHashSeed();
}

QHashSeed* QHashSeed_new2(size_t d) {
	return new QHashSeed(static_cast<size_t>(d));
}

QHashSeed* QHashSeed_GlobalSeed() {
	return new QHashSeed(QHashSeed::globalSeed());
}

void QHashSeed_SetDeterministicGlobalSeed() {
	QHashSeed::setDeterministicGlobalSeed();
}

void QHashSeed_ResetRandomGlobalSeed() {
	QHashSeed::resetRandomGlobalSeed();
}

void QHashSeed_Delete(QHashSeed* self, bool isSubclass) {
	if (isSubclass) {
		delete dynamic_cast<QHashSeed*>( self );
	} else {
		delete self;
	}
}

