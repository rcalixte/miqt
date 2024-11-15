package qt

/*

#include "gen_qcolumnview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QColumnView struct {
	h *C.QColumnView
	*QAbstractItemView
}

func (this *QColumnView) cPointer() *C.QColumnView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QColumnView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQColumnView(h *C.QColumnView) *QColumnView {
	if h == nil {
		return nil
	}
	return &QColumnView{h: h, QAbstractItemView: UnsafeNewQAbstractItemView(unsafe.Pointer(h))}
}

func UnsafeNewQColumnView(h unsafe.Pointer) *QColumnView {
	return newQColumnView((*C.QColumnView)(h))
}

// NewQColumnView constructs a new QColumnView object.
func NewQColumnView(parent *QWidget) *QColumnView {
	ret := C.QColumnView_new(parent.cPointer())
	return newQColumnView(ret)
}

// NewQColumnView2 constructs a new QColumnView object.
func NewQColumnView2() *QColumnView {
	ret := C.QColumnView_new2()
	return newQColumnView(ret)
}

func (this *QColumnView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QColumnView_MetaObject(this.h)))
}

func (this *QColumnView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QColumnView_Metacast(this.h, param1_Cstring))
}

func QColumnView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColumnView) UpdatePreviewWidget(index *QModelIndex) {
	C.QColumnView_UpdatePreviewWidget(this.h, index.cPointer())
}
func (this *QColumnView) OnUpdatePreviewWidget(slot func(index *QModelIndex)) {
	C.QColumnView_connect_UpdatePreviewWidget(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QColumnView_UpdatePreviewWidget
func miqt_exec_callback_QColumnView_UpdatePreviewWidget(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QColumnView) IndexAt(point *QPoint) *QModelIndex {
	_ret := C.QColumnView_IndexAt(this.h, point.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) ScrollTo(index *QModelIndex) {
	C.QColumnView_ScrollTo(this.h, index.cPointer())
}

func (this *QColumnView) SizeHint() *QSize {
	_ret := C.QColumnView_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QColumnView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QColumnView) SetModel(model *QAbstractItemModel) {
	C.QColumnView_SetModel(this.h, model.cPointer())
}

func (this *QColumnView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QColumnView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QColumnView) SetRootIndex(index *QModelIndex) {
	C.QColumnView_SetRootIndex(this.h, index.cPointer())
}

func (this *QColumnView) SelectAll() {
	C.QColumnView_SelectAll(this.h)
}

func (this *QColumnView) SetResizeGripsVisible(visible bool) {
	C.QColumnView_SetResizeGripsVisible(this.h, (C.bool)(visible))
}

func (this *QColumnView) ResizeGripsVisible() bool {
	return (bool)(C.QColumnView_ResizeGripsVisible(this.h))
}

func (this *QColumnView) PreviewWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QColumnView_PreviewWidget(this.h)))
}

func (this *QColumnView) SetPreviewWidget(widget *QWidget) {
	C.QColumnView_SetPreviewWidget(this.h, widget.cPointer())
}

func (this *QColumnView) SetColumnWidths(list []int) {
	list_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(list))))
	defer C.free(unsafe.Pointer(list_CArray))
	for i := range list {
		list_CArray[i] = (C.int)(list[i])
	}
	list_ma := C.struct_miqt_array{len: C.size_t(len(list)), data: unsafe.Pointer(list_CArray)}
	C.QColumnView_SetColumnWidths(this.h, list_ma)
}

func (this *QColumnView) ColumnWidths() []int {
	var _ma C.struct_miqt_array = C.QColumnView_ColumnWidths(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	return _ret
}

func QColumnView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QColumnView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QColumnView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QColumnView) ScrollTo2(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QColumnView_ScrollTo2(this.h, index.cPointer(), (C.int)(hint))
}

// Delete this object from C++ memory.
func (this *QColumnView) Delete() {
	C.QColumnView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QColumnView) GoGC() {
	runtime.SetFinalizer(this, func(this *QColumnView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
