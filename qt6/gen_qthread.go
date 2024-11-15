package qt6

/*

#include "gen_qthread.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QThread__Priority int

const (
	QThread__IdlePriority         QThread__Priority = 0
	QThread__LowestPriority       QThread__Priority = 1
	QThread__LowPriority          QThread__Priority = 2
	QThread__NormalPriority       QThread__Priority = 3
	QThread__HighPriority         QThread__Priority = 4
	QThread__HighestPriority      QThread__Priority = 5
	QThread__TimeCriticalPriority QThread__Priority = 6
	QThread__InheritPriority      QThread__Priority = 7
)

type QThread struct {
	h *C.QThread
	*QObject
}

func (this *QThread) cPointer() *C.QThread {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QThread) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQThread(h *C.QThread) *QThread {
	if h == nil {
		return nil
	}
	return &QThread{h: h, QObject: UnsafeNewQObject(unsafe.Pointer(h))}
}

func UnsafeNewQThread(h unsafe.Pointer) *QThread {
	return newQThread((*C.QThread)(h))
}

// NewQThread constructs a new QThread object.
func NewQThread() *QThread {
	ret := C.QThread_new()
	return newQThread(ret)
}

// NewQThread2 constructs a new QThread object.
func NewQThread2(parent *QObject) *QThread {
	ret := C.QThread_new2(parent.cPointer())
	return newQThread(ret)
}

func (this *QThread) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QThread_MetaObject(this.h)))
}

func (this *QThread) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QThread_Metacast(this.h, param1_Cstring))
}

func QThread_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_CurrentThreadId() unsafe.Pointer {
	return (unsafe.Pointer)(C.QThread_CurrentThreadId())
}

func QThread_CurrentThread() *QThread {
	return UnsafeNewQThread(unsafe.Pointer(C.QThread_CurrentThread()))
}

func QThread_IdealThreadCount() int {
	return (int)(C.QThread_IdealThreadCount())
}

func QThread_YieldCurrentThread() {
	C.QThread_YieldCurrentThread()
}

func (this *QThread) SetPriority(priority QThread__Priority) {
	C.QThread_SetPriority(this.h, (C.int)(priority))
}

func (this *QThread) Priority() QThread__Priority {
	return (QThread__Priority)(C.QThread_Priority(this.h))
}

func (this *QThread) IsFinished() bool {
	return (bool)(C.QThread_IsFinished(this.h))
}

func (this *QThread) IsRunning() bool {
	return (bool)(C.QThread_IsRunning(this.h))
}

func (this *QThread) RequestInterruption() {
	C.QThread_RequestInterruption(this.h)
}

func (this *QThread) IsInterruptionRequested() bool {
	return (bool)(C.QThread_IsInterruptionRequested(this.h))
}

func (this *QThread) SetStackSize(stackSize uint) {
	C.QThread_SetStackSize(this.h, (C.uint)(stackSize))
}

func (this *QThread) StackSize() uint {
	return (uint)(C.QThread_StackSize(this.h))
}

func (this *QThread) EventDispatcher() *QAbstractEventDispatcher {
	return UnsafeNewQAbstractEventDispatcher(unsafe.Pointer(C.QThread_EventDispatcher(this.h)))
}

func (this *QThread) SetEventDispatcher(eventDispatcher *QAbstractEventDispatcher) {
	C.QThread_SetEventDispatcher(this.h, eventDispatcher.cPointer())
}

func (this *QThread) Event(event *QEvent) bool {
	return (bool)(C.QThread_Event(this.h, event.cPointer()))
}

func (this *QThread) LoopLevel() int {
	return (int)(C.QThread_LoopLevel(this.h))
}

func (this *QThread) Start() {
	C.QThread_Start(this.h)
}

func (this *QThread) Terminate() {
	C.QThread_Terminate(this.h)
}

func (this *QThread) Exit() {
	C.QThread_Exit(this.h)
}

func (this *QThread) Quit() {
	C.QThread_Quit(this.h)
}

func (this *QThread) Wait() bool {
	return (bool)(C.QThread_Wait(this.h))
}

func (this *QThread) WaitWithTime(time uint64) bool {
	return (bool)(C.QThread_WaitWithTime(this.h, (C.ulong)(time)))
}

func QThread_Sleep(param1 uint64) {
	C.QThread_Sleep((C.ulong)(param1))
}

func QThread_Msleep(param1 uint64) {
	C.QThread_Msleep((C.ulong)(param1))
}

func QThread_Usleep(param1 uint64) {
	C.QThread_Usleep((C.ulong)(param1))
}

func QThread_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QThread_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QThread_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QThread) Start1(param1 QThread__Priority) {
	C.QThread_Start1(this.h, (C.int)(param1))
}

func (this *QThread) Exit1(retcode int) {
	C.QThread_Exit1(this.h, (C.int)(retcode))
}

func (this *QThread) Wait1(deadline QDeadlineTimer) bool {
	return (bool)(C.QThread_Wait1(this.h, deadline.cPointer()))
}

// Delete this object from C++ memory.
func (this *QThread) Delete() {
	C.QThread_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QThread) GoGC() {
	runtime.SetFinalizer(this, func(this *QThread) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
