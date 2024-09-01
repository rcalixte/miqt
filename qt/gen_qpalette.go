package qt

/*

#cgo CFLAGS: -fPIC
#cgo pkg-config: Qt5Widgets
#include "gen_qpalette.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"unsafe"
)

type QPalette struct {
	h *C.QPalette
}

func (this *QPalette) cPointer() *C.QPalette {
	if this == nil {
		return nil
	}
	return this.h
}

func newQPalette(h *C.QPalette) *QPalette {
	if h == nil {
		return nil
	}
	return &QPalette{h: h}
}

func newQPalette_U(h unsafe.Pointer) *QPalette {
	return newQPalette((*C.QPalette)(h))
}

// NewQPalette constructs a new QPalette object.
func NewQPalette() *QPalette {
	ret := C.QPalette_new()
	return newQPalette(ret)
}

// NewQPalette2 constructs a new QPalette object.
func NewQPalette2(button *QColor) *QPalette {
	ret := C.QPalette_new2(button.cPointer())
	return newQPalette(ret)
}

// NewQPalette3 constructs a new QPalette object.
func NewQPalette3(button uintptr) *QPalette {
	ret := C.QPalette_new3((C.uintptr_t)(button))
	return newQPalette(ret)
}

// NewQPalette4 constructs a new QPalette object.
func NewQPalette4(button *QColor, window *QColor) *QPalette {
	ret := C.QPalette_new4(button.cPointer(), window.cPointer())
	return newQPalette(ret)
}

// NewQPalette5 constructs a new QPalette object.
func NewQPalette5(windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) *QPalette {
	ret := C.QPalette_new5(windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer())
	return newQPalette(ret)
}

// NewQPalette6 constructs a new QPalette object.
func NewQPalette6(windowText *QColor, window *QColor, light *QColor, dark *QColor, mid *QColor, text *QColor, base *QColor) *QPalette {
	ret := C.QPalette_new6(windowText.cPointer(), window.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), base.cPointer())
	return newQPalette(ret)
}

// NewQPalette7 constructs a new QPalette object.
func NewQPalette7(palette *QPalette) *QPalette {
	ret := C.QPalette_new7(palette.cPointer())
	return newQPalette(ret)
}

func (this *QPalette) OperatorAssign(palette *QPalette) {
	C.QPalette_OperatorAssign(this.h, palette.cPointer())
}

func (this *QPalette) Swap(other *QPalette) {
	C.QPalette_Swap(this.h, other.cPointer())
}

func (this *QPalette) CurrentColorGroup() uintptr {
	ret := C.QPalette_CurrentColorGroup(this.h)
	return (uintptr)(ret)
}

func (this *QPalette) SetCurrentColorGroup(cg uintptr) {
	C.QPalette_SetCurrentColorGroup(this.h, (C.uintptr_t)(cg))
}

func (this *QPalette) Color(cg uintptr, cr uintptr) *QColor {
	ret := C.QPalette_Color(this.h, (C.uintptr_t)(cg), (C.uintptr_t)(cr))
	return newQColor_U(unsafe.Pointer(ret))
}

func (this *QPalette) Brush(cg uintptr, cr uintptr) *QBrush {
	ret := C.QPalette_Brush(this.h, (C.uintptr_t)(cg), (C.uintptr_t)(cr))
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) SetColor(cg uintptr, cr uintptr, color *QColor) {
	C.QPalette_SetColor(this.h, (C.uintptr_t)(cg), (C.uintptr_t)(cr), color.cPointer())
}

func (this *QPalette) SetColor2(cr uintptr, color *QColor) {
	C.QPalette_SetColor2(this.h, (C.uintptr_t)(cr), color.cPointer())
}

func (this *QPalette) SetBrush(cr uintptr, brush *QBrush) {
	C.QPalette_SetBrush(this.h, (C.uintptr_t)(cr), brush.cPointer())
}

func (this *QPalette) IsBrushSet(cg uintptr, cr uintptr) bool {
	ret := C.QPalette_IsBrushSet(this.h, (C.uintptr_t)(cg), (C.uintptr_t)(cr))
	return (bool)(ret)
}

func (this *QPalette) SetBrush2(cg uintptr, cr uintptr, brush *QBrush) {
	C.QPalette_SetBrush2(this.h, (C.uintptr_t)(cg), (C.uintptr_t)(cr), brush.cPointer())
}

func (this *QPalette) SetColorGroup(cr uintptr, windowText *QBrush, button *QBrush, light *QBrush, dark *QBrush, mid *QBrush, text *QBrush, bright_text *QBrush, base *QBrush, window *QBrush) {
	C.QPalette_SetColorGroup(this.h, (C.uintptr_t)(cr), windowText.cPointer(), button.cPointer(), light.cPointer(), dark.cPointer(), mid.cPointer(), text.cPointer(), bright_text.cPointer(), base.cPointer(), window.cPointer())
}

func (this *QPalette) IsEqual(cr1 uintptr, cr2 uintptr) bool {
	ret := C.QPalette_IsEqual(this.h, (C.uintptr_t)(cr1), (C.uintptr_t)(cr2))
	return (bool)(ret)
}

func (this *QPalette) ColorWithCr(cr uintptr) *QColor {
	ret := C.QPalette_ColorWithCr(this.h, (C.uintptr_t)(cr))
	return newQColor_U(unsafe.Pointer(ret))
}

func (this *QPalette) BrushWithCr(cr uintptr) *QBrush {
	ret := C.QPalette_BrushWithCr(this.h, (C.uintptr_t)(cr))
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) WindowText() *QBrush {
	ret := C.QPalette_WindowText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Button() *QBrush {
	ret := C.QPalette_Button(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Light() *QBrush {
	ret := C.QPalette_Light(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Dark() *QBrush {
	ret := C.QPalette_Dark(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Mid() *QBrush {
	ret := C.QPalette_Mid(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Text() *QBrush {
	ret := C.QPalette_Text(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Base() *QBrush {
	ret := C.QPalette_Base(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) AlternateBase() *QBrush {
	ret := C.QPalette_AlternateBase(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) ToolTipBase() *QBrush {
	ret := C.QPalette_ToolTipBase(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) ToolTipText() *QBrush {
	ret := C.QPalette_ToolTipText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Window() *QBrush {
	ret := C.QPalette_Window(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Midlight() *QBrush {
	ret := C.QPalette_Midlight(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) BrightText() *QBrush {
	ret := C.QPalette_BrightText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) ButtonText() *QBrush {
	ret := C.QPalette_ButtonText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Shadow() *QBrush {
	ret := C.QPalette_Shadow(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Highlight() *QBrush {
	ret := C.QPalette_Highlight(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) HighlightedText() *QBrush {
	ret := C.QPalette_HighlightedText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Link() *QBrush {
	ret := C.QPalette_Link(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) LinkVisited() *QBrush {
	ret := C.QPalette_LinkVisited(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) PlaceholderText() *QBrush {
	ret := C.QPalette_PlaceholderText(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Foreground() *QBrush {
	ret := C.QPalette_Foreground(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) Background() *QBrush {
	ret := C.QPalette_Background(this.h)
	return newQBrush_U(unsafe.Pointer(ret))
}

func (this *QPalette) OperatorEqual(p *QPalette) bool {
	ret := C.QPalette_OperatorEqual(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPalette) OperatorNotEqual(p *QPalette) bool {
	ret := C.QPalette_OperatorNotEqual(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPalette) IsCopyOf(p *QPalette) bool {
	ret := C.QPalette_IsCopyOf(this.h, p.cPointer())
	return (bool)(ret)
}

func (this *QPalette) CacheKey() int64 {
	ret := C.QPalette_CacheKey(this.h)
	return (int64)(ret)
}

func (this *QPalette) Resolve(param1 *QPalette) *QPalette {
	ret := C.QPalette_Resolve(this.h, param1.cPointer())
	// Qt uses pass-by-value semantics for this type. Mimic with finalizer
	ret1 := newQPalette(ret)
	runtime.SetFinalizer(ret1, func(ret2 *QPalette) {
		ret2.Delete()
		runtime.KeepAlive(ret2.h)
	})
	return ret1
}

func (this *QPalette) Resolve2() uint {
	ret := C.QPalette_Resolve2(this.h)
	return (uint)(ret)
}

func (this *QPalette) ResolveWithMask(mask uint) {
	C.QPalette_ResolveWithMask(this.h, (C.uint)(mask))
}

func (this *QPalette) Delete() {
	C.QPalette_Delete(this.h)
}