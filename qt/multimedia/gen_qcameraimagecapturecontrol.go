package multimedia

/*

#include "gen_qcameraimagecapturecontrol.h"
#include <stdlib.h>

*/
import "C"

import (
	"github.com/mappu/miqt/qt"
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QCameraImageCaptureControl struct {
	h *C.QCameraImageCaptureControl
	*QMediaControl
}

func (this *QCameraImageCaptureControl) cPointer() *C.QCameraImageCaptureControl {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QCameraImageCaptureControl) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQCameraImageCaptureControl(h *C.QCameraImageCaptureControl) *QCameraImageCaptureControl {
	if h == nil {
		return nil
	}
	return &QCameraImageCaptureControl{h: h, QMediaControl: UnsafeNewQMediaControl(unsafe.Pointer(h))}
}

func UnsafeNewQCameraImageCaptureControl(h unsafe.Pointer) *QCameraImageCaptureControl {
	return newQCameraImageCaptureControl((*C.QCameraImageCaptureControl)(h))
}

func (this *QCameraImageCaptureControl) MetaObject() *qt.QMetaObject {
	return qt.UnsafeNewQMetaObject(unsafe.Pointer(C.QCameraImageCaptureControl_MetaObject(this.h)))
}

func (this *QCameraImageCaptureControl) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QCameraImageCaptureControl_Metacast(this.h, param1_Cstring))
}

func QCameraImageCaptureControl_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCaptureControl_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QCameraImageCaptureControl) IsReadyForCapture() bool {
	return (bool)(C.QCameraImageCaptureControl_IsReadyForCapture(this.h))
}

func (this *QCameraImageCaptureControl) DriveMode() QCameraImageCapture__DriveMode {
	return (QCameraImageCapture__DriveMode)(C.QCameraImageCaptureControl_DriveMode(this.h))
}

func (this *QCameraImageCaptureControl) SetDriveMode(mode QCameraImageCapture__DriveMode) {
	C.QCameraImageCaptureControl_SetDriveMode(this.h, (C.int)(mode))
}

func (this *QCameraImageCaptureControl) Capture(fileName string) int {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	return (int)(C.QCameraImageCaptureControl_Capture(this.h, fileName_ms))
}

func (this *QCameraImageCaptureControl) CancelCapture() {
	C.QCameraImageCaptureControl_CancelCapture(this.h)
}

func (this *QCameraImageCaptureControl) ReadyForCaptureChanged(ready bool) {
	C.QCameraImageCaptureControl_ReadyForCaptureChanged(this.h, (C.bool)(ready))
}
func (this *QCameraImageCaptureControl) OnReadyForCaptureChanged(slot func(ready bool)) {
	C.QCameraImageCaptureControl_connect_ReadyForCaptureChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ReadyForCaptureChanged
func miqt_exec_callback_QCameraImageCaptureControl_ReadyForCaptureChanged(cb C.intptr_t, ready C.bool) {
	gofunc, ok := cgo.Handle(cb).Value().(func(ready bool))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (bool)(ready)

	gofunc(slotval1)
}

func (this *QCameraImageCaptureControl) ImageExposed(requestId int) {
	C.QCameraImageCaptureControl_ImageExposed(this.h, (C.int)(requestId))
}
func (this *QCameraImageCaptureControl) OnImageExposed(slot func(requestId int)) {
	C.QCameraImageCaptureControl_connect_ImageExposed(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ImageExposed
func miqt_exec_callback_QCameraImageCaptureControl_ImageExposed(cb C.intptr_t, requestId C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestId int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(requestId)

	gofunc(slotval1)
}

func (this *QCameraImageCaptureControl) ImageCaptured(requestId int, preview *qt.QImage) {
	C.QCameraImageCaptureControl_ImageCaptured(this.h, (C.int)(requestId), (*C.QImage)(preview.UnsafePointer()))
}
func (this *QCameraImageCaptureControl) OnImageCaptured(slot func(requestId int, preview *qt.QImage)) {
	C.QCameraImageCaptureControl_connect_ImageCaptured(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ImageCaptured
func miqt_exec_callback_QCameraImageCaptureControl_ImageCaptured(cb C.intptr_t, requestId C.int, preview *C.QImage) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestId int, preview *qt.QImage))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(requestId)

	slotval2 := qt.UnsafeNewQImage(unsafe.Pointer(preview))

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCaptureControl) ImageMetadataAvailable(id int, key string, value *qt.QVariant) {
	key_ms := C.struct_miqt_string{}
	key_ms.data = C.CString(key)
	key_ms.len = C.size_t(len(key))
	defer C.free(unsafe.Pointer(key_ms.data))
	C.QCameraImageCaptureControl_ImageMetadataAvailable(this.h, (C.int)(id), key_ms, (*C.QVariant)(value.UnsafePointer()))
}
func (this *QCameraImageCaptureControl) OnImageMetadataAvailable(slot func(id int, key string, value *qt.QVariant)) {
	C.QCameraImageCaptureControl_connect_ImageMetadataAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ImageMetadataAvailable
func miqt_exec_callback_QCameraImageCaptureControl_ImageMetadataAvailable(cb C.intptr_t, id C.int, key C.struct_miqt_string, value *C.QVariant) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, key string, value *qt.QVariant))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	var key_ms C.struct_miqt_string = key
	key_ret := C.GoStringN(key_ms.data, C.int(int64(key_ms.len)))
	C.free(unsafe.Pointer(key_ms.data))
	slotval2 := key_ret
	slotval3 := qt.UnsafeNewQVariant(unsafe.Pointer(value))

	gofunc(slotval1, slotval2, slotval3)
}

func (this *QCameraImageCaptureControl) ImageAvailable(requestId int, buffer *QVideoFrame) {
	C.QCameraImageCaptureControl_ImageAvailable(this.h, (C.int)(requestId), buffer.cPointer())
}
func (this *QCameraImageCaptureControl) OnImageAvailable(slot func(requestId int, buffer *QVideoFrame)) {
	C.QCameraImageCaptureControl_connect_ImageAvailable(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ImageAvailable
func miqt_exec_callback_QCameraImageCaptureControl_ImageAvailable(cb C.intptr_t, requestId C.int, buffer *C.QVideoFrame) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestId int, buffer *QVideoFrame))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(requestId)

	slotval2 := UnsafeNewQVideoFrame(unsafe.Pointer(buffer))

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCaptureControl) ImageSaved(requestId int, fileName string) {
	fileName_ms := C.struct_miqt_string{}
	fileName_ms.data = C.CString(fileName)
	fileName_ms.len = C.size_t(len(fileName))
	defer C.free(unsafe.Pointer(fileName_ms.data))
	C.QCameraImageCaptureControl_ImageSaved(this.h, (C.int)(requestId), fileName_ms)
}
func (this *QCameraImageCaptureControl) OnImageSaved(slot func(requestId int, fileName string)) {
	C.QCameraImageCaptureControl_connect_ImageSaved(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_ImageSaved
func miqt_exec_callback_QCameraImageCaptureControl_ImageSaved(cb C.intptr_t, requestId C.int, fileName C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(requestId int, fileName string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(requestId)

	var fileName_ms C.struct_miqt_string = fileName
	fileName_ret := C.GoStringN(fileName_ms.data, C.int(int64(fileName_ms.len)))
	C.free(unsafe.Pointer(fileName_ms.data))
	slotval2 := fileName_ret

	gofunc(slotval1, slotval2)
}

func (this *QCameraImageCaptureControl) Error(id int, error int, errorString string) {
	errorString_ms := C.struct_miqt_string{}
	errorString_ms.data = C.CString(errorString)
	errorString_ms.len = C.size_t(len(errorString))
	defer C.free(unsafe.Pointer(errorString_ms.data))
	C.QCameraImageCaptureControl_Error(this.h, (C.int)(id), (C.int)(error), errorString_ms)
}
func (this *QCameraImageCaptureControl) OnError(slot func(id int, error int, errorString string)) {
	C.QCameraImageCaptureControl_connect_Error(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QCameraImageCaptureControl_Error
func miqt_exec_callback_QCameraImageCaptureControl_Error(cb C.intptr_t, id C.int, error C.int, errorString C.struct_miqt_string) {
	gofunc, ok := cgo.Handle(cb).Value().(func(id int, error int, errorString string))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(id)

	slotval2 := (int)(error)

	var errorString_ms C.struct_miqt_string = errorString
	errorString_ret := C.GoStringN(errorString_ms.data, C.int(int64(errorString_ms.len)))
	C.free(unsafe.Pointer(errorString_ms.data))
	slotval3 := errorString_ret

	gofunc(slotval1, slotval2, slotval3)
}

func QCameraImageCaptureControl_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCaptureControl_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCaptureControl_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QCameraImageCaptureControl_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QCameraImageCaptureControl_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

// Delete this object from C++ memory.
func (this *QCameraImageCaptureControl) Delete() {
	C.QCameraImageCaptureControl_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QCameraImageCaptureControl) GoGC() {
	runtime.SetFinalizer(this, func(this *QCameraImageCaptureControl) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
