package main

import (
	"go/format"
	"strings"
)

func collectClassNames_Widget(u UiWidget) []string {
	var ret []string
	if u.Name != "" {
		ret = append(ret, u.Name+" *qt."+u.Class)
	}
	for _, w := range u.Widgets {
		ret = append(ret, collectClassNames_Widget(w)...)
	}
	if u.Layout != nil {
		for _, li := range u.Layout.Items {
			ret = append(ret, collectClassNames_Widget(li.Widget)...)
		}
	}
	for _, a := range u.Actions {
		ret = append(ret, a.Name+" *qt.QAction")
	}
	return ret
}

func collectClassNames(u UiFile) []string {
	var ret []string
	for _, w := range u.Widget {
		ret = append(ret, collectClassNames_Widget(w)...)
	}
	return ret
}

func generate(packageName string, u UiFile) ([]byte, error) {
	ret := strings.Builder{}
	ret.WriteString(`package ` + packageName + `
	
import (
	"github.com/mappu/miqt"
)

type ` + u.Class + `Ui struct {
	` + strings.Join(collectClassNames(u), "\n") + `
}

func New` + u.Class + `Ui() *` + u.Class + `Ui {
	ui := &` + u.Class + `Ui{}
	`)

	// ...

	ret.WriteString(`
	return ui
}

func (u *` + u.Class + `Ui) RetranslateUi() {
	panic("TODO")
}

	`)

	output := ret.String()
	return format.Source([]byte(output))
}
