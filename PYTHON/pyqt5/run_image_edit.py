import sys
from PyQt5 import QtCore, QtGui
from image_edit_window import Ui_MainWindow

class main(QtGui.QMainWindow, Ui_MainWindow):
    def __init__(self):
        QtGui.QMainWindow.__init__(self)
        self.setupUi(self)

    def browse(self):

