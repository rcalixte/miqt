package qt6

/*

#include "gen_qprogressdialog.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QProgressDialog struct {
	h *C.QProgressDialog
	*QDialog
}

func (this *QProgressDialog) cPointer() *C.QProgressDialog {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QProgressDialog) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQProgressDialog(h *C.QProgressDialog) *QProgressDialog {
	if h == nil {
		return nil
	}
	return &QProgressDialog{h: h, QDialog: UnsafeNewQDialog(unsafe.Pointer(h))}
}

func UnsafeNewQProgressDialog(h unsafe.Pointer) *QProgressDialog {
	return newQProgressDialog((*C.QProgressDialog)(h))
}

// NewQProgressDialog constructs a new QProgressDialog object.
func NewQProgressDialog(parent *QWidget) *QProgressDialog {
	ret := C.QProgressDialog_new(parent.cPointer())
	return newQProgressDialog(ret)
}

// NewQProgressDialog2 constructs a new QProgressDialog object.
func NewQProgressDialog2() *QProgressDialog {
	ret := C.QProgressDialog_new2()
	return newQProgressDialog(ret)
}

// NewQProgressDialog3 constructs a new QProgressDialog object.
func NewQProgressDialog3(labelText string, cancelButtonText string, minimum int, maximum int) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))
	ret := C.QProgressDialog_new3(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum))
	return newQProgressDialog(ret)
}

// NewQProgressDialog4 constructs a new QProgressDialog object.
func NewQProgressDialog4(parent *QWidget, flags WindowType) *QProgressDialog {
	ret := C.QProgressDialog_new4(parent.cPointer(), (C.int)(flags))
	return newQProgressDialog(ret)
}

// NewQProgressDialog5 constructs a new QProgressDialog object.
func NewQProgressDialog5(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))
	ret := C.QProgressDialog_new5(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum), parent.cPointer())
	return newQProgressDialog(ret)
}

// NewQProgressDialog6 constructs a new QProgressDialog object.
func NewQProgressDialog6(labelText string, cancelButtonText string, minimum int, maximum int, parent *QWidget, flags WindowType) *QProgressDialog {
	labelText_ms := C.struct_miqt_string{}
	labelText_ms.data = C.CString(labelText)
	labelText_ms.len = C.size_t(len(labelText))
	defer C.free(unsafe.Pointer(labelText_ms.data))
	cancelButtonText_ms := C.struct_miqt_string{}
	cancelButtonText_ms.data = C.CString(cancelButtonText)
	cancelButtonText_ms.len = C.size_t(len(cancelButtonText))
	defer C.free(unsafe.Pointer(cancelButtonText_ms.data))
	ret := C.QProgressDialog_new6(labelText_ms, cancelButtonText_ms, (C.int)(minimum), (C.int)(maximum), parent.cPointer(), (C.int)(flags))
	return newQProgressDialog(ret)
}

func (this *QProgressDialog) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QProgressDialog_MetaObject(this.h)))
}

func (this *QProgressDialog) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QProgressDialog_Metacast(this.h, param1_Cstring))
}

func QProgressDialog_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) SetLabel(label *QLabel) {
	C.QProgressDialog_SetLabel(this.h, label.cPointer())
}

func (this *QProgressDialog) SetCancelButton(button *QPushButton) {
	C.QProgressDialog_SetCancelButton(this.h, button.cPointer())
}

func (this *QProgressDialog) SetBar(bar *QProgressBar) {
	C.QProgressDialog_SetBar(this.h, bar.cPointer())
}

func (this *QProgressDialog) WasCanceled() bool {
	return (bool)(C.QProgressDialog_WasCanceled(this.h))
}

func (this *QProgressDialog) Minimum() int {
	return (int)(C.QProgressDialog_Minimum(this.h))
}

func (this *QProgressDialog) Maximum() int {
	return (int)(C.QProgressDialog_Maximum(this.h))
}

func (this *QProgressDialog) Value() int {
	return (int)(C.QProgressDialog_Value(this.h))
}

func (this *QProgressDialog) SizeHint() *QSize {
	_ret := C.QProgressDialog_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QProgressDialog) LabelText() string {
	var _ms C.struct_miqt_string = C.QProgressDialog_LabelText(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QProgressDialog) MinimumDuration() int {
	return (int)(C.QProgressDialog_MinimumDuration(this.h))
}

func (this *QProgressDialog) SetAutoReset(reset bool) {
	C.QProgressDialog_SetAutoReset(this.h, (C.bool)(reset))
}

func (this *QProgressDialog) AutoReset() bool {
	return (bool)(C.QProgressDialog_AutoReset(this.h))
}

func (this *QProgressDialog) SetAutoClose(close bool) {
	C.QProgressDialog_SetAutoClose(this.h, (C.bool)(close))
}

func (this *QProgressDialog) AutoClose() bool {
	return (bool)(C.QProgressDialog_AutoClose(this.h))
}

func (this *QProgressDialog) Cancel() {
	C.QProgressDialog_Cancel(this.h)
}

func (this *QProgressDialog) Reset() {
	C.QProgressDialog_Reset(this.h)
}

func (this *QProgressDialog) SetMaximum(maximum int) {
	C.QProgressDialog_SetMaximum(this.h, (C.int)(maximum))
}

func (this *QProgressDialog) SetMinimum(minimum int) {
	C.QProgressDialog_SetMinimum(this.h, (C.int)(minimum))
}

func (this *QProgressDialog) SetRange(minimum int, maximum int) {
	C.QProgressDialog_SetRange(this.h, (C.int)(minimum), (C.int)(maximum))
}

func (this *QProgressDialog) SetValue(progress int) {
	C.QProgressDialog_SetValue(this.h, (C.int)(progress))
}

func (this *QProgressDialog) SetLabelText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_SetLabelText(this.h, text_ms)
}

func (this *QProgressDialog) SetCancelButtonText(text string) {
	text_ms := C.struct_miqt_string{}
	text_ms.data = C.CString(text)
	text_ms.len = C.size_t(len(text))
	defer C.free(unsafe.Pointer(text_ms.data))
	C.QProgressDialog_SetCancelButtonText(this.h, text_ms)
}

func (this *QProgressDialog) SetMinimumDuration(ms int) {
	C.QProgressDialog_SetMinimumDuration(this.h, (C.int)(ms))
}

func (this *QProgressDialog) Canceled() {
	C.QProgressDialog_Canceled(this.h)
}
func (this *QProgressDialog) OnCanceled(slot func()) {
	C.QProgressDialog_connect_Canceled(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QProgressDialog_Canceled
func miqt_exec_callback_QProgressDialog_Canceled(cb C.intptr_t) {
	gofunc, ok := cgo.Handle(cb).Value().(func())
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	gofunc()
}

func QProgressDialog_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QProgressDialog_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QProgressDialog_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QProgressDialog) Delete() {
	C.QProgressDialog_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QProgressDialog) GoGC() {
	runtime.SetFinalizer(this, func(this *QProgressDialog) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
