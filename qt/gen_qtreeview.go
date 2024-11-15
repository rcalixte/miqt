package qt

/*

#include "gen_qtreeview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QTreeView struct {
	h *C.QTreeView
	*QAbstractItemView
}

func (this *QTreeView) cPointer() *C.QTreeView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTreeView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTreeView(h *C.QTreeView) *QTreeView {
	if h == nil {
		return nil
	}
	return &QTreeView{h: h, QAbstractItemView: UnsafeNewQAbstractItemView(unsafe.Pointer(h))}
}

func UnsafeNewQTreeView(h unsafe.Pointer) *QTreeView {
	return newQTreeView((*C.QTreeView)(h))
}

// NewQTreeView constructs a new QTreeView object.
func NewQTreeView(parent *QWidget) *QTreeView {
	ret := C.QTreeView_new(parent.cPointer())
	return newQTreeView(ret)
}

// NewQTreeView2 constructs a new QTreeView object.
func NewQTreeView2() *QTreeView {
	ret := C.QTreeView_new2()
	return newQTreeView(ret)
}

func (this *QTreeView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QTreeView_MetaObject(this.h)))
}

func (this *QTreeView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QTreeView_Metacast(this.h, param1_Cstring))
}

func QTreeView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) SetModel(model *QAbstractItemModel) {
	C.QTreeView_SetModel(this.h, model.cPointer())
}

func (this *QTreeView) SetRootIndex(index *QModelIndex) {
	C.QTreeView_SetRootIndex(this.h, index.cPointer())
}

func (this *QTreeView) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QTreeView_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QTreeView) Header() *QHeaderView {
	return UnsafeNewQHeaderView(unsafe.Pointer(C.QTreeView_Header(this.h)))
}

func (this *QTreeView) SetHeader(header *QHeaderView) {
	C.QTreeView_SetHeader(this.h, header.cPointer())
}

func (this *QTreeView) AutoExpandDelay() int {
	return (int)(C.QTreeView_AutoExpandDelay(this.h))
}

func (this *QTreeView) SetAutoExpandDelay(delay int) {
	C.QTreeView_SetAutoExpandDelay(this.h, (C.int)(delay))
}

func (this *QTreeView) Indentation() int {
	return (int)(C.QTreeView_Indentation(this.h))
}

func (this *QTreeView) SetIndentation(i int) {
	C.QTreeView_SetIndentation(this.h, (C.int)(i))
}

func (this *QTreeView) ResetIndentation() {
	C.QTreeView_ResetIndentation(this.h)
}

func (this *QTreeView) RootIsDecorated() bool {
	return (bool)(C.QTreeView_RootIsDecorated(this.h))
}

func (this *QTreeView) SetRootIsDecorated(show bool) {
	C.QTreeView_SetRootIsDecorated(this.h, (C.bool)(show))
}

func (this *QTreeView) UniformRowHeights() bool {
	return (bool)(C.QTreeView_UniformRowHeights(this.h))
}

func (this *QTreeView) SetUniformRowHeights(uniform bool) {
	C.QTreeView_SetUniformRowHeights(this.h, (C.bool)(uniform))
}

func (this *QTreeView) ItemsExpandable() bool {
	return (bool)(C.QTreeView_ItemsExpandable(this.h))
}

func (this *QTreeView) SetItemsExpandable(enable bool) {
	C.QTreeView_SetItemsExpandable(this.h, (C.bool)(enable))
}

func (this *QTreeView) ExpandsOnDoubleClick() bool {
	return (bool)(C.QTreeView_ExpandsOnDoubleClick(this.h))
}

func (this *QTreeView) SetExpandsOnDoubleClick(enable bool) {
	C.QTreeView_SetExpandsOnDoubleClick(this.h, (C.bool)(enable))
}

func (this *QTreeView) ColumnViewportPosition(column int) int {
	return (int)(C.QTreeView_ColumnViewportPosition(this.h, (C.int)(column)))
}

func (this *QTreeView) ColumnWidth(column int) int {
	return (int)(C.QTreeView_ColumnWidth(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnWidth(column int, width int) {
	C.QTreeView_SetColumnWidth(this.h, (C.int)(column), (C.int)(width))
}

func (this *QTreeView) ColumnAt(x int) int {
	return (int)(C.QTreeView_ColumnAt(this.h, (C.int)(x)))
}

func (this *QTreeView) IsColumnHidden(column int) bool {
	return (bool)(C.QTreeView_IsColumnHidden(this.h, (C.int)(column)))
}

func (this *QTreeView) SetColumnHidden(column int, hide bool) {
	C.QTreeView_SetColumnHidden(this.h, (C.int)(column), (C.bool)(hide))
}

func (this *QTreeView) IsHeaderHidden() bool {
	return (bool)(C.QTreeView_IsHeaderHidden(this.h))
}

func (this *QTreeView) SetHeaderHidden(hide bool) {
	C.QTreeView_SetHeaderHidden(this.h, (C.bool)(hide))
}

func (this *QTreeView) IsRowHidden(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_IsRowHidden(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetRowHidden(row int, parent *QModelIndex, hide bool) {
	C.QTreeView_SetRowHidden(this.h, (C.int)(row), parent.cPointer(), (C.bool)(hide))
}

func (this *QTreeView) IsFirstColumnSpanned(row int, parent *QModelIndex) bool {
	return (bool)(C.QTreeView_IsFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer()))
}

func (this *QTreeView) SetFirstColumnSpanned(row int, parent *QModelIndex, span bool) {
	C.QTreeView_SetFirstColumnSpanned(this.h, (C.int)(row), parent.cPointer(), (C.bool)(span))
}

func (this *QTreeView) IsExpanded(index *QModelIndex) bool {
	return (bool)(C.QTreeView_IsExpanded(this.h, index.cPointer()))
}

func (this *QTreeView) SetExpanded(index *QModelIndex, expand bool) {
	C.QTreeView_SetExpanded(this.h, index.cPointer(), (C.bool)(expand))
}

func (this *QTreeView) SetSortingEnabled(enable bool) {
	C.QTreeView_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsSortingEnabled() bool {
	return (bool)(C.QTreeView_IsSortingEnabled(this.h))
}

func (this *QTreeView) SetAnimated(enable bool) {
	C.QTreeView_SetAnimated(this.h, (C.bool)(enable))
}

func (this *QTreeView) IsAnimated() bool {
	return (bool)(C.QTreeView_IsAnimated(this.h))
}

func (this *QTreeView) SetAllColumnsShowFocus(enable bool) {
	C.QTreeView_SetAllColumnsShowFocus(this.h, (C.bool)(enable))
}

func (this *QTreeView) AllColumnsShowFocus() bool {
	return (bool)(C.QTreeView_AllColumnsShowFocus(this.h))
}

func (this *QTreeView) SetWordWrap(on bool) {
	C.QTreeView_SetWordWrap(this.h, (C.bool)(on))
}

func (this *QTreeView) WordWrap() bool {
	return (bool)(C.QTreeView_WordWrap(this.h))
}

func (this *QTreeView) SetTreePosition(logicalIndex int) {
	C.QTreeView_SetTreePosition(this.h, (C.int)(logicalIndex))
}

func (this *QTreeView) TreePosition() int {
	return (int)(C.QTreeView_TreePosition(this.h))
}

func (this *QTreeView) KeyboardSearch(search string) {
	search_ms := C.struct_miqt_string{}
	search_ms.data = C.CString(search)
	search_ms.len = C.size_t(len(search))
	defer C.free(unsafe.Pointer(search_ms.data))
	C.QTreeView_KeyboardSearch(this.h, search_ms)
}

func (this *QTreeView) VisualRect(index *QModelIndex) *QRect {
	_ret := C.QTreeView_VisualRect(this.h, index.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) ScrollTo(index *QModelIndex) {
	C.QTreeView_ScrollTo(this.h, index.cPointer())
}

func (this *QTreeView) IndexAt(p *QPoint) *QModelIndex {
	_ret := C.QTreeView_IndexAt(this.h, p.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexAbove(index *QModelIndex) *QModelIndex {
	_ret := C.QTreeView_IndexAbove(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) IndexBelow(index *QModelIndex) *QModelIndex {
	_ret := C.QTreeView_IndexBelow(this.h, index.cPointer())
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTreeView) DoItemsLayout() {
	C.QTreeView_DoItemsLayout(this.h)
}

func (this *QTreeView) Reset() {
	C.QTreeView_Reset(this.h)
}

func (this *QTreeView) DataChanged(topLeft *QModelIndex, bottomRight *QModelIndex) {
	C.QTreeView_DataChanged(this.h, topLeft.cPointer(), bottomRight.cPointer())
}

func (this *QTreeView) SelectAll() {
	C.QTreeView_SelectAll(this.h)
}

func (this *QTreeView) Expanded(index *QModelIndex) {
	C.QTreeView_Expanded(this.h, index.cPointer())
}
func (this *QTreeView) OnExpanded(slot func(index *QModelIndex)) {
	C.QTreeView_connect_Expanded(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_Expanded
func miqt_exec_callback_QTreeView_Expanded(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QTreeView) Collapsed(index *QModelIndex) {
	C.QTreeView_Collapsed(this.h, index.cPointer())
}
func (this *QTreeView) OnCollapsed(slot func(index *QModelIndex)) {
	C.QTreeView_connect_Collapsed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QTreeView_Collapsed
func miqt_exec_callback_QTreeView_Collapsed(cb C.intptr_t, index *C.QModelIndex) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index *QModelIndex))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQModelIndex(unsafe.Pointer(index))

	gofunc(slotval1)
}

func (this *QTreeView) HideColumn(column int) {
	C.QTreeView_HideColumn(this.h, (C.int)(column))
}

func (this *QTreeView) ShowColumn(column int) {
	C.QTreeView_ShowColumn(this.h, (C.int)(column))
}

func (this *QTreeView) Expand(index *QModelIndex) {
	C.QTreeView_Expand(this.h, index.cPointer())
}

func (this *QTreeView) Collapse(index *QModelIndex) {
	C.QTreeView_Collapse(this.h, index.cPointer())
}

func (this *QTreeView) ResizeColumnToContents(column int) {
	C.QTreeView_ResizeColumnToContents(this.h, (C.int)(column))
}

func (this *QTreeView) SortByColumn(column int) {
	C.QTreeView_SortByColumn(this.h, (C.int)(column))
}

func (this *QTreeView) SortByColumn2(column int, order SortOrder) {
	C.QTreeView_SortByColumn2(this.h, (C.int)(column), (C.int)(order))
}

func (this *QTreeView) ExpandAll() {
	C.QTreeView_ExpandAll(this.h)
}

func (this *QTreeView) ExpandRecursively(index *QModelIndex) {
	C.QTreeView_ExpandRecursively(this.h, index.cPointer())
}

func (this *QTreeView) CollapseAll() {
	C.QTreeView_CollapseAll(this.h)
}

func (this *QTreeView) ExpandToDepth(depth int) {
	C.QTreeView_ExpandToDepth(this.h, (C.int)(depth))
}

func QTreeView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QTreeView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QTreeView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QTreeView) ScrollTo2(index *QModelIndex, hint QAbstractItemView__ScrollHint) {
	C.QTreeView_ScrollTo2(this.h, index.cPointer(), (C.int)(hint))
}

func (this *QTreeView) DataChanged3(topLeft *QModelIndex, bottomRight *QModelIndex, roles []int) {
	roles_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(roles))))
	defer C.free(unsafe.Pointer(roles_CArray))
	for i := range roles {
		roles_CArray[i] = (C.int)(roles[i])
	}
	roles_ma := C.struct_miqt_array{len: C.size_t(len(roles)), data: unsafe.Pointer(roles_CArray)}
	C.QTreeView_DataChanged3(this.h, topLeft.cPointer(), bottomRight.cPointer(), roles_ma)
}

func (this *QTreeView) ExpandRecursively2(index *QModelIndex, depth int) {
	C.QTreeView_ExpandRecursively2(this.h, index.cPointer(), (C.int)(depth))
}

// Delete this object from C++ memory.
func (this *QTreeView) Delete() {
	C.QTreeView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTreeView) GoGC() {
	runtime.SetFinalizer(this, func(this *QTreeView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
