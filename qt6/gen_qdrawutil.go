package qt6

/*

#include "gen_qdrawutil.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDrawBorderPixmap__DrawingHint int

const (
	QDrawBorderPixmap__OpaqueTopLeft     QDrawBorderPixmap__DrawingHint = 1
	QDrawBorderPixmap__OpaqueTop         QDrawBorderPixmap__DrawingHint = 2
	QDrawBorderPixmap__OpaqueTopRight    QDrawBorderPixmap__DrawingHint = 4
	QDrawBorderPixmap__OpaqueLeft        QDrawBorderPixmap__DrawingHint = 8
	QDrawBorderPixmap__OpaqueCenter      QDrawBorderPixmap__DrawingHint = 16
	QDrawBorderPixmap__OpaqueRight       QDrawBorderPixmap__DrawingHint = 32
	QDrawBorderPixmap__OpaqueBottomLeft  QDrawBorderPixmap__DrawingHint = 64
	QDrawBorderPixmap__OpaqueBottom      QDrawBorderPixmap__DrawingHint = 128
	QDrawBorderPixmap__OpaqueBottomRight QDrawBorderPixmap__DrawingHint = 256
	QDrawBorderPixmap__OpaqueCorners     QDrawBorderPixmap__DrawingHint = 325
	QDrawBorderPixmap__OpaqueEdges       QDrawBorderPixmap__DrawingHint = 170
	QDrawBorderPixmap__OpaqueFrame       QDrawBorderPixmap__DrawingHint = 495
	QDrawBorderPixmap__OpaqueAll         QDrawBorderPixmap__DrawingHint = 511
)

type QTileRules struct {
	h *C.QTileRules
}

func (this *QTileRules) cPointer() *C.QTileRules {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTileRules) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTileRules(h *C.QTileRules) *QTileRules {
	if h == nil {
		return nil
	}
	return &QTileRules{h: h}
}

func UnsafeNewQTileRules(h unsafe.Pointer) *QTileRules {
	return newQTileRules((*C.QTileRules)(h))
}

// NewQTileRules constructs a new QTileRules object.
func NewQTileRules(horizontalRule TileRule, verticalRule TileRule) *QTileRules {
	ret := C.QTileRules_new((C.int)(horizontalRule), (C.int)(verticalRule))
	return newQTileRules(ret)
}

// NewQTileRules2 constructs a new QTileRules object.
func NewQTileRules2() *QTileRules {
	ret := C.QTileRules_new2()
	return newQTileRules(ret)
}

// NewQTileRules3 constructs a new QTileRules object.
func NewQTileRules3(param1 *QTileRules) *QTileRules {
	ret := C.QTileRules_new3(param1.cPointer())
	return newQTileRules(ret)
}

// NewQTileRules4 constructs a new QTileRules object.
func NewQTileRules4(rule TileRule) *QTileRules {
	ret := C.QTileRules_new4((C.int)(rule))
	return newQTileRules(ret)
}

// Delete this object from C++ memory.
func (this *QTileRules) Delete() {
	C.QTileRules_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTileRules) GoGC() {
	runtime.SetFinalizer(this, func(this *QTileRules) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
