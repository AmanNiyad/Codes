from PyQt6 import QtCore, QtGui, QtWidgets, QtCore
from PyQt6.QtGui import QPixmap, QAction
from PyQt6.QtCore import Qt
from PyQt6.QtWidgets import QMessageBox
import glob
import editor2

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1920, 1080)
        self.currentImagePos = 0
        self.image_list = []

        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)
        self.label.setAlignment(Qt.AlignmentFlag.AlignHCenter)

        self.label.setGeometry(QtCore.QRect(0, 10, 1920, 950))
        self.label.setObjectName("label")

        self.button1 = QtWidgets.QPushButton(self.centralwidget)
        self.button1.setGeometry(QtCore.QRect(310, 975, 100, 45))
        self.button1.setObjectName("button1")

        self.button2 = QtWidgets.QPushButton(self.centralwidget)
        self.button2.setGeometry(QtCore.QRect(1510, 975, 100, 45))
        self.button2.setObjectName("button2")

        self.button3 = QtWidgets.QPushButton(self.centralwidget)
        self.button3.setGeometry(QtCore.QRect(900, 975, 100, 45))
        self.button3.setObjectName("button3")

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 1980, 18))
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        MainWindow.setMenuBar(self.menubar)

        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        self.statusbar.setVisible(False)
        MainWindow.setStatusBar(self.statusbar)

        self.actionImport = QAction(MainWindow)
        self.actionImport.setObjectName("actionImport")
        self.menuFile.addAction(self.actionImport)
        self.menubar.addAction(self.menuFile.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

        self.actionImport.triggered.connect(lambda: self.importImages())

        self.button1.clicked.connect(lambda: self.prevImage())
        self.button2.clicked.connect(lambda: self.nextImage())
        self.button3.clicked.connect(lambda: self.editWindow(MainWindow))

    def showPopupCritical(self, message):
        msg = QMessageBox()
        msg.setWindowTitle("ERROR!")
        msg.setText(message)
        msg.setInformativeText("Import files to begin viewing.")
        msg.setDetailedText("Press Ctrl+O or look at the \"File\" menu to import files.")
        msg.setIcon(QMessageBox.Icon.Critical)
        msg.setStandardButtons(QMessageBox.StandardButton.Ok)

        x = msg.exec()

    def importImages(self):
        self.folderpath = QtWidgets.QFileDialog.getExistingDirectory(None, 'Select Folder')
        self.image_list = [filename for i in
                          [glob.glob(self.folderpath + '/*.%s' %ext)
                           for ext in ["jpg", "png", "jpeg", "tiff", "arw"]]for filename in i]
        self.numberOfFiles = len(self.image_list)
        self.nextImage()

    def nextImage(self):
        try:
            if (self.currentImagePos >= 0 and self.currentImagePos + 1 < self.numberOfFiles):
                self.currentImagePos += 1
            elif (self.currentImagePos + 1 >= self.numberOfFiles):
                self.currentImagePos = 0

            self.currentImage = self.image_list[self.currentImagePos]
            self.pixmap = QPixmap(self.currentImage)
            self.label.setPixmap(self.pixmap.scaled(self.label.width(),self.label.height(),QtCore.Qt.AspectRatioMode.KeepAspectRatio))
        except AttributeError:
            self.showPopupCritical("No input files.")

    def prevImage(self):
        try:
            if (self.currentImagePos == 0):
                self.currentImagePos = self.numberOfFiles - 1
            elif (self.currentImagePos <= self.numberOfFiles - 1  and self.currentImagePos > 0):
                self.currentImagePos -= 1
            elif (self.currentImagePos - 1 >= self.numberOfFiles):
                self.currentImagePos = 0

            self.currentImage = self.image_list[self.currentImagePos]
            self.pixmap = QPixmap(self.currentImage)
            self.label.setPixmap(self.pixmap.scaled(self.label.width(),self.label.height(),QtCore.Qt.AspectRatioMode.KeepAspectRatio))
        except AttributeError:
            self.showPopupCritical("No input files.")

    def editWindow(self, MainWindow):
        try:
            editor = editor2.Ui_MainWindow()
            editor.setupUi(MainWindow, self.currentImage)
        except AttributeError:
            self.showPopupCritical("No image to edit!")

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.menuFile.setTitle(_translate("MainWindow", "File"))
        self.actionImport.setText(_translate("MainWindow", "Import"))
        self.actionImport.setStatusTip(_translate("MainWindow", "Import images from the directory"))
        self.actionImport.setShortcut(_translate("MainWindow", "Ctrl+O"))
        self.button1.setText(_translate("MainWindow", "Previous"))
        self.button1.setStatusTip(_translate("MainWindow", "Previous Image"))
        self.button2.setText(_translate("MainWindow", "Next"))
        self.button2.setStatusTip(_translate("MainWindow", "Next Image"))
        self.button3.setText(_translate("MainWindow", "Edit"))
    

if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec())
