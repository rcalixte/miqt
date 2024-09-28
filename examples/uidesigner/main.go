package main

import (
	"fmt"
	"os"

	"github.com/mappu/miqt/qt"
)

func main() {

	qt.NewQApplication(os.Args)

	ui := NewMainWindowUi()
	ui.MainWindow.Show()

	qt.QApplication_Exec()

	fmt.Println("OK!")
}
