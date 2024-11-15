package qt

/*

#include "gen_qcombobox.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QComboBox__InsertPolicy int

const (
	QComboBox__NoInsert             QComboBox__InsertPolicy = 0
	QComboBox__InsertAtTop          QComboBox__InsertPolicy = 1
	QComboBox__InsertAtCurrent      QComboBox__InsertPolicy = 2
	QComboBox__InsertAtBottom       QComboBox__InsertPolicy = 3
	QComboBox__InsertAfterCurrent   QComboBox__InsertPolicy = 4
	QComboBox__InsertBeforeCurrent  QComboBox__InsertPolicy = 5
	QComboBox__InsertAlphabetically QComboBox__InsertPolicy = 6
)

type QComboBox__SizeAdjustPolicy int

const (
	QComboBox__AdjustToContents                      QComboBox__SizeAdjustPolicy = 0
	QComboBox__AdjustToContentsOnFirstShow           QComboBox__SizeAdjustPolicy = 1
	QComboBox__AdjustToMinimumContentsLength         QComboBox__SizeAdjustPolicy = 2
	QComboBox__AdjustToMinimumContentsLengthWithIcon QComboBox__SizeAdjustPolicy = 3
)

type QComboBox struct {
	h *C.QComboBox
	*QWidget
}

func (this *QComboBox) cPointer() *C.QComboBox {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QComboBox) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQComboBox(h *C.QComboBox) *QComboBox {
	if h == nil {
		return nil
	}
	return &QComboBox{h: h, QWidget: UnsafeNewQWidget(unsafe.Pointer(h))}
}

func UnsafeNewQComboBox(h unsafe.Pointer) *QComboBox {
	return newQComboBox((*C.QComboBox)(h))
}

// NewQComboBox constructs a new QComboBox object.
func NewQComboBox(parent *QWidget) *QComboBox {
	ret := C.QComboBox_new(parent.cPointer())
	return newQComboBox(ret)
}

// NewQComboBox2 constructs a new QComboBox object.
func NewQComboBox2() *QComboBox {
	ret := C.QComboBox_new2()
	return newQComboBox(ret)
}

func (this *QComboBox) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QComboBox_MetaObject(this.h)))
}

func (this *QComboBox) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QComboBox_Metacast(this.h, param1_Cstring))
}

func QComboBox_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QComboBox_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) MaxVisibleItems() int {
	return (int)(C.QComboBox_MaxVisibleItems(this.h))
}

func (this *QComboBox) SetMaxVisibleItems(maxItems int) {
	C.QComboBox_SetMaxVisibleItems(this.h, (C.int)(maxItems))
}

func (this *QComboBox) Count() int {
	return (int)(C.QComboBox_Count(this.h))
}

func (this *QComboBox) SetMaxCount(max int) {
	C.QComboBox_SetMaxCount(this.h, (C.int)(max))
}

func (this *QComboBox) MaxCount() int {
	return (int)(C.QComboBox_MaxCount(this.h))
}

func (this *QComboBox) AutoCompletion() bool {
	return (bool)(C.QComboBox_AutoCompletion(this.h))
}

func (this *QComboBox) SetAutoCompletion(enable bool) {
	C.QComboBox_SetAutoCompletion(this.h, (C.bool)(enable))
}

func (this *QComboBox) AutoCompletionCaseSensitivity() CaseSensitivity {
	return (CaseSensitivity)(C.QComboBox_AutoCompletionCaseSensitivity(this.h))
}

func (this *QComboBox) SetAutoCompletionCaseSensitivity(sensitivity CaseSensitivity) {
	C.QComboBox_SetAutoCompletionCaseSensitivity(this.h, (C.int)(sensitivity))
}

func (this *QComboBox) DuplicatesEnabled() bool {
	return (bool)(C.QComboBox_DuplicatesEnabled(this.h))
}

func (this *QComboBox) SetDuplicatesEnabled(enable bool) {
	C.QComboBox_SetDuplicatesEnabled(this.h, (C.bool)(enable))
}

func (this *QComboBox) SetFrame(frame bool) {
	C.QComboBox_SetFrame(this.h, (C.bool)(frame))
}

func (this *QComboBox) HasFrame() bool {
	return (bool)(C.QComboBox_HasFrame(this.h))
}

func (this *QComboBox) FindText(text string) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QComboBox_FindText(this.h, text_ms))
}

func (this *QComboBox) FindData(data *QVariant) int {
	return (int)(C.QComboBox_FindData(this.h, data.cPointer()))
}

func (this *QComboBox) InsertPolicy() QComboBox__InsertPolicy {
	return (QComboBox__InsertPolicy)(C.QComboBox_InsertPolicy(this.h))
}

func (this *QComboBox) SetInsertPolicy(policy QComboBox__InsertPolicy) {
	C.QComboBox_SetInsertPolicy(this.h, (C.int)(policy))
}

func (this *QComboBox) SizeAdjustPolicy() QComboBox__SizeAdjustPolicy {
	return (QComboBox__SizeAdjustPolicy)(C.QComboBox_SizeAdjustPolicy(this.h))
}

func (this *QComboBox) SetSizeAdjustPolicy(policy QComboBox__SizeAdjustPolicy) {
	C.QComboBox_SetSizeAdjustPolicy(this.h, (C.int)(policy))
}

func (this *QComboBox) MinimumContentsLength() int {
	return (int)(C.QComboBox_MinimumContentsLength(this.h))
}

func (this *QComboBox) SetMinimumContentsLength(characters int) {
	C.QComboBox_SetMinimumContentsLength(this.h, (C.int)(characters))
}

func (this *QComboBox) IconSize() *QSize {
	_ret := C.QComboBox_IconSize(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) SetIconSize(size *QSize) {
	C.QComboBox_SetIconSize(this.h, size.cPointer())
}

func (this *QComboBox) SetPlaceholderText(placeholderText string) {
	placeholderText_ms := C.struct_miqt_string{}
	placeholderText_ms.data = C.CString(placeholderText)
	placeholderText_ms.len = C.size_t(len(placeholderText))
	defer C.free(unsafe.Pointer(placeholderText_ms.data))
	C.QComboBox_SetPlaceholderText(this.h, placeholderText_ms)
}

func (this *QComboBox) PlaceholderText() string {
	var _ms C.struct_miqt_string = C.QComboBox_PlaceholderText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) IsEditable() bool {
	return (bool)(C.QComboBox_IsEditable(this.h))
}

func (this *QComboBox) SetEditable(editable bool) {
	C.QComboBox_SetEditable(this.h, (C.bool)(editable))
}

func (this *QComboBox) SetLineEdit(edit *QLineEdit) {
	C.QComboBox_SetLineEdit(this.h, edit.cPointer())
}

func (this *QComboBox) LineEdit() *QLineEdit {
	return UnsafeNewQLineEdit(unsafe.Pointer(C.QComboBox_LineEdit(this.h)))
}

func (this *QComboBox) SetValidator(v *QValidator) {
	C.QComboBox_SetValidator(this.h, v.cPointer())
}

func (this *QComboBox) Validator() *QValidator {
	return UnsafeNewQValidator(unsafe.Pointer(C.QComboBox_Validator(this.h)))
}

func (this *QComboBox) SetCompleter(c *QCompleter) {
	C.QComboBox_SetCompleter(this.h, c.cPointer())
}

func (this *QComboBox) Completer() *QCompleter {
	return UnsafeNewQCompleter(unsafe.Pointer(C.QComboBox_Completer(this.h)))
}

func (this *QComboBox) ItemDelegate() *QAbstractItemDelegate {
	return UnsafeNewQAbstractItemDelegate(unsafe.Pointer(C.QComboBox_ItemDelegate(this.h)))
}

func (this *QComboBox) SetItemDelegate(delegate *QAbstractItemDelegate) {
	C.QComboBox_SetItemDelegate(this.h, delegate.cPointer())
}

func (this *QComboBox) Model() *QAbstractItemModel {
	return UnsafeNewQAbstractItemModel(unsafe.Pointer(C.QComboBox_Model(this.h)))
}

func (this *QComboBox) SetModel(model *QAbstractItemModel) {
	C.QComboBox_SetModel(this.h, model.cPointer())
}

func (this *QComboBox) RootModelIndex() *QModelIndex {
	_ret := C.QComboBox_RootModelIndex(this.h)
	_goptr := newQModelIndex(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) SetRootModelIndex(index *QModelIndex) {
	C.QComboBox_SetRootModelIndex(this.h, index.cPointer())
}

func (this *QComboBox) ModelColumn() int {
	return (int)(C.QComboBox_ModelColumn(this.h))
}

func (this *QComboBox) SetModelColumn(visibleColumn int) {
	C.QComboBox_SetModelColumn(this.h, (C.int)(visibleColumn))
}

func (this *QComboBox) CurrentIndex() int {
	return (int)(C.QComboBox_CurrentIndex(this.h))
}

func (this *QComboBox) CurrentText() string {
	var _ms C.struct_miqt_string = C.QComboBox_CurrentText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) CurrentData() *QVariant {
	_ret := C.QComboBox_CurrentData(this.h)
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemText(index int) string {
	var _ms C.struct_miqt_string = C.QComboBox_ItemText(this.h, (C.int)(index))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) ItemIcon(index int) *QIcon {
	_ret := C.QComboBox_ItemIcon(this.h, (C.int)(index))
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemData(index int) *QVariant {
	_ret := C.QComboBox_ItemData(this.h, (C.int)(index))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) AddItem(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem(this.h, text_ms)
}

func (this *QComboBox) AddItem2(icon *QIcon, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem2(this.h, icon.cPointer(), text_ms)
}

func (this *QComboBox) AddItems(texts []string) {
	texts_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	for i := range texts {
		texts_i_ms := C.struct_miqt_string{}
		texts_i_ms.data = C.CString(texts[i])
		texts_i_ms.len = C.size_t(len(texts[i]))
		defer C.free(unsafe.Pointer(texts_i_ms.data))
		texts_CArray[i] = texts_i_ms
	}
	texts_ma := C.struct_miqt_array{len: C.size_t(len(texts)), data: unsafe.Pointer(texts_CArray)}
	C.QComboBox_AddItems(this.h, texts_ma)
}

func (this *QComboBox) InsertItem(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem(this.h, (C.int)(index), text_ms)
}

func (this *QComboBox) InsertItem2(index int, icon *QIcon, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem2(this.h, (C.int)(index), icon.cPointer(), text_ms)
}

func (this *QComboBox) InsertItems(index int, texts []string) {
	texts_CArray := (*[0xffff]C.struct_miqt_string)(C.malloc(C.size_t(int(unsafe.Sizeof(C.struct_miqt_string{})) * len(texts))))
	defer C.free(unsafe.Pointer(texts_CArray))
	for i := range texts {
		texts_i_ms := C.struct_miqt_string{}
		texts_i_ms.data = C.CString(texts[i])
		texts_i_ms.len = C.size_t(len(texts[i]))
		defer C.free(unsafe.Pointer(texts_i_ms.data))
		texts_CArray[i] = texts_i_ms
	}
	texts_ma := C.struct_miqt_array{len: C.size_t(len(texts)), data: unsafe.Pointer(texts_CArray)}
	C.QComboBox_InsertItems(this.h, (C.int)(index), texts_ma)
}

func (this *QComboBox) InsertSeparator(index int) {
	C.QComboBox_InsertSeparator(this.h, (C.int)(index))
}

func (this *QComboBox) RemoveItem(index int) {
	C.QComboBox_RemoveItem(this.h, (C.int)(index))
}

func (this *QComboBox) SetItemText(index int, text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetItemText(this.h, (C.int)(index), text_ms)
}

func (this *QComboBox) SetItemIcon(index int, icon *QIcon) {
	C.QComboBox_SetItemIcon(this.h, (C.int)(index), icon.cPointer())
}

func (this *QComboBox) SetItemData(index int, value *QVariant) {
	C.QComboBox_SetItemData(this.h, (C.int)(index), value.cPointer())
}

func (this *QComboBox) View() *QAbstractItemView {
	return UnsafeNewQAbstractItemView(unsafe.Pointer(C.QComboBox_View(this.h)))
}

func (this *QComboBox) SetView(itemView *QAbstractItemView) {
	C.QComboBox_SetView(this.h, itemView.cPointer())
}

func (this *QComboBox) SizeHint() *QSize {
	_ret := C.QComboBox_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) MinimumSizeHint() *QSize {
	_ret := C.QComboBox_MinimumSizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ShowPopup() {
	C.QComboBox_ShowPopup(this.h)
}

func (this *QComboBox) HidePopup() {
	C.QComboBox_HidePopup(this.h)
}

func (this *QComboBox) Event(event *QEvent) bool {
	return (bool)(C.QComboBox_Event(this.h, event.cPointer()))
}

func (this *QComboBox) InputMethodQuery(param1 InputMethodQuery) *QVariant {
	_ret := C.QComboBox_InputMethodQuery(this.h, (C.int)(param1))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) InputMethodQuery2(query InputMethodQuery, argument *QVariant) *QVariant {
	_ret := C.QComboBox_InputMethodQuery2(this.h, (C.int)(query), argument.cPointer())
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) Clear() {
	C.QComboBox_Clear(this.h)
}

func (this *QComboBox) ClearEditText() {
	C.QComboBox_ClearEditText(this.h)
}

func (this *QComboBox) SetEditText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetEditText(this.h, text_ms)
}

func (this *QComboBox) SetCurrentIndex(index int) {
	C.QComboBox_SetCurrentIndex(this.h, (C.int)(index))
}

func (this *QComboBox) SetCurrentText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_SetCurrentText(this.h, text_ms)
}

func (this *QComboBox) EditTextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_EditTextChanged(this.h, param1_ms)
}
func (this *QComboBox) OnEditTextChanged(slot func(param1 string)) {
	C.QComboBox_connect_EditTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_EditTextChanged
func miqt_exec_callback_QComboBox_EditTextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) Activated(index int) {
	C.QComboBox_Activated(this.h, (C.int)(index))
}
func (this *QComboBox) OnActivated(slot func(index int)) {
	C.QComboBox_connect_Activated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_Activated
func miqt_exec_callback_QComboBox_Activated(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) TextActivated(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_TextActivated(this.h, param1_ms)
}
func (this *QComboBox) OnTextActivated(slot func(param1 string)) {
	C.QComboBox_connect_TextActivated(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_TextActivated
func miqt_exec_callback_QComboBox_TextActivated(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) Highlighted(index int) {
	C.QComboBox_Highlighted(this.h, (C.int)(index))
}
func (this *QComboBox) OnHighlighted(slot func(index int)) {
	C.QComboBox_connect_Highlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_Highlighted
func miqt_exec_callback_QComboBox_Highlighted(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) TextHighlighted(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_TextHighlighted(this.h, param1_ms)
}
func (this *QComboBox) OnTextHighlighted(slot func(param1 string)) {
	C.QComboBox_connect_TextHighlighted(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_TextHighlighted
func miqt_exec_callback_QComboBox_TextHighlighted(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) CurrentIndexChanged(index int) {
	C.QComboBox_CurrentIndexChanged(this.h, (C.int)(index))
}
func (this *QComboBox) OnCurrentIndexChanged(slot func(index int)) {
	C.QComboBox_connect_CurrentIndexChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_CurrentIndexChanged
func miqt_exec_callback_QComboBox_CurrentIndexChanged(cb C.intptr_t, index C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(index int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(index)

	gofunc(slotval1)
}

func (this *QComboBox) CurrentIndexChangedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_CurrentIndexChangedWithQString(this.h, param1_ms)
}
func (this *QComboBox) OnCurrentIndexChangedWithQString(slot func(param1 string)) {
	C.QComboBox_connect_CurrentIndexChangedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_CurrentIndexChangedWithQString
func miqt_exec_callback_QComboBox_CurrentIndexChangedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) CurrentTextChanged(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_CurrentTextChanged(this.h, param1_ms)
}
func (this *QComboBox) OnCurrentTextChanged(slot func(param1 string)) {
	C.QComboBox_connect_CurrentTextChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_CurrentTextChanged
func miqt_exec_callback_QComboBox_CurrentTextChanged(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) ActivatedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_ActivatedWithQString(this.h, param1_ms)
}
func (this *QComboBox) OnActivatedWithQString(slot func(param1 string)) {
	C.QComboBox_connect_ActivatedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_ActivatedWithQString
func miqt_exec_callback_QComboBox_ActivatedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func (this *QComboBox) HighlightedWithQString(param1 string) {
	param1_ms := C.struct_miqt_string{}
	param1_ms.data = C.CString(param1)
	param1_ms.len = C.size_t(len(param1))
	defer C.free(unsafe.Pointer(param1_ms.data))
	C.QComboBox_HighlightedWithQString(this.h, param1_ms)
}
func (this *QComboBox) OnHighlightedWithQString(slot func(param1 string)) {
	C.QComboBox_connect_HighlightedWithQString(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QComboBox_HighlightedWithQString
func miqt_exec_callback_QComboBox_HighlightedWithQString(cb C.intptr_t, param1 C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(param1 string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	var param1_ms C.struct_miqt_string = param1
	param1_ret := C.GoStringN(param1_ms.data, C.int(int64(param1_ms.len)))
	C.free(unsafe.Pointer(param1_ms.data))
	slotval1 := param1_ret

	gofunc(slotval1)
}

func QComboBox_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QComboBox_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QComboBox_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QComboBox_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QComboBox_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QComboBox) FindText2(text string, flags MatchFlag) int {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	return (int)(C.QComboBox_FindText2(this.h, text_ms, (C.int)(flags)))
}

func (this *QComboBox) FindData2(data *QVariant, role int) int {
	return (int)(C.QComboBox_FindData2(this.h, data.cPointer(), (C.int)(role)))
}

func (this *QComboBox) FindData3(data *QVariant, role int, flags MatchFlag) int {
	return (int)(C.QComboBox_FindData3(this.h, data.cPointer(), (C.int)(role), (C.int)(flags)))
}

func (this *QComboBox) CurrentData1(role int) *QVariant {
	_ret := C.QComboBox_CurrentData1(this.h, (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) ItemData2(index int, role int) *QVariant {
	_ret := C.QComboBox_ItemData2(this.h, (C.int)(index), (C.int)(role))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QComboBox) AddItem22(text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem22(this.h, text_ms, userData.cPointer())
}

func (this *QComboBox) AddItem3(icon *QIcon, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_AddItem3(this.h, icon.cPointer(), text_ms, userData.cPointer())
}

func (this *QComboBox) InsertItem3(index int, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem3(this.h, (C.int)(index), text_ms, userData.cPointer())
}

func (this *QComboBox) InsertItem4(index int, icon *QIcon, text string, userData *QVariant) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QComboBox_InsertItem4(this.h, (C.int)(index), icon.cPointer(), text_ms, userData.cPointer())
}

func (this *QComboBox) SetItemData3(index int, value *QVariant, role int) {
	C.QComboBox_SetItemData3(this.h, (C.int)(index), value.cPointer(), (C.int)(role))
}

// Delete this object from C++ memory.
func (this *QComboBox) Delete() {
	C.QComboBox_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QComboBox) GoGC() {
	runtime.SetFinalizer(this, func(this *QComboBox) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
