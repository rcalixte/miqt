package qt6

/*

#include "gen_qversionnumber.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QVersionNumber struct {
	h *C.QVersionNumber
}

func (this *QVersionNumber) cPointer() *C.QVersionNumber {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QVersionNumber) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQVersionNumber(h *C.QVersionNumber) *QVersionNumber {
	if h == nil {
		return nil
	}
	return &QVersionNumber{h: h}
}

func UnsafeNewQVersionNumber(h unsafe.Pointer) *QVersionNumber {
	return newQVersionNumber((*C.QVersionNumber)(h))
}

// NewQVersionNumber constructs a new QVersionNumber object.
func NewQVersionNumber() *QVersionNumber {
	ret := C.QVersionNumber_new()
	return newQVersionNumber(ret)
}

// NewQVersionNumber2 constructs a new QVersionNumber object.
func NewQVersionNumber2(seg []int) *QVersionNumber {
	// For the C ABI, malloc a C array of raw pointers
	seg_CArray := (*[0xffff]C.int)(C.malloc(C.size_t(8 * len(seg))))
	defer C.free(unsafe.Pointer(seg_CArray))
	for i := range seg {
		seg_CArray[i] = (C.int)(seg[i])
	}
	seg_ma := &C.struct_miqt_array{len: C.size_t(len(seg)), data: unsafe.Pointer(seg_CArray)}
	defer runtime.KeepAlive(unsafe.Pointer(seg_ma))
	ret := C.QVersionNumber_new2(seg_ma)
	return newQVersionNumber(ret)
}

// NewQVersionNumber3 constructs a new QVersionNumber object.
func NewQVersionNumber3(maj int) *QVersionNumber {
	ret := C.QVersionNumber_new3((C.int)(maj))
	return newQVersionNumber(ret)
}

// NewQVersionNumber4 constructs a new QVersionNumber object.
func NewQVersionNumber4(maj int, min int) *QVersionNumber {
	ret := C.QVersionNumber_new4((C.int)(maj), (C.int)(min))
	return newQVersionNumber(ret)
}

// NewQVersionNumber5 constructs a new QVersionNumber object.
func NewQVersionNumber5(maj int, min int, mic int) *QVersionNumber {
	ret := C.QVersionNumber_new5((C.int)(maj), (C.int)(min), (C.int)(mic))
	return newQVersionNumber(ret)
}

// NewQVersionNumber6 constructs a new QVersionNumber object.
func NewQVersionNumber6(param1 *QVersionNumber) *QVersionNumber {
	ret := C.QVersionNumber_new6(param1.cPointer())
	return newQVersionNumber(ret)
}

func (this *QVersionNumber) IsNull() bool {
	return (bool)(C.QVersionNumber_IsNull(this.h))
}

func (this *QVersionNumber) IsNormalized() bool {
	return (bool)(C.QVersionNumber_IsNormalized(this.h))
}

func (this *QVersionNumber) MajorVersion() int {
	return (int)(C.QVersionNumber_MajorVersion(this.h))
}

func (this *QVersionNumber) MinorVersion() int {
	return (int)(C.QVersionNumber_MinorVersion(this.h))
}

func (this *QVersionNumber) MicroVersion() int {
	return (int)(C.QVersionNumber_MicroVersion(this.h))
}

func (this *QVersionNumber) Normalized() *QVersionNumber {
	_ret := C.QVersionNumber_Normalized(this.h)
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) Segments() []int {
	var _ma *C.struct_miqt_array = C.QVersionNumber_Segments(this.h)
	_ret := make([]int, int(_ma.len))
	_outCast := (*[0xffff]C.int)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = (int)(_outCast[i])
	}
	C.free(unsafe.Pointer(_ma))
	return _ret
}

func (this *QVersionNumber) SegmentAt(index int64) int {
	return (int)(C.QVersionNumber_SegmentAt(this.h, (C.ptrdiff_t)(index)))
}

func (this *QVersionNumber) SegmentCount() int64 {
	return (int64)(C.QVersionNumber_SegmentCount(this.h))
}

func (this *QVersionNumber) IsPrefixOf(other *QVersionNumber) bool {
	return (bool)(C.QVersionNumber_IsPrefixOf(this.h, other.cPointer()))
}

func QVersionNumber_Compare(v1 *QVersionNumber, v2 *QVersionNumber) int {
	return (int)(C.QVersionNumber_Compare(v1.cPointer(), v2.cPointer()))
}

func QVersionNumber_CommonPrefix(v1 *QVersionNumber, v2 *QVersionNumber) *QVersionNumber {
	_ret := C.QVersionNumber_CommonPrefix(v1.cPointer(), v2.cPointer())
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QVersionNumber) ToString() string {
	var _ms C.struct_miqt_string = C.QVersionNumber_ToString(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QVersionNumber_FromString(stringVal QAnyStringView) *QVersionNumber {
	_ret := C.QVersionNumber_FromString(stringVal.cPointer())
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QVersionNumber_FromString2(stringVal QAnyStringView, suffixIndex *int64) *QVersionNumber {
	_ret := C.QVersionNumber_FromString2(stringVal.cPointer(), (*C.ptrdiff_t)(unsafe.Pointer(suffixIndex)))
	_goptr := newQVersionNumber(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

// Delete this object from C++ memory.
func (this *QVersionNumber) Delete() {
	C.QVersionNumber_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QVersionNumber) GoGC() {
	runtime.SetFinalizer(this, func(this *QVersionNumber) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}

type QTypeRevision struct {
	h *C.QTypeRevision
}

func (this *QTypeRevision) cPointer() *C.QTypeRevision {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QTypeRevision) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQTypeRevision(h *C.QTypeRevision) *QTypeRevision {
	if h == nil {
		return nil
	}
	return &QTypeRevision{h: h}
}

func UnsafeNewQTypeRevision(h unsafe.Pointer) *QTypeRevision {
	return newQTypeRevision((*C.QTypeRevision)(h))
}

// NewQTypeRevision constructs a new QTypeRevision object.
func NewQTypeRevision() *QTypeRevision {
	ret := C.QTypeRevision_new()
	return newQTypeRevision(ret)
}

// NewQTypeRevision2 constructs a new QTypeRevision object.
func NewQTypeRevision2(param1 *QTypeRevision) *QTypeRevision {
	ret := C.QTypeRevision_new2(param1.cPointer())
	return newQTypeRevision(ret)
}

func QTypeRevision_Zero() *QTypeRevision {
	_ret := C.QTypeRevision_Zero()
	_goptr := newQTypeRevision(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QTypeRevision) HasMajorVersion() bool {
	return (bool)(C.QTypeRevision_HasMajorVersion(this.h))
}

func (this *QTypeRevision) MajorVersion() byte {
	return (byte)(C.QTypeRevision_MajorVersion(this.h))
}

func (this *QTypeRevision) HasMinorVersion() bool {
	return (bool)(C.QTypeRevision_HasMinorVersion(this.h))
}

func (this *QTypeRevision) MinorVersion() byte {
	return (byte)(C.QTypeRevision_MinorVersion(this.h))
}

func (this *QTypeRevision) IsValid() bool {
	return (bool)(C.QTypeRevision_IsValid(this.h))
}

// Delete this object from C++ memory.
func (this *QTypeRevision) Delete() {
	C.QTypeRevision_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QTypeRevision) GoGC() {
	runtime.SetFinalizer(this, func(this *QTypeRevision) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}