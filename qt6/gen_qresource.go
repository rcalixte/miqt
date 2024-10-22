package qt6

/*

#include "gen_qresource.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QResource__Compression int

const (
	QResource__NoCompression   QResource__Compression = 0
	QResource__ZlibCompression QResource__Compression = 1
	QResource__ZstdCompression QResource__Compression = 2
)

type QResource struct {
	h *C.QResource
}

func (this *QResource) cPointer() *C.QResource {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QResource) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQResource(h *C.QResource) *QResource {
	if h == nil {
		return nil
	}
	return &QResource{h: h}
}

func UnsafeNewQResource(h unsafe.Pointer) *QResource {
	return newQResource((*C.QResource)(h))
}

// NewQResource constructs a new QResource object.
func NewQResource() *QResource {
	ret := C.QResource_new()
	return newQResource(ret)
}

// NewQResource2 constructs a new QResource object.
func NewQResource2(file string) *QResource {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	ret := C.QResource_new2(file_ms)
	return newQResource(ret)
}

// NewQResource3 constructs a new QResource object.
func NewQResource3(file string, locale *QLocale) *QResource {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	ret := C.QResource_new3(file_ms, locale.cPointer())
	return newQResource(ret)
}

func (this *QResource) SetFileName(file string) {
	file_ms := C.struct_miqt_string{}
	file_ms.data = C.CString(file)
	file_ms.len = C.size_t(len(file))
	defer C.free(unsafe.Pointer(file_ms.data))
	C.QResource_SetFileName(this.h, file_ms)
}

func (this *QResource) FileName() string {
	var _ms C.struct_miqt_string = C.QResource_FileName(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QResource) AbsoluteFilePath() string {
	var _ms C.struct_miqt_string = C.QResource_AbsoluteFilePath(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QResource) SetLocale(locale *QLocale) {
	C.QResource_SetLocale(this.h, locale.cPointer())
}

func (this *QResource) Locale() *QLocale {
	_ret := C.QResource_Locale(this.h)
	_goptr := newQLocale(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QResource) IsValid() bool {
	return (bool)(C.QResource_IsValid(this.h))
}

func (this *QResource) CompressionAlgorithm() QResource__Compression {
	return (QResource__Compression)(C.QResource_CompressionAlgorithm(this.h))
}

func (this *QResource) Size() int64 {
	return (int64)(C.QResource_Size(this.h))
}

func (this *QResource) Data() *byte {
	return (*byte)(C.QResource_Data(this.h))
}

func (this *QResource) UncompressedSize() int64 {
	return (int64)(C.QResource_UncompressedSize(this.h))
}

func (this *QResource) UncompressedData() []byte {
	var _bytearray C.struct_miqt_string = C.QResource_UncompressedData(this.h)
	_ret := C.GoBytes(unsafe.Pointer(_bytearray.data), C.int(int64(_bytearray.len)))
	C.free(unsafe.Pointer(_bytearray.data))
	return _ret
}

func (this *QResource) LastModified() *QDateTime {
	_ret := C.QResource_LastModified(this.h)
	_goptr := newQDateTime(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QResource_RegisterResource(rccFilename string) bool {
	rccFilename_ms := C.struct_miqt_string{}
	rccFilename_ms.data = C.CString(rccFilename)
	rccFilename_ms.len = C.size_t(len(rccFilename))
	defer C.free(unsafe.Pointer(rccFilename_ms.data))
	return (bool)(C.QResource_RegisterResource(rccFilename_ms))
}

func QResource_UnregisterResource(rccFilename string) bool {
	rccFilename_ms := C.struct_miqt_string{}
	rccFilename_ms.data = C.CString(rccFilename)
	rccFilename_ms.len = C.size_t(len(rccFilename))
	defer C.free(unsafe.Pointer(rccFilename_ms.data))
	return (bool)(C.QResource_UnregisterResource(rccFilename_ms))
}

func QResource_RegisterResourceWithRccData(rccData *byte) bool {
	return (bool)(C.QResource_RegisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData))))
}

func QResource_UnregisterResourceWithRccData(rccData *byte) bool {
	return (bool)(C.QResource_UnregisterResourceWithRccData((*C.uchar)(unsafe.Pointer(rccData))))
}

func QResource_RegisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_ms := C.struct_miqt_string{}
	rccFilename_ms.data = C.CString(rccFilename)
	rccFilename_ms.len = C.size_t(len(rccFilename))
	defer C.free(unsafe.Pointer(rccFilename_ms.data))
	resourceRoot_ms := C.struct_miqt_string{}
	resourceRoot_ms.data = C.CString(resourceRoot)
	resourceRoot_ms.len = C.size_t(len(resourceRoot))
	defer C.free(unsafe.Pointer(resourceRoot_ms.data))
	return (bool)(C.QResource_RegisterResource2(rccFilename_ms, resourceRoot_ms))
}

func QResource_UnregisterResource2(rccFilename string, resourceRoot string) bool {
	rccFilename_ms := C.struct_miqt_string{}
	rccFilename_ms.data = C.CString(rccFilename)
	rccFilename_ms.len = C.size_t(len(rccFilename))
	defer C.free(unsafe.Pointer(rccFilename_ms.data))
	resourceRoot_ms := C.struct_miqt_string{}
	resourceRoot_ms.data = C.CString(resourceRoot)
	resourceRoot_ms.len = C.size_t(len(resourceRoot))
	defer C.free(unsafe.Pointer(resourceRoot_ms.data))
	return (bool)(C.QResource_UnregisterResource2(rccFilename_ms, resourceRoot_ms))
}

func QResource_RegisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_ms := C.struct_miqt_string{}
	resourceRoot_ms.data = C.CString(resourceRoot)
	resourceRoot_ms.len = C.size_t(len(resourceRoot))
	defer C.free(unsafe.Pointer(resourceRoot_ms.data))
	return (bool)(C.QResource_RegisterResource22((*C.uchar)(unsafe.Pointer(rccData)), resourceRoot_ms))
}

func QResource_UnregisterResource22(rccData *byte, resourceRoot string) bool {
	resourceRoot_ms := C.struct_miqt_string{}
	resourceRoot_ms.data = C.CString(resourceRoot)
	resourceRoot_ms.len = C.size_t(len(resourceRoot))
	defer C.free(unsafe.Pointer(resourceRoot_ms.data))
	return (bool)(C.QResource_UnregisterResource22((*C.uchar)(unsafe.Pointer(rccData)), resourceRoot_ms))
}

// Delete this object from C++ memory.
func (this *QResource) Delete() {
	C.QResource_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QResource) GoGC() {
	runtime.SetFinalizer(this, func(this *QResource) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}