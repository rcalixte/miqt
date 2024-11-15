package qt6

/*

#include "gen_qboxlayout.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QBoxLayout__Direction int

const (
	QBoxLayout__LeftToRight QBoxLayout__Direction = 0
	QBoxLayout__RightToLeft QBoxLayout__Direction = 1
	QBoxLayout__TopToBottom QBoxLayout__Direction = 2
	QBoxLayout__BottomToTop QBoxLayout__Direction = 3
	QBoxLayout__Down        QBoxLayout__Direction = 2
	QBoxLayout__Up          QBoxLayout__Direction = 3
)

type QBoxLayout struct {
	h *C.QBoxLayout
	*QLayout
}

func (this *QBoxLayout) cPointer() *C.QBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQBoxLayout(h *C.QBoxLayout) *QBoxLayout {
	if h == nil {
		return nil
	}
	return &QBoxLayout{h: h, QLayout: UnsafeNewQLayout(unsafe.Pointer(h))}
}

func UnsafeNewQBoxLayout(h unsafe.Pointer) *QBoxLayout {
	return newQBoxLayout((*C.QBoxLayout)(h))
}

// NewQBoxLayout constructs a new QBoxLayout object.
func NewQBoxLayout(param1 QBoxLayout__Direction) *QBoxLayout {
	ret := C.QBoxLayout_new((C.int)(param1))
	return newQBoxLayout(ret)
}

// NewQBoxLayout2 constructs a new QBoxLayout object.
func NewQBoxLayout2(param1 QBoxLayout__Direction, parent *QWidget) *QBoxLayout {
	ret := C.QBoxLayout_new2((C.int)(param1), parent.cPointer())
	return newQBoxLayout(ret)
}

func (this *QBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QBoxLayout_MetaObject(this.h)))
}

func (this *QBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QBoxLayout_Metacast(this.h, param1_Cstring))
}

func QBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) Direction() QBoxLayout__Direction {
	return (QBoxLayout__Direction)(C.QBoxLayout_Direction(this.h))
}

func (this *QBoxLayout) SetDirection(direction QBoxLayout__Direction) {
	C.QBoxLayout_SetDirection(this.h, (C.int)(direction))
}

func (this *QBoxLayout) AddSpacing(size int) {
	C.QBoxLayout_AddSpacing(this.h, (C.int)(size))
}

func (this *QBoxLayout) AddStretch() {
	C.QBoxLayout_AddStretch(this.h)
}

func (this *QBoxLayout) AddSpacerItem(spacerItem *QSpacerItem) {
	C.QBoxLayout_AddSpacerItem(this.h, spacerItem.cPointer())
}

func (this *QBoxLayout) AddWidget(param1 *QWidget) {
	C.QBoxLayout_AddWidget(this.h, param1.cPointer())
}

func (this *QBoxLayout) AddLayout(layout *QLayout) {
	C.QBoxLayout_AddLayout(this.h, layout.cPointer())
}

func (this *QBoxLayout) AddStrut(param1 int) {
	C.QBoxLayout_AddStrut(this.h, (C.int)(param1))
}

func (this *QBoxLayout) AddItem(param1 *QLayoutItem) {
	C.QBoxLayout_AddItem(this.h, param1.cPointer())
}

func (this *QBoxLayout) InsertSpacing(index int, size int) {
	C.QBoxLayout_InsertSpacing(this.h, (C.int)(index), (C.int)(size))
}

func (this *QBoxLayout) InsertStretch(index int) {
	C.QBoxLayout_InsertStretch(this.h, (C.int)(index))
}

func (this *QBoxLayout) InsertSpacerItem(index int, spacerItem *QSpacerItem) {
	C.QBoxLayout_InsertSpacerItem(this.h, (C.int)(index), spacerItem.cPointer())
}

func (this *QBoxLayout) InsertWidget(index int, widget *QWidget) {
	C.QBoxLayout_InsertWidget(this.h, (C.int)(index), widget.cPointer())
}

func (this *QBoxLayout) InsertLayout(index int, layout *QLayout) {
	C.QBoxLayout_InsertLayout(this.h, (C.int)(index), layout.cPointer())
}

func (this *QBoxLayout) InsertItem(index int, param2 *QLayoutItem) {
	C.QBoxLayout_InsertItem(this.h, (C.int)(index), param2.cPointer())
}

func (this *QBoxLayout) Spacing() int {
	return (int)(C.QBoxLayout_Spacing(this.h))
}

func (this *QBoxLayout) SetSpacing(spacing int) {
	C.QBoxLayout_SetSpacing(this.h, (C.int)(spacing))
}

func (this *QBoxLayout) SetStretchFactor(w *QWidget, stretch int) bool {
	return (bool)(C.QBoxLayout_SetStretchFactor(this.h, w.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretchFactor2(l *QLayout, stretch int) bool {
	return (bool)(C.QBoxLayout_SetStretchFactor2(this.h, l.cPointer(), (C.int)(stretch)))
}

func (this *QBoxLayout) SetStretch(index int, stretch int) {
	C.QBoxLayout_SetStretch(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) Stretch(index int) int {
	return (int)(C.QBoxLayout_Stretch(this.h, (C.int)(index)))
}

func (this *QBoxLayout) SizeHint() *QSize {
	_ret := C.QBoxLayout_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MinimumSize() *QSize {
	_ret := C.QBoxLayout_MinimumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) MaximumSize() *QSize {
	_ret := C.QBoxLayout_MaximumSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QBoxLayout) HasHeightForWidth() bool {
	return (bool)(C.QBoxLayout_HasHeightForWidth(this.h))
}

func (this *QBoxLayout) HeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_HeightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) MinimumHeightForWidth(param1 int) int {
	return (int)(C.QBoxLayout_MinimumHeightForWidth(this.h, (C.int)(param1)))
}

func (this *QBoxLayout) ExpandingDirections() Orientation {
	return (Orientation)(C.QBoxLayout_ExpandingDirections(this.h))
}

func (this *QBoxLayout) Invalidate() {
	C.QBoxLayout_Invalidate(this.h)
}

func (this *QBoxLayout) ItemAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_ItemAt(this.h, (C.int)(param1))))
}

func (this *QBoxLayout) TakeAt(param1 int) *QLayoutItem {
	return UnsafeNewQLayoutItem(unsafe.Pointer(C.QBoxLayout_TakeAt(this.h, (C.int)(param1))))
}

func (this *QBoxLayout) Count() int {
	return (int)(C.QBoxLayout_Count(this.h))
}

func (this *QBoxLayout) SetGeometry(geometry *QRect) {
	C.QBoxLayout_SetGeometry(this.h, geometry.cPointer())
}

func QBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QBoxLayout) AddStretch1(stretch int) {
	C.QBoxLayout_AddStretch1(this.h, (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget2(param1 *QWidget, stretch int) {
	C.QBoxLayout_AddWidget2(this.h, param1.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) AddWidget3(param1 *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_AddWidget3(this.h, param1.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) AddLayout2(layout *QLayout, stretch int) {
	C.QBoxLayout_AddLayout2(this.h, layout.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertStretch2(index int, stretch int) {
	C.QBoxLayout_InsertStretch2(this.h, (C.int)(index), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget3(index int, widget *QWidget, stretch int) {
	C.QBoxLayout_InsertWidget3(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch))
}

func (this *QBoxLayout) InsertWidget4(index int, widget *QWidget, stretch int, alignment AlignmentFlag) {
	C.QBoxLayout_InsertWidget4(this.h, (C.int)(index), widget.cPointer(), (C.int)(stretch), (C.int)(alignment))
}

func (this *QBoxLayout) InsertLayout3(index int, layout *QLayout, stretch int) {
	C.QBoxLayout_InsertLayout3(this.h, (C.int)(index), layout.cPointer(), (C.int)(stretch))
}

// Delete this object from C++ memory.
func (this *QBoxLayout) Delete() {
	C.QBoxLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QHBoxLayout struct {
	h *C.QHBoxLayout
	*QBoxLayout
}

func (this *QHBoxLayout) cPointer() *C.QHBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QHBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQHBoxLayout(h *C.QHBoxLayout) *QHBoxLayout {
	if h == nil {
		return nil
	}
	return &QHBoxLayout{h: h, QBoxLayout: UnsafeNewQBoxLayout(unsafe.Pointer(h))}
}

func UnsafeNewQHBoxLayout(h unsafe.Pointer) *QHBoxLayout {
	return newQHBoxLayout((*C.QHBoxLayout)(h))
}

// NewQHBoxLayout constructs a new QHBoxLayout object.
func NewQHBoxLayout(parent *QWidget) *QHBoxLayout {
	ret := C.QHBoxLayout_new(parent.cPointer())
	return newQHBoxLayout(ret)
}

// NewQHBoxLayout2 constructs a new QHBoxLayout object.
func NewQHBoxLayout2() *QHBoxLayout {
	ret := C.QHBoxLayout_new2()
	return newQHBoxLayout(ret)
}

func (this *QHBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QHBoxLayout_MetaObject(this.h)))
}

func (this *QHBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QHBoxLayout_Metacast(this.h, param1_Cstring))
}

func QHBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QHBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QHBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QHBoxLayout) Delete() {
	C.QHBoxLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QHBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QHBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QVBoxLayout struct {
	h *C.QVBoxLayout
	*QBoxLayout
}

func (this *QVBoxLayout) cPointer() *C.QVBoxLayout {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVBoxLayout) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVBoxLayout(h *C.QVBoxLayout) *QVBoxLayout {
	if h == nil {
		return nil
	}
	return &QVBoxLayout{h: h, QBoxLayout: UnsafeNewQBoxLayout(unsafe.Pointer(h))}
}

func UnsafeNewQVBoxLayout(h unsafe.Pointer) *QVBoxLayout {
	return newQVBoxLayout((*C.QVBoxLayout)(h))
}

// NewQVBoxLayout constructs a new QVBoxLayout object.
func NewQVBoxLayout(parent *QWidget) *QVBoxLayout {
	ret := C.QVBoxLayout_new(parent.cPointer())
	return newQVBoxLayout(ret)
}

// NewQVBoxLayout2 constructs a new QVBoxLayout object.
func NewQVBoxLayout2() *QVBoxLayout {
	ret := C.QVBoxLayout_new2()
	return newQVBoxLayout(ret)
}

func (this *QVBoxLayout) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QVBoxLayout_MetaObject(this.h)))
}

func (this *QVBoxLayout) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QVBoxLayout_Metacast(this.h, param1_Cstring))
}

func QVBoxLayout_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVBoxLayout_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QVBoxLayout_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QVBoxLayout) Delete() {
	C.QVBoxLayout_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVBoxLayout) GoGC() {
	runtime.SetFinalizer(this, func(this *QVBoxLayout) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
