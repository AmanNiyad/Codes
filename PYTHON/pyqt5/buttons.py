from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow
import sys

def buttonPress(label):
    print("YAY! BUTTON IS CLICKED")
    label.setText("YAY! BUtton was clicked")

def window():
    app = QApplication(sys.argv)
    win = QMainWindow()
    win.setGeometry(200,200,300,300)
    win.setWindowTitle("TEST!")

    label = QtWidgets.QLabel(win)
    label.setText("LABEL")
    label.move(50,50)

    b1 = QtWidgets.QPushButton(win)
    b1.setText("CLICK!!")
    b1.clicked.connect(lambda: buttonPress(label))

    win.show()
    sys.exit(app.exec_())

window()
