package qt6

/*

#include "gen_qanimationgroup.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QAnimationGroup struct {
	h          *C.QAnimationGroup
	isSubclass bool
	*QAbstractAnimation
}

func (this *QAnimationGroup) cPointer() *C.QAnimationGroup {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QAnimationGroup) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQAnimationGroup constructs the type using only CGO pointers.
func newQAnimationGroup(h *C.QAnimationGroup, h_QAbstractAnimation *C.QAbstractAnimation, h_QObject *C.QObject) *QAnimationGroup {
	if h == nil {
		return nil
	}
	return &QAnimationGroup{h: h,
		QAbstractAnimation: newQAbstractAnimation(h_QAbstractAnimation, h_QObject)}
}

// UnsafeNewQAnimationGroup constructs the type using only unsafe pointers.
func UnsafeNewQAnimationGroup(h unsafe.Pointer, h_QAbstractAnimation unsafe.Pointer, h_QObject unsafe.Pointer) *QAnimationGroup {
	if h == nil {
		return nil
	}

	return &QAnimationGroup{h: (*C.QAnimationGroup)(h),
		QAbstractAnimation: UnsafeNewQAbstractAnimation(h_QAbstractAnimation, h_QObject)}
}

// NewQAnimationGroup constructs a new QAnimationGroup object.
func NewQAnimationGroup() *QAnimationGroup {
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QAnimationGroup_new(&outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQAnimationGroup(outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQAnimationGroup2 constructs a new QAnimationGroup object.
func NewQAnimationGroup2(parent *QObject) *QAnimationGroup {
	var outptr_QAnimationGroup *C.QAnimationGroup = nil
	var outptr_QAbstractAnimation *C.QAbstractAnimation = nil
	var outptr_QObject *C.QObject = nil

	C.QAnimationGroup_new2(parent.cPointer(), &outptr_QAnimationGroup, &outptr_QAbstractAnimation, &outptr_QObject)
	ret := newQAnimationGroup(outptr_QAnimationGroup, outptr_QAbstractAnimation, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QAnimationGroup) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QAnimationGroup_MetaObject(this.h)))
}

func (this *QAnimationGroup) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QAnimationGroup_Metacast(this.h, param1_Cstring))
}

func QAnimationGroup_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationGroup) AnimationAt(index int) *QAbstractAnimation {
	return UnsafeNewQAbstractAnimation(unsafe.Pointer(C.QAnimationGroup_AnimationAt(this.h, (C.int)(index))), nil)
}

func (this *QAnimationGroup) AnimationCount() int {
	return (int)(C.QAnimationGroup_AnimationCount(this.h))
}

func (this *QAnimationGroup) IndexOfAnimation(animation *QAbstractAnimation) int {
	return (int)(C.QAnimationGroup_IndexOfAnimation(this.h, animation.cPointer()))
}

func (this *QAnimationGroup) AddAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_AddAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) InsertAnimation(index int, animation *QAbstractAnimation) {
	C.QAnimationGroup_InsertAnimation(this.h, (C.int)(index), animation.cPointer())
}

func (this *QAnimationGroup) RemoveAnimation(animation *QAbstractAnimation) {
	C.QAnimationGroup_RemoveAnimation(this.h, animation.cPointer())
}

func (this *QAnimationGroup) TakeAnimation(index int) *QAbstractAnimation {
	return UnsafeNewQAbstractAnimation(unsafe.Pointer(C.QAnimationGroup_TakeAnimation(this.h, (C.int)(index))), nil)
}

func (this *QAnimationGroup) Clear() {
	C.QAnimationGroup_Clear(this.h)
}

func QAnimationGroup_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QAnimationGroup_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QAnimationGroup_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QAnimationGroup) callVirtualBase_Event(event *QEvent) bool {

	return (bool)(C.QAnimationGroup_virtualbase_Event(unsafe.Pointer(this.h), event.cPointer()))

}
func (this *QAnimationGroup) OnEvent(slot func(super func(event *QEvent) bool, event *QEvent) bool) {
	C.QAnimationGroup_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationGroup_Event
func miqt_exec_callback_QAnimationGroup_Event(self *C.QAnimationGroup, cb C.intptr_t, event *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(event *QEvent) bool, event *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(event))

	virtualReturn := gofunc((&QAnimationGroup{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}
func (this *QAnimationGroup) OnDuration(slot func() int) {
	C.QAnimationGroup_override_virtual_Duration(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationGroup_Duration
func miqt_exec_callback_QAnimationGroup_Duration(self *C.QAnimationGroup, cb C.intptr_t) C.int {
	gofunc, ok := cgo.Handle(cb).Value().(func() int)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	virtualReturn := gofunc()

	return (C.int)(virtualReturn)

}
func (this *QAnimationGroup) OnUpdateCurrentTime(slot func(currentTime int)) {
	C.QAnimationGroup_override_virtual_UpdateCurrentTime(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationGroup_UpdateCurrentTime
func miqt_exec_callback_QAnimationGroup_UpdateCurrentTime(self *C.QAnimationGroup, cb C.intptr_t, currentTime C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(currentTime int))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (int)(currentTime)

	gofunc(slotval1)

}

func (this *QAnimationGroup) callVirtualBase_UpdateState(newState QAbstractAnimation__State, oldState QAbstractAnimation__State) {

	C.QAnimationGroup_virtualbase_UpdateState(unsafe.Pointer(this.h), (C.int)(newState), (C.int)(oldState))

}
func (this *QAnimationGroup) OnUpdateState(slot func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State)) {
	C.QAnimationGroup_override_virtual_UpdateState(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationGroup_UpdateState
func miqt_exec_callback_QAnimationGroup_UpdateState(self *C.QAnimationGroup, cb C.intptr_t, newState C.int, oldState C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(newState QAbstractAnimation__State, oldState QAbstractAnimation__State), newState QAbstractAnimation__State, oldState QAbstractAnimation__State))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__State)(newState)

	slotval2 := (QAbstractAnimation__State)(oldState)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_UpdateState, slotval1, slotval2)

}

func (this *QAnimationGroup) callVirtualBase_UpdateDirection(direction QAbstractAnimation__Direction) {

	C.QAnimationGroup_virtualbase_UpdateDirection(unsafe.Pointer(this.h), (C.int)(direction))

}
func (this *QAnimationGroup) OnUpdateDirection(slot func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction)) {
	C.QAnimationGroup_override_virtual_UpdateDirection(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QAnimationGroup_UpdateDirection
func miqt_exec_callback_QAnimationGroup_UpdateDirection(self *C.QAnimationGroup, cb C.intptr_t, direction C.int) {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(direction QAbstractAnimation__Direction), direction QAbstractAnimation__Direction))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := (QAbstractAnimation__Direction)(direction)

	gofunc((&QAnimationGroup{h: self}).callVirtualBase_UpdateDirection, slotval1)

}

// Delete this object from C++ memory.
func (this *QAnimationGroup) Delete() {
	C.QAnimationGroup_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QAnimationGroup) GoGC() {
	runtime.SetFinalizer(this, func(this *QAnimationGroup) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
