package qt

/*

#include "gen_qapplication.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QApplication__ColorSpec int

const (
	QApplication__NormalColor QApplication__ColorSpec = 0
	QApplication__CustomColor QApplication__ColorSpec = 1
	QApplication__ManyColor   QApplication__ColorSpec = 2
)

type QApplication struct {
	h          *C.QApplication
	isSubclass bool
	*QGuiApplication
}

func (this *QApplication) cPointer() *C.QApplication {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QApplication) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

// newQApplication constructs the type using only CGO pointers.
func newQApplication(h *C.QApplication, h_QGuiApplication *C.QGuiApplication, h_QCoreApplication *C.QCoreApplication, h_QObject *C.QObject) *QApplication {
	if h == nil {
		return nil
	}
	return &QApplication{h: h,
		QGuiApplication: newQGuiApplication(h_QGuiApplication, h_QCoreApplication, h_QObject)}
}

// UnsafeNewQApplication constructs the type using only unsafe pointers.
func UnsafeNewQApplication(h unsafe.Pointer, h_QGuiApplication unsafe.Pointer, h_QCoreApplication unsafe.Pointer, h_QObject unsafe.Pointer) *QApplication {
	if h == nil {
		return nil
	}

	return &QApplication{h: (*C.QApplication)(h),
		QGuiApplication: UnsafeNewQGuiApplication(h_QGuiApplication, h_QCoreApplication, h_QObject)}
}

// NewQApplication constructs a new QApplication object.
func NewQApplication(args []string) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	var outptr_QApplication *C.QApplication = nil
	var outptr_QGuiApplication *C.QGuiApplication = nil
	var outptr_QCoreApplication *C.QCoreApplication = nil
	var outptr_QObject *C.QObject = nil

	C.QApplication_new(argc, &argv[0], &outptr_QApplication, &outptr_QGuiApplication, &outptr_QCoreApplication, &outptr_QObject)
	ret := newQApplication(outptr_QApplication, outptr_QGuiApplication, outptr_QCoreApplication, outptr_QObject)
	ret.isSubclass = true
	return ret
}

// NewQApplication2 constructs a new QApplication object.
func NewQApplication2(args []string, param3 int) *QApplication {
	// Convert []string to long-lived int& argc, char** argv, never call free()
	argc := (*C.int)(C.malloc(8))
	*argc = C.int(len(args))
	argv := (*[0xffff]*C.char)(C.malloc(C.size_t(8 * len(args))))
	for i := range args {
		argv[i] = C.CString(args[i])
	}

	runtime.LockOSThread() // Prevent Go from migrating the main Qt thread

	var outptr_QApplication *C.QApplication = nil
	var outptr_QGuiApplication *C.QGuiApplication = nil
	var outptr_QCoreApplication *C.QCoreApplication = nil
	var outptr_QObject *C.QObject = nil

	C.QApplication_new2(argc, &argv[0], (C.int)(param3), &outptr_QApplication, &outptr_QGuiApplication, &outptr_QCoreApplication, &outptr_QObject)
	ret := newQApplication(outptr_QApplication, outptr_QGuiApplication, outptr_QCoreApplication, outptr_QObject)
	ret.isSubclass = true
	return ret
}

func (this *QApplication) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QApplication_MetaObject(this.h)))
}

func (this *QApplication) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QApplication_Metacast(this.h, param1_Cstring))
}

func QApplication_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_Style() *QStyle {
	return UnsafeNewQStyle(unsafe.Pointer(C.QApplication_Style()), nil)
}

func QApplication_SetStyle(style *QStyle) {
	C.QApplication_SetStyle(style.cPointer())
}

func QApplication_SetStyleWithStyle(style string) *QStyle {
	style_ms := C.struct_miqt_string{}
	style_ms.data = C.CString(style)
	style_ms.len = C.size_t(len(style))
	defer C.free(unsafe.Pointer(style_ms.data))
	return UnsafeNewQStyle(unsafe.Pointer(C.QApplication_SetStyleWithStyle(style_ms)), nil)
}

func QApplication_ColorSpec() int {
	return (int)(C.QApplication_ColorSpec())
}

func QApplication_SetColorSpec(colorSpec int) {
	C.QApplication_SetColorSpec((C.int)(colorSpec))
}

func QApplication_Palette(param1 *QWidget) *QPalette {
	_ret := C.QApplication_Palette(param1.cPointer())
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_PaletteWithClassName(className string) *QPalette {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	_ret := C.QApplication_PaletteWithClassName(className_Cstring)
	_goptr := newQPalette(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetPalette(param1 *QPalette) {
	C.QApplication_SetPalette(param1.cPointer())
}

func QApplication_Font() *QFont {
	_ret := C.QApplication_Font()
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_FontWithQWidget(param1 *QWidget) *QFont {
	_ret := C.QApplication_FontWithQWidget(param1.cPointer())
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_FontWithClassName(className string) *QFont {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	_ret := C.QApplication_FontWithClassName(className_Cstring)
	_goptr := newQFont(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetFont(param1 *QFont) {
	C.QApplication_SetFont(param1.cPointer())
}

func QApplication_FontMetrics() *QFontMetrics {
	_ret := C.QApplication_FontMetrics()
	_goptr := newQFontMetrics(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetWindowIcon(icon *QIcon) {
	C.QApplication_SetWindowIcon(icon.cPointer())
}

func QApplication_WindowIcon() *QIcon {
	_ret := C.QApplication_WindowIcon()
	_goptr := newQIcon(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_AllWidgets() []*QWidget {
	var _ma C.struct_miqt_array = C.QApplication_AllWidgets()
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQWidget(unsafe.Pointer(_outCast[i]), nil, nil)
	}
	return _ret
}

func QApplication_TopLevelWidgets() []*QWidget {
	var _ma C.struct_miqt_array = C.QApplication_TopLevelWidgets()
	_ret := make([]*QWidget, int(_ma.len))
	_outCast := (*[0xffff]*C.QWidget)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQWidget(unsafe.Pointer(_outCast[i]), nil, nil)
	}
	return _ret
}

func QApplication_Desktop() *QDesktopWidget {
	return UnsafeNewQDesktopWidget(unsafe.Pointer(C.QApplication_Desktop()), nil, nil, nil)
}

func QApplication_ActivePopupWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_ActivePopupWidget()), nil, nil)
}

func QApplication_ActiveModalWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_ActiveModalWidget()), nil, nil)
}

func QApplication_FocusWidget() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_FocusWidget()), nil, nil)
}

func QApplication_ActiveWindow() *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_ActiveWindow()), nil, nil)
}

func QApplication_SetActiveWindow(act *QWidget) {
	C.QApplication_SetActiveWindow(act.cPointer())
}

func QApplication_WidgetAt(p *QPoint) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_WidgetAt(p.cPointer())), nil, nil)
}

func QApplication_WidgetAt2(x int, y int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_WidgetAt2((C.int)(x), (C.int)(y))), nil, nil)
}

func QApplication_TopLevelAt(p *QPoint) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_TopLevelAt(p.cPointer())), nil, nil)
}

func QApplication_TopLevelAt2(x int, y int) *QWidget {
	return UnsafeNewQWidget(unsafe.Pointer(C.QApplication_TopLevelAt2((C.int)(x), (C.int)(y))), nil, nil)
}

func QApplication_Beep() {
	C.QApplication_Beep()
}

func QApplication_Alert(widget *QWidget) {
	C.QApplication_Alert(widget.cPointer())
}

func QApplication_SetCursorFlashTime(cursorFlashTime int) {
	C.QApplication_SetCursorFlashTime((C.int)(cursorFlashTime))
}

func QApplication_CursorFlashTime() int {
	return (int)(C.QApplication_CursorFlashTime())
}

func QApplication_SetDoubleClickInterval(doubleClickInterval int) {
	C.QApplication_SetDoubleClickInterval((C.int)(doubleClickInterval))
}

func QApplication_DoubleClickInterval() int {
	return (int)(C.QApplication_DoubleClickInterval())
}

func QApplication_SetKeyboardInputInterval(keyboardInputInterval int) {
	C.QApplication_SetKeyboardInputInterval((C.int)(keyboardInputInterval))
}

func QApplication_KeyboardInputInterval() int {
	return (int)(C.QApplication_KeyboardInputInterval())
}

func QApplication_SetWheelScrollLines(wheelScrollLines int) {
	C.QApplication_SetWheelScrollLines((C.int)(wheelScrollLines))
}

func QApplication_WheelScrollLines() int {
	return (int)(C.QApplication_WheelScrollLines())
}

func QApplication_SetGlobalStrut(globalStrut *QSize) {
	C.QApplication_SetGlobalStrut(globalStrut.cPointer())
}

func QApplication_GlobalStrut() *QSize {
	_ret := C.QApplication_GlobalStrut()
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func QApplication_SetStartDragTime(ms int) {
	C.QApplication_SetStartDragTime((C.int)(ms))
}

func QApplication_StartDragTime() int {
	return (int)(C.QApplication_StartDragTime())
}

func QApplication_SetStartDragDistance(l int) {
	C.QApplication_SetStartDragDistance((C.int)(l))
}

func QApplication_StartDragDistance() int {
	return (int)(C.QApplication_StartDragDistance())
}

func QApplication_IsEffectEnabled(param1 UIEffect) bool {
	return (bool)(C.QApplication_IsEffectEnabled((C.int)(param1)))
}

func QApplication_SetEffectEnabled(param1 UIEffect) {
	C.QApplication_SetEffectEnabled((C.int)(param1))
}

func QApplication_Exec() int {
	return (int)(C.QApplication_Exec())
}

func (this *QApplication) Notify(param1 *QObject, param2 *QEvent) bool {
	return (bool)(C.QApplication_Notify(this.h, param1.cPointer(), param2.cPointer()))
}

func (this *QApplication) FocusChanged(old *QWidget, now *QWidget) {
	C.QApplication_FocusChanged(this.h, old.cPointer(), now.cPointer())
}
func (this *QApplication) OnFocusChanged(slot func(old *QWidget, now *QWidget)) {
	C.QApplication_connect_FocusChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QApplication_FocusChanged
func miqt_exec_callback_QApplication_FocusChanged(cb C.intptr_t, old *C.QWidget, now *C.QWidget) {
	gofunc, ok := cgo.Handle(cb).Value().(func(old *QWidget, now *QWidget))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQWidget(unsafe.Pointer(old), nil, nil)
	slotval2 := UnsafeNewQWidget(unsafe.Pointer(now), nil, nil)

	gofunc(slotval1, slotval2)
}

func (this *QApplication) StyleSheet() string {
	var _ms C.struct_miqt_string = C.QApplication_StyleSheet(this.h)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QApplication) SetStyleSheet(sheet string) {
	sheet_ms := C.struct_miqt_string{}
	sheet_ms.data = C.CString(sheet)
	sheet_ms.len = C.size_t(len(sheet))
	defer C.free(unsafe.Pointer(sheet_ms.data))
	C.QApplication_SetStyleSheet(this.h, sheet_ms)
}

func (this *QApplication) SetAutoSipEnabled(enabled bool) {
	C.QApplication_SetAutoSipEnabled(this.h, (C.bool)(enabled))
}

func (this *QApplication) AutoSipEnabled() bool {
	return (bool)(C.QApplication_AutoSipEnabled(this.h))
}

func QApplication_CloseAllWindows() {
	C.QApplication_CloseAllWindows()
}

func QApplication_AboutQt() {
	C.QApplication_AboutQt()
}

func QApplication_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QApplication_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QApplication_SetPalette2(param1 *QPalette, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_SetPalette2(param1.cPointer(), className_Cstring)
}

func QApplication_SetFont2(param1 *QFont, className string) {
	className_Cstring := C.CString(className)
	defer C.free(unsafe.Pointer(className_Cstring))
	C.QApplication_SetFont2(param1.cPointer(), className_Cstring)
}

func QApplication_Alert2(widget *QWidget, duration int) {
	C.QApplication_Alert2(widget.cPointer(), (C.int)(duration))
}

func QApplication_SetEffectEnabled2(param1 UIEffect, enable bool) {
	C.QApplication_SetEffectEnabled2((C.int)(param1), (C.bool)(enable))
}

func (this *QApplication) callVirtualBase_Notify(param1 *QObject, param2 *QEvent) bool {

	return (bool)(C.QApplication_virtualbase_Notify(unsafe.Pointer(this.h), param1.cPointer(), param2.cPointer()))

}
func (this *QApplication) OnNotify(slot func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool) {
	C.QApplication_override_virtual_Notify(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QApplication_Notify
func miqt_exec_callback_QApplication_Notify(self *C.QApplication, cb C.intptr_t, param1 *C.QObject, param2 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QObject, param2 *QEvent) bool, param1 *QObject, param2 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQObject(unsafe.Pointer(param1))
	slotval2 := UnsafeNewQEvent(unsafe.Pointer(param2))

	virtualReturn := gofunc((&QApplication{h: self}).callVirtualBase_Notify, slotval1, slotval2)

	return (C.bool)(virtualReturn)

}

func (this *QApplication) callVirtualBase_Event(param1 *QEvent) bool {

	return (bool)(C.QApplication_virtualbase_Event(unsafe.Pointer(this.h), param1.cPointer()))

}
func (this *QApplication) OnEvent(slot func(super func(param1 *QEvent) bool, param1 *QEvent) bool) {
	C.QApplication_override_virtual_Event(unsafe.Pointer(this.h), C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QApplication_Event
func miqt_exec_callback_QApplication_Event(self *C.QApplication, cb C.intptr_t, param1 *C.QEvent) C.bool {
	gofunc, ok := cgo.Handle(cb).Value().(func(super func(param1 *QEvent) bool, param1 *QEvent) bool)
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	slotval1 := UnsafeNewQEvent(unsafe.Pointer(param1))

	virtualReturn := gofunc((&QApplication{h: self}).callVirtualBase_Event, slotval1)

	return (C.bool)(virtualReturn)

}

// Delete this object from C++ memory.
func (this *QApplication) Delete() {
	C.QApplication_Delete(this.h, C.bool(this.isSubclass))
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QApplication) GoGC() {
	runtime.SetFinalizer(this, func(this *QApplication) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
