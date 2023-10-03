from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtGui import QPixmap
from PIL import Image
import glob


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1241, 939)
        self.currentImagePos = 0
        self.image_list = []

        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)

        self.label.setGeometry(QtCore.QRect(0, 0, 1241, 741))
        self.label.setObjectName("label")

        self.button1 = QtWidgets.QPushButton(self.centralwidget)
        self.button1.setGeometry(QtCore.QRect(430, 800, 101, 61))
        self.button1.setObjectName("button1")

        self.button2 = QtWidgets.QPushButton(self.centralwidget)
        self.button2.setGeometry(QtCore.QRect(670, 800, 101, 61))
        self.button2.setObjectName("button2")

        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 1241, 18))
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        MainWindow.setMenuBar(self.menubar)

        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)

        self.actionImport = QtWidgets.QAction(MainWindow)
        self.actionImport.setObjectName("actionImport")
        self.menuFile.addAction(self.actionImport)
        self.menubar.addAction(self.menuFile.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

        self.actionImport.triggered.connect(lambda: self.importImages())
        self.button1.clicked.connect(lambda: self.prevImage())
        self.button2.clicked.connect(lambda: self.nextImage())

    def importImages(self):
        self.image_list = [filename for i in
                          [glob.glob('/home/aman/Codes/PYTHON/pyqt5/*.%s' %ext)
                           for ext in ["jpg", "png", "jpeg", "tiff", "arw"]]for filename in i]

        self.numberOfFiles = len(self.image_list)

    def nextImage(self):
        print(self.currentImagePos)
        print(self.numberOfFiles)

        if (self.currentImagePos >= 0 and self.currentImagePos + 1 < self.numberOfFiles):
            self.currentImagePos += 1
        elif (self.currentImagePos + 1 >= self.numberOfFiles):
            self.currentImagePos = 0

        self.currentImage = self.image_list[self.currentImagePos]
        self.pixmap = QPixmap(self.currentImage)
        self.label.setPixmap(self.pixmap)
        self.label.resize(self.pixmap.width(), self.pixmap.height())

    def prevImage(self):
        print(self.currentImagePos)
        print(self.numberOfFiles)
        if (self.currentImagePos == 0):
            self.currentImagePos = self.numberOfFiles - 1
        elif (self.currentImagePos <= self.numberOfFiles - 1  and self.currentImagePos > 0):
            self.currentImagePos -= 1
        elif (self.currentImagePos - 1 >= self.numberOfFiles):
            self.currentImagePos = 0

        self.currentImage = self.image_list[self.currentImagePos]
        self.pixmap = QPixmap(self.currentImage)
        self.label.setPixmap(self.pixmap)
        self.label.resize(self.pixmap.width(), self.pixmap.height())



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



if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
