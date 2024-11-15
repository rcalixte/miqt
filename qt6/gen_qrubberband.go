package qt6

/*

#include "gen_qrubberband.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QRubberBand__Shape int

const (
	QRubberBand__Line      QRubberBand__Shape = 0
	QRubberBand__Rectangle QRubberBand__Shape = 1
)

type QRubberBand struct {
	h *C.QRubberBand
	*QWidget
}

func (this *QRubberBand) cPointer() *C.QRubberBand {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QRubberBand) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQRubberBand(h *C.QRubberBand) *QRubberBand {
	if h == nil {
		return nil
	}
	return &QRubberBand{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQRubberBand(h unsafe.Pointer) *QRubberBand {
	return newQRubberBand((*C.QRubberBand)(h))
}

// NewQRubberBand constructs a new QRubberBand object.
func NewQRubberBand(param1 QRubberBand__Shape) *QRubberBand {
	ret := C.QRubberBand_new((C.int)(param1))
	return newQRubberBand(ret)
}

// NewQRubberBand2 constructs a new QRubberBand object.
func NewQRubberBand2(param1 QRubberBand__Shape, param2 *QWidget) *QRubberBand {
	ret := C.QRubberBand_new2((C.int)(param1), param2.cPointer())
	return newQRubberBand(ret)
}

func (this *QRubberBand) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QRubberBand_MetaObject(this.h)))
}

func (this *QRubberBand) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QRubberBand_Metacast(this.h, param1_Cstring))
}

func QRubberBand_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QRubberBand) Shape() QRubberBand__Shape {
	return (QRubberBand__Shape)(C.QRubberBand_Shape(this.h))
}

func (this *QRubberBand) SetGeometry(r *QRect) {
	C.QRubberBand_SetGeometry(this.h, r.cPointer())
}

func (this *QRubberBand) SetGeometry2(x int, y int, w int, h int) {
	C.QRubberBand_SetGeometry2(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) Move(x int, y int) {
	C.QRubberBand_Move(this.h, (C.int)(x), (C.int)(y))
}

func (this *QRubberBand) MoveWithQPoint(p *QPoint) {
	C.QRubberBand_MoveWithQPoint(this.h, p.cPointer())
}

func (this *QRubberBand) Resize(w int, h int) {
	C.QRubberBand_Resize(this.h, (C.int)(w), (C.int)(h))
}

func (this *QRubberBand) ResizeWithQSize(s *QSize) {
	C.QRubberBand_ResizeWithQSize(this.h, s.cPointer())
}

func QRubberBand_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QRubberBand_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QRubberBand_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QRubberBand) Delete() {
	C.QRubberBand_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QRubberBand) GoGC() {
	runtime.SetFinalizer(this, func(this *QRubberBand) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
