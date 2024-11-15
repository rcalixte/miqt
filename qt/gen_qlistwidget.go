package qt

/*

#include "gen_qlistwidget.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QListWidgetItem__ItemType int

const (
	QListWidgetItem__Type     QListWidgetItem__ItemType = 0
	QListWidgetItem__UserType QListWidgetItem__ItemType = 1000
)

type QListWidgetItem struct {
	h *C.QListWidgetItem
}

func (this *QListWidgetItem) cPointer() *C.QListWidgetItem {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QListWidgetItem) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQListWidgetItem(h *C.QListWidgetItem) *QListWidgetItem {
	if h == nil {
		return nil
	}
	return &QListWidgetItem{h: h}
}

func UnsafeNewQListWidgetItem(h unsafe.Pointer) *QListWidgetItem {
	return newQListWidgetItem((*C.QListWidgetItem)(h))
}

// NewQListWidgetItem constructs a new QListWidgetItem object.
func NewQListWidgetItem() *QListWidgetItem {
	ret := C.QListWidgetItem_new()
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem2 constructs a new QListWidgetItem object.
func NewQListWidgetItem2(text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new2(text_ms)
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem3 constructs a new QListWidgetItem object.
func NewQListWidgetItem3(icon *QIcon, text string) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new3(icon.cPointer(), text_ms)
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem4 constructs a new QListWidgetItem object.
func NewQListWidgetItem4(other *QListWidgetItem) *QListWidgetItem {
	ret := C.QListWidgetItem_new4(other.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem5 constructs a new QListWidgetItem object.
func NewQListWidgetItem5(listview *QListWidget) *QListWidgetItem {
	ret := C.QListWidgetItem_new5(listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem6 constructs a new QListWidgetItem object.
func NewQListWidgetItem6(listview *QListWidget, typeVal int) *QListWidgetItem {
	ret := C.QListWidgetItem_new6(listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem7 constructs a new QListWidgetItem object.
func NewQListWidgetItem7(text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new7(text_ms, listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem8 constructs a new QListWidgetItem object.
func NewQListWidgetItem8(text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new8(text_ms, listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem9 constructs a new QListWidgetItem object.
func NewQListWidgetItem9(icon *QIcon, text string, listview *QListWidget) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new9(icon.cPointer(), text_ms, listview.cPointer())
	return newQListWidgetItem(ret)
}

// NewQListWidgetItem10 constructs a new QListWidgetItem object.
func NewQListWidgetItem10(icon *QIcon, text string, listview *QListWidget, typeVal int) *QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	ret := C.QListWidgetItem_new10(icon.cPointer(), text_ms, listview.cPointer(), (C.int)(typeVal))
	return newQListWidgetItem(ret)
}

func (this *QListWidgetItem) Clone() *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidgetItem_Clone(this.h)))
}

func (this *QListWidgetItem) ListWidget() *QListWidget {
	return UnsafeNewQListWidget(unsafe.Pointer(C.QListWidgetItem_ListWidget(this.h)))
}

func (this *QListWidgetItem) SetSelected(selectVal bool) {
	C.QListWidgetItem_SetSelected(this.h, (C.bool)(selectVal))
}

func (this *QListWidgetItem) IsSelected() bool {
	return (bool)(C.QListWidgetItem_IsSelected(this.h))
}

func (this *QListWidgetItem) SetHidden(hide bool) {
	C.QListWidgetItem_SetHidden(this.h, (C.bool)(hide))
}

func (this *QListWidgetItem) IsHidden() bool {
	return (bool)(C.QListWidgetItem_IsHidden(this.h))
}

func (this *QListWidgetItem) Flags() ItemFlag {
	return (ItemFlag)(C.QListWidgetItem_Flags(this.h))
}

func (this *QListWidgetItem) SetFlags(flags ItemFlag) {
	C.QListWidgetItem_SetFlags(this.h, (C.int)(flags))
}

func (this *QListWidgetItem) Text() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_Text(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QListWidgetItem_SetText(this.h, text_ms)
}

func (this *QListWidgetItem) Icon() *QIcon {
	_ret := C.QListWidgetItem_Icon(this.h)
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetIcon(icon *QIcon) {
	C.QListWidgetItem_SetIcon(this.h, icon.cPointer())
}

func (this *QListWidgetItem) StatusTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_StatusTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetStatusTip(statusTip string) {
	statusTip_ms := C.struct_miqt_string{}
	statusTip_ms.data = C.CString(statusTip)
	statusTip_ms.len = C.size_t(len(statusTip))
	defer C.free(unsafe.Pointer(statusTip_ms.data))
	C.QListWidgetItem_SetStatusTip(this.h, statusTip_ms)
}

func (this *QListWidgetItem) ToolTip() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_ToolTip(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetToolTip(toolTip string) {
	toolTip_ms := C.struct_miqt_string{}
	toolTip_ms.data = C.CString(toolTip)
	toolTip_ms.len = C.size_t(len(toolTip))
	defer C.free(unsafe.Pointer(toolTip_ms.data))
	C.QListWidgetItem_SetToolTip(this.h, toolTip_ms)
}

func (this *QListWidgetItem) WhatsThis() string {
	var _ms C.struct_miqt_string = C.QListWidgetItem_WhatsThis(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidgetItem) SetWhatsThis(whatsThis string) {
	whatsThis_ms := C.struct_miqt_string{}
	whatsThis_ms.data = C.CString(whatsThis)
	whatsThis_ms.len = C.size_t(len(whatsThis))
	defer C.free(unsafe.Pointer(whatsThis_ms.data))
	C.QListWidgetItem_SetWhatsThis(this.h, whatsThis_ms)
}

func (this *QListWidgetItem) Font() *QFont {
	_ret := C.QListWidgetItem_Font(this.h)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetFont(font *QFont) {
	C.QListWidgetItem_SetFont(this.h, font.cPointer())
}

func (this *QListWidgetItem) TextAlignment() int {
	return (int)(C.QListWidgetItem_TextAlignment(this.h))
}

func (this *QListWidgetItem) SetTextAlignment(alignment int) {
	C.QListWidgetItem_SetTextAlignment(this.h, (C.int)(alignment))
}

func (this *QListWidgetItem) BackgroundColor() *QColor {
	_ret := C.QListWidgetItem_BackgroundColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackgroundColor(color *QColor) {
	C.QListWidgetItem_SetBackgroundColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Background() *QBrush {
	_ret := C.QListWidgetItem_Background(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetBackground(brush *QBrush) {
	C.QListWidgetItem_SetBackground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) TextColor() *QColor {
	_ret := C.QListWidgetItem_TextColor(this.h)
	_goptr := newQColor(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetTextColor(color *QColor) {
	C.QListWidgetItem_SetTextColor(this.h, color.cPointer())
}

func (this *QListWidgetItem) Foreground() *QBrush {
	_ret := C.QListWidgetItem_Foreground(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetForeground(brush *QBrush) {
	C.QListWidgetItem_SetForeground(this.h, brush.cPointer())
}

func (this *QListWidgetItem) CheckState() CheckState {
	return (CheckState)(C.QListWidgetItem_CheckState(this.h))
}

func (this *QListWidgetItem) SetCheckState(state CheckState) {
	C.QListWidgetItem_SetCheckState(this.h, (C.int)(state))
}

func (this *QListWidgetItem) SizeHint() *QSize {
	_ret := C.QListWidgetItem_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetSizeHint(size *QSize) {
	C.QListWidgetItem_SetSizeHint(this.h, size.cPointer())
}

func (this *QListWidgetItem) Data(role int) *QVariant {
	_ret := C.QListWidgetItem_Data(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidgetItem) SetData(role int, value *QVariant) {
	C.QListWidgetItem_SetData(this.h, (C.int)(role), value.cPointer())
}

func (this *QListWidgetItem) OperatorLesser(other *QListWidgetItem) bool {
	return (bool)(C.QListWidgetItem_OperatorLesser(this.h, other.cPointer()))
}

func (this *QListWidgetItem) Read(in *QDataStream) {
	C.QListWidgetItem_Read(this.h, in.cPointer())
}

func (this *QListWidgetItem) Write(out *QDataStream) {
	C.QListWidgetItem_Write(this.h, out.cPointer())
}

func (this *QListWidgetItem) OperatorAssign(other *QListWidgetItem) {
	C.QListWidgetItem_OperatorAssign(this.h, other.cPointer())
}

func (this *QListWidgetItem) Type() int {
	return (int)(C.QListWidgetItem_Type(this.h))
}

// Delete this object from C++ memory.
func (this *QListWidgetItem) Delete() {
	C.QListWidgetItem_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidgetItem) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidgetItem) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QListWidget struct {
	h *C.QListWidget
	*QListView
}

func (this *QListWidget) cPointer() *C.QListWidget {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QListWidget) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQListWidget(h *C.QListWidget) *QListWidget {
	if h == nil {
		return nil
	}
	return &QListWidget{h: h, QListView: UnsafeNewQListView(unsafe.Pointer(h))}
}

func UnsafeNewQListWidget(h unsafe.Pointer) *QListWidget {
	return newQListWidget((*C.QListWidget)(h))
}

// NewQListWidget constructs a new QListWidget object.
func NewQListWidget(parent *QWidget) *QListWidget {
	ret := C.QListWidget_new(parent.cPointer())
	return newQListWidget(ret)
}

// NewQListWidget2 constructs a new QListWidget object.
func NewQListWidget2() *QListWidget {
	ret := C.QListWidget_new2()
	return newQListWidget(ret)
}

func (this *QListWidget) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QListWidget_MetaObject(this.h)))
}

func (this *QListWidget) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QListWidget_Metacast(this.h, param1_Cstring))
}

func QListWidget_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SetSelectionModel(selectionModel *QItemSelectionModel) {
	C.QListWidget_SetSelectionModel(this.h, selectionModel.cPointer())
}

func (this *QListWidget) Item(row int) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_Item(this.h, (C.int)(row))))
}

func (this *QListWidget) Row(item *QListWidgetItem) int {
	return (int)(C.QListWidget_Row(this.h, item.cPointer()))
}

func (this *QListWidget) InsertItem(row int, item *QListWidgetItem) {
	C.QListWidget_InsertItem(this.h, (C.int)(row), item.cPointer())
}

func (this *QListWidget) InsertItem2(row int, label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_InsertItem2(this.h, (C.int)(row), label_ms)
}

func (this *QListWidget) InsertItems(row int, labels []string) {
	labels_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := C.struct_miqt_string{}
		labels_i_ms.data = C.CString(labels[i])
		labels_i_ms.len = C.size_t(len(labels[i]))
		defer C.free(unsafe.Pointer(labels_i_ms.data))
		labels_CArray[i] = labels_i_ms
	}
	labels_ma := C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	C.QListWidget_InsertItems(this.h, (C.int)(row), labels_ma)
}

func (this *QListWidget) AddItem(label string) {
	label_ms := C.struct_miqt_string{}
	label_ms.data = C.CString(label)
	label_ms.len = C.size_t(len(label))
	defer C.free(unsafe.Pointer(label_ms.data))
	C.QListWidget_AddItem(this.h, label_ms)
}

func (this *QListWidget) AddItemWithItem(item *QListWidgetItem) {
	C.QListWidget_AddItemWithItem(this.h, item.cPointer())
}

func (this *QListWidget) AddItems(labels []string) {
	labels_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(labels))))
	defer C.free(unsafe.Pointer(labels_CArray))
	for i := range labels {
		labels_i_ms := C.struct_miqt_string{}
		labels_i_ms.data = C.CString(labels[i])
		labels_i_ms.len = C.size_t(len(labels[i]))
		defer C.free(unsafe.Pointer(labels_i_ms.data))
		labels_CArray[i] = labels_i_ms
	}
	labels_ma := C.struct_miqt_array{len: C.size_t(len(labels)), data: unsafe.Pointer(labels_CArray)}
	C.QListWidget_AddItems(this.h, labels_ma)
}

func (this *QListWidget) TakeItem(row int) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_TakeItem(this.h, (C.int)(row))))
}

func (this *QListWidget) Count() int {
	return (int)(C.QListWidget_Count(this.h))
}

func (this *QListWidget) CurrentItem() *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_CurrentItem(this.h)))
}

func (this *QListWidget) SetCurrentItem(item *QListWidgetItem) {
	C.QListWidget_SetCurrentItem(this.h, item.cPointer())
}

func (this *QListWidget) SetCurrentItem2(item *QListWidgetItem, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_SetCurrentItem2(this.h, item.cPointer(), (C.int)(command))
}

func (this *QListWidget) CurrentRow() int {
	return (int)(C.QListWidget_CurrentRow(this.h))
}

func (this *QListWidget) SetCurrentRow(row int) {
	C.QListWidget_SetCurrentRow(this.h, (C.int)(row))
}

func (this *QListWidget) SetCurrentRow2(row int, command QItemSelectionModel__SelectionFlag) {
	C.QListWidget_SetCurrentRow2(this.h, (C.int)(row), (C.int)(command))
}

func (this *QListWidget) ItemAt(p *QPoint) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_ItemAt(this.h, p.cPointer())))
}

func (this *QListWidget) ItemAt2(x int, y int) *QListWidgetItem {
	return UnsafeNewQListWidgetItem(unsafe.Pointer(C.QListWidget_ItemAt2(this.h, (C.int)(x), (C.int)(y))))
}

func (this *QListWidget) VisualItemRect(item *QListWidgetItem) *QRect {
	_ret := C.QListWidget_VisualItemRect(this.h, item.cPointer())
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QListWidget) SortItems() {
	C.QListWidget_SortItems(this.h)
}

func (this *QListWidget) SetSortingEnabled(enable bool) {
	C.QListWidget_SetSortingEnabled(this.h, (C.bool)(enable))
}

func (this *QListWidget) IsSortingEnabled() bool {
	return (bool)(C.QListWidget_IsSortingEnabled(this.h))
}

func (this *QListWidget) EditItem(item *QListWidgetItem) {
	C.QListWidget_EditItem(this.h, item.cPointer())
}

func (this *QListWidget) OpenPersistentEditor(item *QListWidgetItem) {
	C.QListWidget_OpenPersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) ClosePersistentEditor(item *QListWidgetItem) {
	C.QListWidget_ClosePersistentEditor(this.h, item.cPointer())
}

func (this *QListWidget) IsPersistentEditorOpen(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_IsPersistentEditorOpen(this.h, item.cPointer()))
}

func (this *QListWidget) ItemWidget(item *QListWidgetItem) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QListWidget_ItemWidget(this.h, item.cPointer())))
}

func (this *QListWidget) SetItemWidget(item *QListWidgetItem, widget *QWidget) {
	C.QListWidget_SetItemWidget(this.h, item.cPointer(), widget.cPointer())
}

func (this *QListWidget) RemoveItemWidget(item *QListWidgetItem) {
	C.QListWidget_RemoveItemWidget(this.h, item.cPointer())
}

func (this *QListWidget) IsItemSelected(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_IsItemSelected(this.h, item.cPointer()))
}

func (this *QListWidget) SetItemSelected(item *QListWidgetItem, selectVal bool) {
	C.QListWidget_SetItemSelected(this.h, item.cPointer(), (C.bool)(selectVal))
}

func (this *QListWidget) SelectedItems() []*QListWidgetItem {
	var _ma C.struct_miqt_array = C.QListWidget_SelectedItems(this.h)
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQListWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QListWidget) FindItems(text string, flags MatchFlag) []*QListWidgetItem {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	var _ma C.struct_miqt_array = C.QListWidget_FindItems(this.h, text_ms, (C.int)(flags))
	_ret := make([]*QListWidgetItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QListWidgetItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQListWidgetItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QListWidget) IsItemHidden(item *QListWidgetItem) bool {
	return (bool)(C.QListWidget_IsItemHidden(this.h, item.cPointer()))
}

func (this *QListWidget) SetItemHidden(item *QListWidgetItem, hide bool) {
	C.QListWidget_SetItemHidden(this.h, item.cPointer(), (C.bool)(hide))
}

func (this *QListWidget) DropEvent(event *QDropEvent) {
	C.QListWidget_DropEvent(this.h, event.cPointer())
}

func (this *QListWidget) ScrollToItem(item *QListWidgetItem) {
	C.QListWidget_ScrollToItem(this.h, item.cPointer())
}

func (this *QListWidget) Clear() {
	C.QListWidget_Clear(this.h)
}

func (this *QListWidget) ItemPressed(item *QListWidgetItem) {
	C.QListWidget_ItemPressed(this.h, item.cPointer())
}
func (this *QListWidget) OnItemPressed(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemPressed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemPressed
func miqt_exec_callback_QListWidget_ItemPressed(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) ItemClicked(item *QListWidgetItem) {
	C.QListWidget_ItemClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemClicked
func miqt_exec_callback_QListWidget_ItemClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) ItemDoubleClicked(item *QListWidgetItem) {
	C.QListWidget_ItemDoubleClicked(this.h, item.cPointer())
}
func (this *QListWidget) OnItemDoubleClicked(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemDoubleClicked(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemDoubleClicked
func miqt_exec_callback_QListWidget_ItemDoubleClicked(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) ItemActivated(item *QListWidgetItem) {
	C.QListWidget_ItemActivated(this.h, item.cPointer())
}
func (this *QListWidget) OnItemActivated(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemActivated
func miqt_exec_callback_QListWidget_ItemActivated(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) ItemEntered(item *QListWidgetItem) {
	C.QListWidget_ItemEntered(this.h, item.cPointer())
}
func (this *QListWidget) OnItemEntered(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemEntered(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemEntered
func miqt_exec_callback_QListWidget_ItemEntered(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) ItemChanged(item *QListWidgetItem) {
	C.QListWidget_ItemChanged(this.h, item.cPointer())
}
func (this *QListWidget) OnItemChanged(slot func(item *QListWidgetItem)) {
	C.QListWidget_connect_ItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemChanged
func miqt_exec_callback_QListWidget_ItemChanged(cb C.intptr_t, item *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(item *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(item))

	gofunc(slotval1)
}

func (this *QListWidget) CurrentItemChanged(current *QListWidgetItem, previous *QListWidgetItem) {
	C.QListWidget_CurrentItemChanged(this.h, current.cPointer(), previous.cPointer())
}
func (this *QListWidget) OnCurrentItemChanged(slot func(current *QListWidgetItem, previous *QListWidgetItem)) {
	C.QListWidget_connect_CurrentItemChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentItemChanged
func miqt_exec_callback_QListWidget_CurrentItemChanged(cb C.intptr_t, current *C.QListWidgetItem, previous *C.QListWidgetItem) {
	gofunc, ok := cgo.Handle(cb).Value().(func(current *QListWidgetItem, previous *QListWidgetItem))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQListWidgetItem(unsafe.Pointer(current))
	slotval2 := UnsafeNewQListWidgetItem(unsafe.Pointer(previous))

	gofunc(slotval1, slotval2)
}

func (this *QListWidget) CurrentTextChanged(currentText string) {
	currentText_ms := C.struct_miqt_string{}
	currentText_ms.data = C.CString(currentText)
	currentText_ms.len = C.size_t(len(currentText))
	defer C.free(unsafe.Pointer(currentText_ms.data))
	C.QListWidget_CurrentTextChanged(this.h, currentText_ms)
}
func (this *QListWidget) OnCurrentTextChanged(slot func(currentText string)) {
	C.QListWidget_connect_CurrentTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentTextChanged
func miqt_exec_callback_QListWidget_CurrentTextChanged(cb C.intptr_t, currentText C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentText string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var currentText_ms C.struct_miqt_string = currentText
	currentText_ret := C.GoStringN(currentText_ms.data, C.int(int64(currentText_ms.len)))
	C.free(unsafe.Pointer(currentText_ms.data))
	slotval1 := currentText_ret

	gofunc(slotval1)
}

func (this *QListWidget) CurrentRowChanged(currentRow int) {
	C.QListWidget_CurrentRowChanged(this.h, (C.int)(currentRow))
}
func (this *QListWidget) OnCurrentRowChanged(slot func(currentRow int)) {
	C.QListWidget_connect_CurrentRowChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_CurrentRowChanged
func miqt_exec_callback_QListWidget_CurrentRowChanged(cb C.intptr_t, currentRow C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentRow int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentRow)

	gofunc(slotval1)
}

func (this *QListWidget) ItemSelectionChanged() {
	C.QListWidget_ItemSelectionChanged(this.h)
}
func (this *QListWidget) OnItemSelectionChanged(slot func()) {
	C.QListWidget_connect_ItemSelectionChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QListWidget_ItemSelectionChanged
func miqt_exec_callback_QListWidget_ItemSelectionChanged(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QListWidget_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QListWidget_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QListWidget_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QListWidget) SortItems1(order SortOrder) {
	C.QListWidget_SortItems1(this.h, (C.int)(order))
}

func (this *QListWidget) ScrollToItem2(item *QListWidgetItem, hint QAbstractItemView__ScrollHint) {
	C.QListWidget_ScrollToItem2(this.h, item.cPointer(), (C.int)(hint))
}

// Delete this object from C++ memory.
func (this *QListWidget) Delete() {
	C.QListWidget_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QListWidget) GoGC() {
	runtime.SetFinalizer(this, func(this *QListWidget) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
