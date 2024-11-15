package qt6

/*

#include "gen_qabstractscrollarea.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QAbstractScrollArea__SizeAdjustPolicy int

const (
	QAbstractScrollArea__AdjustIgnored               QAbstractScrollArea__SizeAdjustPolicy = 0
	QAbstractScrollArea__AdjustToContentsOnFirstShow QAbstractScrollArea__SizeAdjustPolicy = 1
	QAbstractScrollArea__AdjustToContents            QAbstractScrollArea__SizeAdjustPolicy = 2
)

type QAbstractScrollArea struct {
	h *C.QAbstractScrollArea
	*QFrame
}

func (this *QAbstractScrollArea) cPointer() *C.QAbstractScrollArea {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAbstractScrollArea) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQAbstractScrollArea(h *C.QAbstractScrollArea) *QAbstractScrollArea {
	if h == nil {
		return nil
	}
	return &QAbstractScrollArea{h: h, QFrame: UnsafeNewQFrame(unsafe.Pointer(h))}
}

func UnsafeNewQAbstractScrollArea(h unsafe.Pointer) *QAbstractScrollArea {
	return newQAbstractScrollArea((*C.QAbstractScrollArea)(h))
}

// NewQAbstractScrollArea constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea(parent *QWidget) *QAbstractScrollArea {
	ret := C.QAbstractScrollArea_new(parent.cPointer())
	return newQAbstractScrollArea(ret)
}

// NewQAbstractScrollArea2 constructs a new QAbstractScrollArea object.
func NewQAbstractScrollArea2() *QAbstractScrollArea {
	ret := C.QAbstractScrollArea_new2()
	return newQAbstractScrollArea(ret)
}

func (this *QAbstractScrollArea) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAbstractScrollArea_MetaObject(this.h)))
}

func (this *QAbstractScrollArea) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAbstractScrollArea_Metacast(this.h, param1_Cstring))
}

func QAbstractScrollArea_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAbstractScrollArea) VerticalScrollBarPolicy() ScrollBarPolicy {
	return (ScrollBarPolicy)(C.QAbstractScrollArea_VerticalScrollBarPolicy(this.h))
}

func (this *QAbstractScrollArea) SetVerticalScrollBarPolicy(verticalScrollBarPolicy ScrollBarPolicy) {
	C.QAbstractScrollArea_SetVerticalScrollBarPolicy(this.h, (C.int)(verticalScrollBarPolicy))
}

func (this *QAbstractScrollArea) VerticalScrollBar() *QScrollBar {
	return UnsafeNewQScrollBar(unsafe.Pointer(C.QAbstractScrollArea_VerticalScrollBar(this.h)))
}

func (this *QAbstractScrollArea) SetVerticalScrollBar(scrollbar *QScrollBar) {
	C.QAbstractScrollArea_SetVerticalScrollBar(this.h, scrollbar.cPointer())
}

func (this *QAbstractScrollArea) HorizontalScrollBarPolicy() ScrollBarPolicy {
	return (ScrollBarPolicy)(C.QAbstractScrollArea_HorizontalScrollBarPolicy(this.h))
}

func (this *QAbstractScrollArea) SetHorizontalScrollBarPolicy(horizontalScrollBarPolicy ScrollBarPolicy) {
	C.QAbstractScrollArea_SetHorizontalScrollBarPolicy(this.h, (C.int)(horizontalScrollBarPolicy))
}

func (this *QAbstractScrollArea) HorizontalScrollBar() *QScrollBar {
	return UnsafeNewQScrollBar(unsafe.Pointer(C.QAbstractScrollArea_HorizontalScrollBar(this.h)))
}

func (this *QAbstractScrollArea) SetHorizontalScrollBar(scrollbar *QScrollBar) {
	C.QAbstractScrollArea_SetHorizontalScrollBar(this.h, scrollbar.cPointer())
}

func (this *QAbstractScrollArea) CornerWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractScrollArea_CornerWidget(this.h)))
}

func (this *QAbstractScrollArea) SetCornerWidget(widget *QWidget) {
	C.QAbstractScrollArea_SetCornerWidget(this.h, widget.cPointer())
}

func (this *QAbstractScrollArea) AddScrollBarWidget(widget *QWidget, alignment AlignmentFlag) {
	C.QAbstractScrollArea_AddScrollBarWidget(this.h, widget.cPointer(), (C.int)(alignment))
}

func (this *QAbstractScrollArea) ScrollBarWidgets(alignment AlignmentFlag) []*QWidget {
	var _ma C.struct_miqt_array = C.QAbstractScrollArea_ScrollBarWidgets(this.h, (C.int)(alignment))
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQWidget(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QAbstractScrollArea) Viewport() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QAbstractScrollArea_Viewport(this.h)))
}

func (this *QAbstractScrollArea) SetViewport(widget *QWidget) {
	C.QAbstractScrollArea_SetViewport(this.h, widget.cPointer())
}

func (this *QAbstractScrollArea) MaximumViewportSize() *QSize {
	_ret := C.QAbstractScrollArea_MaximumViewportSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) MinimumSizeHint() *QSize {
	_ret := C.QAbstractScrollArea_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) SizeHint() *QSize {
	_ret := C.QAbstractScrollArea_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QAbstractScrollArea) SetupViewport(viewport *QWidget) {
	C.QAbstractScrollArea_SetupViewport(this.h, viewport.cPointer())
}

func (this *QAbstractScrollArea) SizeAdjustPolicy() QAbstractScrollArea__SizeAdjustPolicy {
	return (QAbstractScrollArea__SizeAdjustPolicy)(C.QAbstractScrollArea_SizeAdjustPolicy(this.h))
}

func (this *QAbstractScrollArea) SetSizeAdjustPolicy(policy QAbstractScrollArea__SizeAdjustPolicy) {
	C.QAbstractScrollArea_SetSizeAdjustPolicy(this.h, (C.int)(policy))
}

func QAbstractScrollArea_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAbstractScrollArea_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAbstractScrollArea_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QAbstractScrollArea) Delete() {
	C.QAbstractScrollArea_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAbstractScrollArea) GoGC() {
	runtime.SetFinalizer(this, func(this *QAbstractScrollArea) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
