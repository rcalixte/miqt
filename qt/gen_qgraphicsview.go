package qt

/*

#include "gen_qgraphicsview.h"
#include <stdlib.h>

*/
import "C"

import (
	"runtime"
	"runtime/cgo"
	"unsafe"
)

type QGraphicsView__ViewportAnchor int

const (
	QGraphicsView__NoAnchor         QGraphicsView__ViewportAnchor = 0
	QGraphicsView__AnchorViewCenter QGraphicsView__ViewportAnchor = 1
	QGraphicsView__AnchorUnderMouse QGraphicsView__ViewportAnchor = 2
)

type QGraphicsView__CacheModeFlag int

const (
	QGraphicsView__CacheNone       QGraphicsView__CacheModeFlag = 0
	QGraphicsView__CacheBackground QGraphicsView__CacheModeFlag = 1
)

type QGraphicsView__DragMode int

const (
	QGraphicsView__NoDrag         QGraphicsView__DragMode = 0
	QGraphicsView__ScrollHandDrag QGraphicsView__DragMode = 1
	QGraphicsView__RubberBandDrag QGraphicsView__DragMode = 2
)

type QGraphicsView__ViewportUpdateMode int

const (
	QGraphicsView__FullViewportUpdate         QGraphicsView__ViewportUpdateMode = 0
	QGraphicsView__MinimalViewportUpdate      QGraphicsView__ViewportUpdateMode = 1
	QGraphicsView__SmartViewportUpdate        QGraphicsView__ViewportUpdateMode = 2
	QGraphicsView__NoViewportUpdate           QGraphicsView__ViewportUpdateMode = 3
	QGraphicsView__BoundingRectViewportUpdate QGraphicsView__ViewportUpdateMode = 4
)

type QGraphicsView__OptimizationFlag int

const (
	QGraphicsView__DontClipPainter           QGraphicsView__OptimizationFlag = 1
	QGraphicsView__DontSavePainterState      QGraphicsView__OptimizationFlag = 2
	QGraphicsView__DontAdjustForAntialiasing QGraphicsView__OptimizationFlag = 4
	QGraphicsView__IndirectPainting          QGraphicsView__OptimizationFlag = 8
)

type QGraphicsView struct {
	h *C.QGraphicsView
	*QAbstractScrollArea
}

func (this *QGraphicsView) cPointer() *C.QGraphicsView {
	if this == nil {
		return nil
	}
	return this.h
}

func (this *QGraphicsView) UnsafePointer() unsafe.Pointer {
	if this == nil {
		return nil
	}
	return unsafe.Pointer(this.h)
}

func newQGraphicsView(h *C.QGraphicsView) *QGraphicsView {
	if h == nil {
		return nil
	}
	return &QGraphicsView{h: h, QAbstractScrollArea: UnsafeNewQAbstractScrollArea(unsafe.Pointer(h))}
}

func UnsafeNewQGraphicsView(h unsafe.Pointer) *QGraphicsView {
	return newQGraphicsView((*C.QGraphicsView)(h))
}

// NewQGraphicsView constructs a new QGraphicsView object.
func NewQGraphicsView(parent *QWidget) *QGraphicsView {
	ret := C.QGraphicsView_new(parent.cPointer())
	return newQGraphicsView(ret)
}

// NewQGraphicsView2 constructs a new QGraphicsView object.
func NewQGraphicsView2() *QGraphicsView {
	ret := C.QGraphicsView_new2()
	return newQGraphicsView(ret)
}

// NewQGraphicsView3 constructs a new QGraphicsView object.
func NewQGraphicsView3(scene *QGraphicsScene) *QGraphicsView {
	ret := C.QGraphicsView_new3(scene.cPointer())
	return newQGraphicsView(ret)
}

// NewQGraphicsView4 constructs a new QGraphicsView object.
func NewQGraphicsView4(scene *QGraphicsScene, parent *QWidget) *QGraphicsView {
	ret := C.QGraphicsView_new4(scene.cPointer(), parent.cPointer())
	return newQGraphicsView(ret)
}

func (this *QGraphicsView) MetaObject() *QMetaObject {
	return UnsafeNewQMetaObject(unsafe.Pointer(C.QGraphicsView_MetaObject(this.h)))
}

func (this *QGraphicsView) Metacast(param1 string) unsafe.Pointer {
	param1_Cstring := C.CString(param1)
	defer C.free(unsafe.Pointer(param1_Cstring))
	return (unsafe.Pointer)(C.QGraphicsView_Metacast(this.h, param1_Cstring))
}

func QGraphicsView_Tr(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf8(s string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_TrUtf8(s_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SizeHint() *QSize {
	_ret := C.QGraphicsView_SizeHint(this.h)
	_goptr := newQSize(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) RenderHints() QPainter__RenderHint {
	return (QPainter__RenderHint)(C.QGraphicsView_RenderHints(this.h))
}

func (this *QGraphicsView) SetRenderHint(hint QPainter__RenderHint) {
	C.QGraphicsView_SetRenderHint(this.h, (C.int)(hint))
}

func (this *QGraphicsView) SetRenderHints(hints QPainter__RenderHint) {
	C.QGraphicsView_SetRenderHints(this.h, (C.int)(hints))
}

func (this *QGraphicsView) Alignment() AlignmentFlag {
	return (AlignmentFlag)(C.QGraphicsView_Alignment(this.h))
}

func (this *QGraphicsView) SetAlignment(alignment AlignmentFlag) {
	C.QGraphicsView_SetAlignment(this.h, (C.int)(alignment))
}

func (this *QGraphicsView) TransformationAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_TransformationAnchor(this.h))
}

func (this *QGraphicsView) SetTransformationAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetTransformationAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ResizeAnchor() QGraphicsView__ViewportAnchor {
	return (QGraphicsView__ViewportAnchor)(C.QGraphicsView_ResizeAnchor(this.h))
}

func (this *QGraphicsView) SetResizeAnchor(anchor QGraphicsView__ViewportAnchor) {
	C.QGraphicsView_SetResizeAnchor(this.h, (C.int)(anchor))
}

func (this *QGraphicsView) ViewportUpdateMode() QGraphicsView__ViewportUpdateMode {
	return (QGraphicsView__ViewportUpdateMode)(C.QGraphicsView_ViewportUpdateMode(this.h))
}

func (this *QGraphicsView) SetViewportUpdateMode(mode QGraphicsView__ViewportUpdateMode) {
	C.QGraphicsView_SetViewportUpdateMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) OptimizationFlags() QGraphicsView__OptimizationFlag {
	return (QGraphicsView__OptimizationFlag)(C.QGraphicsView_OptimizationFlags(this.h))
}

func (this *QGraphicsView) SetOptimizationFlag(flag QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_SetOptimizationFlag(this.h, (C.int)(flag))
}

func (this *QGraphicsView) SetOptimizationFlags(flags QGraphicsView__OptimizationFlag) {
	C.QGraphicsView_SetOptimizationFlags(this.h, (C.int)(flags))
}

func (this *QGraphicsView) DragMode() QGraphicsView__DragMode {
	return (QGraphicsView__DragMode)(C.QGraphicsView_DragMode(this.h))
}

func (this *QGraphicsView) SetDragMode(mode QGraphicsView__DragMode) {
	C.QGraphicsView_SetDragMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandSelectionMode() ItemSelectionMode {
	return (ItemSelectionMode)(C.QGraphicsView_RubberBandSelectionMode(this.h))
}

func (this *QGraphicsView) SetRubberBandSelectionMode(mode ItemSelectionMode) {
	C.QGraphicsView_SetRubberBandSelectionMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) RubberBandRect() *QRect {
	_ret := C.QGraphicsView_RubberBandRect(this.h)
	_goptr := newQRect(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) CacheMode() QGraphicsView__CacheModeFlag {
	return (QGraphicsView__CacheModeFlag)(C.QGraphicsView_CacheMode(this.h))
}

func (this *QGraphicsView) SetCacheMode(mode QGraphicsView__CacheModeFlag) {
	C.QGraphicsView_SetCacheMode(this.h, (C.int)(mode))
}

func (this *QGraphicsView) ResetCachedContent() {
	C.QGraphicsView_ResetCachedContent(this.h)
}

func (this *QGraphicsView) IsInteractive() bool {
	return (bool)(C.QGraphicsView_IsInteractive(this.h))
}

func (this *QGraphicsView) SetInteractive(allowed bool) {
	C.QGraphicsView_SetInteractive(this.h, (C.bool)(allowed))
}

func (this *QGraphicsView) Scene() *QGraphicsScene {
	return UnsafeNewQGraphicsScene(unsafe.Pointer(C.QGraphicsView_Scene(this.h)))
}

func (this *QGraphicsView) SetScene(scene *QGraphicsScene) {
	C.QGraphicsView_SetScene(this.h, scene.cPointer())
}

func (this *QGraphicsView) SceneRect() *QRectF {
	_ret := C.QGraphicsView_SceneRect(this.h)
	_goptr := newQRectF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetSceneRect(rect *QRectF) {
	C.QGraphicsView_SetSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) SetSceneRect2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_SetSceneRect2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) Matrix() *QMatrix {
	_ret := C.QGraphicsView_Matrix(this.h)
	_goptr := newQMatrix(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetMatrix(matrix *QMatrix) {
	C.QGraphicsView_SetMatrix(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetMatrix() {
	C.QGraphicsView_ResetMatrix(this.h)
}

func (this *QGraphicsView) Transform() *QTransform {
	_ret := C.QGraphicsView_Transform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) ViewportTransform() *QTransform {
	_ret := C.QGraphicsView_ViewportTransform(this.h)
	_goptr := newQTransform(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) IsTransformed() bool {
	return (bool)(C.QGraphicsView_IsTransformed(this.h))
}

func (this *QGraphicsView) SetTransform(matrix *QTransform) {
	C.QGraphicsView_SetTransform(this.h, matrix.cPointer())
}

func (this *QGraphicsView) ResetTransform() {
	C.QGraphicsView_ResetTransform(this.h)
}

func (this *QGraphicsView) Rotate(angle float64) {
	C.QGraphicsView_Rotate(this.h, (C.double)(angle))
}

func (this *QGraphicsView) Scale(sx float64, sy float64) {
	C.QGraphicsView_Scale(this.h, (C.double)(sx), (C.double)(sy))
}

func (this *QGraphicsView) Shear(sh float64, sv float64) {
	C.QGraphicsView_Shear(this.h, (C.double)(sh), (C.double)(sv))
}

func (this *QGraphicsView) Translate(dx float64, dy float64) {
	C.QGraphicsView_Translate(this.h, (C.double)(dx), (C.double)(dy))
}

func (this *QGraphicsView) CenterOn(pos *QPointF) {
	C.QGraphicsView_CenterOn(this.h, pos.cPointer())
}

func (this *QGraphicsView) CenterOn2(x float64, y float64) {
	C.QGraphicsView_CenterOn2(this.h, (C.double)(x), (C.double)(y))
}

func (this *QGraphicsView) CenterOnWithItem(item *QGraphicsItem) {
	C.QGraphicsView_CenterOnWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) EnsureVisible(rect *QRectF) {
	C.QGraphicsView_EnsureVisible(this.h, rect.cPointer())
}

func (this *QGraphicsView) EnsureVisible2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_EnsureVisible2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) EnsureVisibleWithItem(item *QGraphicsItem) {
	C.QGraphicsView_EnsureVisibleWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) FitInView(rect *QRectF) {
	C.QGraphicsView_FitInView(this.h, rect.cPointer())
}

func (this *QGraphicsView) FitInView2(x float64, y float64, w float64, h float64) {
	C.QGraphicsView_FitInView2(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h))
}

func (this *QGraphicsView) FitInViewWithItem(item *QGraphicsItem) {
	C.QGraphicsView_FitInViewWithItem(this.h, item.cPointer())
}

func (this *QGraphicsView) Render(painter *QPainter) {
	C.QGraphicsView_Render(this.h, painter.cPointer())
}

func (this *QGraphicsView) Items() []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items(this.h)
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPos(pos *QPoint) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithPos(this.h, pos.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) Items2(x int, y int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items2(this.h, (C.int)(x), (C.int)(y))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithRect(rect *QRect) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithRect(this.h, rect.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) Items3(x int, y int, w int, h int) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items3(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) ItemsWithPath(path *QPainterPath) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_ItemsWithPath(this.h, path.cPointer())
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) ItemAt(pos *QPoint) *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsView_ItemAt(this.h, pos.cPointer())))
}

func (this *QGraphicsView) ItemAt2(x int, y int) *QGraphicsItem {
	return UnsafeNewQGraphicsItem(unsafe.Pointer(C.QGraphicsView_ItemAt2(this.h, (C.int)(x), (C.int)(y))))
}

func (this *QGraphicsView) MapToScene(point *QPoint) *QPointF {
	_ret := C.QGraphicsView_MapToScene(this.h, point.cPointer())
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToSceneWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsView_MapToSceneWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene(point *QPointF) *QPoint {
	_ret := C.QGraphicsView_MapFromScene(this.h, point.cPointer())
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromSceneWithPath(path *QPainterPath) *QPainterPath {
	_ret := C.QGraphicsView_MapFromSceneWithPath(this.h, path.cPointer())
	_goptr := newQPainterPath(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapToScene2(x int, y int) *QPointF {
	_ret := C.QGraphicsView_MapToScene2(this.h, (C.int)(x), (C.int)(y))
	_goptr := newQPointF(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) MapFromScene2(x float64, y float64) *QPoint {
	_ret := C.QGraphicsView_MapFromScene2(this.h, (C.double)(x), (C.double)(y))
	_goptr := newQPoint(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) InputMethodQuery(query InputMethodQuery) *QVariant {
	_ret := C.QGraphicsView_InputMethodQuery(this.h, (C.int)(query))
	_goptr := newQVariant(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) BackgroundBrush() *QBrush {
	_ret := C.QGraphicsView_BackgroundBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetBackgroundBrush(brush *QBrush) {
	C.QGraphicsView_SetBackgroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) ForegroundBrush() *QBrush {
	_ret := C.QGraphicsView_ForegroundBrush(this.h)
	_goptr := newQBrush(_ret)
	_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	return _goptr
}

func (this *QGraphicsView) SetForegroundBrush(brush *QBrush) {
	C.QGraphicsView_SetForegroundBrush(this.h, brush.cPointer())
}

func (this *QGraphicsView) UpdateScene(rects []QRectF) {
	rects_CArray := (*[0xffff]*C.QRectF)(C.malloc(C.size_t(8 * len(rects))))
	defer C.free(unsafe.Pointer(rects_CArray))
	for i := range rects {
		rects_CArray[i] = rects[i].cPointer()
	}
	rects_ma := C.struct_miqt_array{len: C.size_t(len(rects)), data: unsafe.Pointer(rects_CArray)}
	C.QGraphicsView_UpdateScene(this.h, rects_ma)
}

func (this *QGraphicsView) InvalidateScene() {
	C.QGraphicsView_InvalidateScene(this.h)
}

func (this *QGraphicsView) UpdateSceneRect(rect *QRectF) {
	C.QGraphicsView_UpdateSceneRect(this.h, rect.cPointer())
}

func (this *QGraphicsView) RubberBandChanged(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF) {
	C.QGraphicsView_RubberBandChanged(this.h, viewportRect.cPointer(), fromScenePoint.cPointer(), toScenePoint.cPointer())
}
func (this *QGraphicsView) OnRubberBandChanged(slot func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF)) {
	C.QGraphicsView_connect_RubberBandChanged(this.h, C.intptr_t(cgo.NewHandle(slot)))
}

//export miqt_exec_callback_QGraphicsView_RubberBandChanged
func miqt_exec_callback_QGraphicsView_RubberBandChanged(cb C.intptr_t, viewportRect *C.QRect, fromScenePoint *C.QPointF, toScenePoint *C.QPointF) {
	gofunc, ok := cgo.Handle(cb).Value().(func(viewportRect QRect, fromScenePoint QPointF, toScenePoint QPointF))
	if !ok {
		panic("miqt: callback of non-callback type (heap corruption?)")
	}

	// Convert all CABI parameters to Go parameters
	viewportRect_ret := viewportRect
	viewportRect_goptr := newQRect(viewportRect_ret)
	viewportRect_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval1 := *viewportRect_goptr

	fromScenePoint_ret := fromScenePoint
	fromScenePoint_goptr := newQPointF(fromScenePoint_ret)
	fromScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval2 := *fromScenePoint_goptr

	toScenePoint_ret := toScenePoint
	toScenePoint_goptr := newQPointF(toScenePoint_ret)
	toScenePoint_goptr.GoGC() // Qt uses pass-by-value semantics for this type. Mimic with finalizer
	slotval3 := *toScenePoint_goptr

	gofunc(slotval1, slotval2, slotval3)
}

func QGraphicsView_Tr2(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr2(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_Tr3(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_Tr3(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf82(s string, c string) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_TrUtf82(s_Cstring, c_Cstring)
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func QGraphicsView_TrUtf83(s string, c string, n int) string {
	s_Cstring := C.CString(s)
	defer C.free(unsafe.Pointer(s_Cstring))
	c_Cstring := C.CString(c)
	defer C.free(unsafe.Pointer(c_Cstring))
	var _ms C.struct_miqt_string = C.QGraphicsView_TrUtf83(s_Cstring, c_Cstring, (C.int)(n))
	_ret := C.GoStringN(_ms.data, C.int(int64(_ms.len)))
	C.free(unsafe.Pointer(_ms.data))
	return _ret
}

func (this *QGraphicsView) SetRenderHint2(hint QPainter__RenderHint, enabled bool) {
	C.QGraphicsView_SetRenderHint2(this.h, (C.int)(hint), (C.bool)(enabled))
}

func (this *QGraphicsView) SetOptimizationFlag2(flag QGraphicsView__OptimizationFlag, enabled bool) {
	C.QGraphicsView_SetOptimizationFlag2(this.h, (C.int)(flag), (C.bool)(enabled))
}

func (this *QGraphicsView) SetMatrix2(matrix *QMatrix, combine bool) {
	C.QGraphicsView_SetMatrix2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) SetTransform2(matrix *QTransform, combine bool) {
	C.QGraphicsView_SetTransform2(this.h, matrix.cPointer(), (C.bool)(combine))
}

func (this *QGraphicsView) EnsureVisible22(rect *QRectF, xmargin int) {
	C.QGraphicsView_EnsureVisible22(this.h, rect.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible3(rect *QRectF, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible3(this.h, rect.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible5(x float64, y float64, w float64, h float64, xmargin int) {
	C.QGraphicsView_EnsureVisible5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible6(x float64, y float64, w float64, h float64, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible6(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) EnsureVisible23(item *QGraphicsItem, xmargin int) {
	C.QGraphicsView_EnsureVisible23(this.h, item.cPointer(), (C.int)(xmargin))
}

func (this *QGraphicsView) EnsureVisible32(item *QGraphicsItem, xmargin int, ymargin int) {
	C.QGraphicsView_EnsureVisible32(this.h, item.cPointer(), (C.int)(xmargin), (C.int)(ymargin))
}

func (this *QGraphicsView) FitInView22(rect *QRectF, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView22(this.h, rect.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView5(x float64, y float64, w float64, h float64, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView5(this.h, (C.double)(x), (C.double)(y), (C.double)(w), (C.double)(h), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) FitInView23(item *QGraphicsItem, aspectRadioMode AspectRatioMode) {
	C.QGraphicsView_FitInView23(this.h, item.cPointer(), (C.int)(aspectRadioMode))
}

func (this *QGraphicsView) Render2(painter *QPainter, target *QRectF) {
	C.QGraphicsView_Render2(this.h, painter.cPointer(), target.cPointer())
}

func (this *QGraphicsView) Render3(painter *QPainter, target *QRectF, source *QRect) {
	C.QGraphicsView_Render3(this.h, painter.cPointer(), target.cPointer(), source.cPointer())
}

func (this *QGraphicsView) Render4(painter *QPainter, target *QRectF, source *QRect, aspectRatioMode AspectRatioMode) {
	C.QGraphicsView_Render4(this.h, painter.cPointer(), target.cPointer(), source.cPointer(), (C.int)(aspectRatioMode))
}

func (this *QGraphicsView) Items22(rect *QRect, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items22(this.h, rect.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) Items5(x int, y int, w int, h int, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items5(this.h, (C.int)(x), (C.int)(y), (C.int)(w), (C.int)(h), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) Items24(path *QPainterPath, mode ItemSelectionMode) []*QGraphicsItem {
	var _ma C.struct_miqt_array = C.QGraphicsView_Items24(this.h, path.cPointer(), (C.int)(mode))
	_ret := make([]*QGraphicsItem, int(_ma.len))
	_outCast := (*[0xffff]*C.QGraphicsItem)(unsafe.Pointer(_ma.data)) // hey ya
	for i := 0; i < int(_ma.len); i++ {
		_ret[i] = UnsafeNewQGraphicsItem(unsafe.Pointer(_outCast[i]))
	}
	return _ret
}

func (this *QGraphicsView) InvalidateScene1(rect *QRectF) {
	C.QGraphicsView_InvalidateScene1(this.h, rect.cPointer())
}

func (this *QGraphicsView) InvalidateScene2(rect *QRectF, layers QGraphicsScene__SceneLayer) {
	C.QGraphicsView_InvalidateScene2(this.h, rect.cPointer(), (C.int)(layers))
}

// Delete this object from C++ memory.
func (this *QGraphicsView) Delete() {
	C.QGraphicsView_Delete(this.h)
}

// GoGC adds a Go Finalizer to this pointer, so that it will be deleted
// from C++ memory once it is unreachable from Go memory.
func (this *QGraphicsView) GoGC() {
	runtime.SetFinalizer(this, func(this *QGraphicsView) {
		this.Delete()
		runtime.KeepAlive(this.h)
	})
}
