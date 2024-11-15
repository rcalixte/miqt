package qt6

/*

#include "gen_qdial.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QDial struct {
	h *C.QDial
	*QAbstractSlider
}

func (this *QDial) cPointer() *C.QDial {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QDial) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQDial(h *C.QDial) *QDial {
	if h == nil {
		return nil
	}
	return &QDial{h: h, QAbstractSlider: UnsafeNewQAbstractSlider(unsafe.Pointer(h))}
}

func UnsafeNewQDial(h unsafe.Pointer) *QDial {
	return newQDial((*C.QDial)(h))
}

// NewQDial constructs a new QDial object.
func NewQDial(parent *QWidget) *QDial {
	ret := C.QDial_new(parent.cPointer())
	return newQDial(ret)
}

// NewQDial2 constructs a new QDial object.
func NewQDial2() *QDial {
	ret := C.QDial_new2()
	return newQDial(ret)
}

func (this *QDial) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QDial_MetaObject(this.h)))
}

func (this *QDial) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QDial_Metacast(this.h, param1_Cstring))
}

func QDial_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QDial_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QDial) Wrapping() bool {
	return (bool)(C.QDial_Wrapping(this.h))
}

func (this *QDial) NotchSize() int {
	return (int)(C.QDial_NotchSize(this.h))
}

func (this *QDial) SetNotchTarget(target float64) {
	C.QDial_SetNotchTarget(this.h, (C.double)(target))
}

func (this *QDial) NotchTarget() float64 {
	return (float64)(C.QDial_NotchTarget(this.h))
}

func (this *QDial) NotchesVisible() bool {
	return (bool)(C.QDial_NotchesVisible(this.h))
}

func (this *QDial) SizeHint() *QSize {
	_ret := C.QDial_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) MinimumSizeHint() *QSize {
	_ret := C.QDial_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QDial) SetNotchesVisible(visible bool) {
	C.QDial_SetNotchesVisible(this.h, (C.bool)(visible))
}

func (this *QDial) SetWrapping(on bool) {
	C.QDial_SetWrapping(this.h, (C.bool)(on))
}

func QDial_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QDial_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QDial_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QDial) Delete() {
	C.QDial_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QDial) GoGC() {
	runtime.SetFinalizer(this, func(this *QDial) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
