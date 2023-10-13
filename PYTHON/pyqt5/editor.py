from PyQt5 import QtCore, QtGui, QtWidgets
from PyQt5.QtGui import QImage, QPixmap
from PIL import Image, ImageEnhance


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(1920, 1080)

        self.brightness_value = 0
        self.brightness_ctr = 0
        self.contrast_ctr = 0

        self.font = QtGui.QFont()
        self.font.setFamily("Iosevka Nerd Font Mono")
        self.font.setPointSize(11)
        self.font.setBold(False)
        self.font.setItalic(False)
        self.font.setWeight(50)
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.label = QtWidgets.QLabel(self.centralwidget)
        MainWindow.setCentralWidget(self.centralwidget)

        im = "F2004.jpg"

        self.image = Image.open(im)
        self.pixmap = QPixmap(im)
        self.label.setPixmap(self.pixmap)
        self.label.resize(self.pixmap.width(), self.pixmap.height())
        self.imagecopy = self.image

        self.edit_panel = QtWidgets.QWidget(self.centralwidget)
        self.edit_panel.setGeometry(QtCore.QRect(1620, 10, 200, 1000))
        self.edit_panel.setObjectName("widget_2")

        self.setupBrightness()
        self.setupContrast()
        self.setupVibrance()
        self.setupSharpness()

        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 1247, 18))
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")

        MainWindow.setMenuBar(self.menubar)

        self.actionSave = QtWidgets.QAction(MainWindow)
        self.actionSave.setObjectName("actionSave")
        self.actionSave_As = QtWidgets.QAction(MainWindow)
        self.actionSave_As.setObjectName("actionSave_As")
        self.actionQuit = QtWidgets.QAction(MainWindow)
        self.actionQuit.setObjectName("actionQuit")
        self.menuFile.addAction(self.actionSave)
        self.menuFile.addAction(self.actionSave_As)
        self.menuFile.addAction(self.actionQuit)
        self.menubar.addAction(self.menuFile.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)
        self.imagecopy = self.image
        self.image_temp = self.image

        self.Brightness_scroll.valueChanged.connect(lambda: self.brightnessChanged())
        self.Brightness_scroll.sliderReleased.connect(lambda: self.brightness_slider_released())
        self.Contrast_scroll.valueChanged.connect(lambda: self.contrastChanged())
        self.Contrast_scroll.sliderReleased.connect(lambda: self.contrast_slider_released())
        self.Vibrance_scroll.valueChanged.connect(lambda: self.vibranceChanged())
        self.Vibrance_scroll.sliderPressed.connect(lambda: self.slider_pressed())
        self.Sharpness_scroll.valueChanged.connect(lambda: self.sharpnessChanged())
        self.Sharpness_scroll.sliderPressed.connect(lambda: self.slider_pressed())

    def setupBrightness(self):
        self.Brightness = QtWidgets.QLabel(self.edit_panel)
        self.Brightness.setGeometry(QtCore.QRect(30, 250, 91, 16))
        self.Brightness.setFont(self.font)
        self.Brightness.setObjectName("Brightness")

        self.Brightness_scroll = QtWidgets.QSlider(self.edit_panel)
        self.Brightness_scroll.setGeometry(QtCore.QRect(30, 270, 160, 16))
        self.Brightness_scroll.setOrientation(QtCore.Qt.Horizontal)
        self.Brightness_scroll.setObjectName("Brightness_scroll")
        self.Brightness_scroll.setRange(0, 3000)
        self.Brightness_scroll.setSingleStep(2)
        self.Brightness_scroll.setValue(1000)

        self.Brightness_input_box = QtWidgets.QDoubleSpinBox(self.edit_panel)
        self.Brightness_input_box.setGeometry(QtCore.QRect(130, 250, 62, 22))
        self.Brightness_input_box.setObjectName("Brightness_input_box")

    def setupContrast(self):
        self.Contrast = QtWidgets.QLabel(self.edit_panel)
        self.Contrast.setGeometry(QtCore.QRect(30, 360, 91, 16))
        self.Contrast.setFont(self.font)
        self.Contrast.setObjectName("Contrast")

        self.Contrast_scroll = QtWidgets.QSlider(self.edit_panel)
        self.Contrast_scroll.setGeometry(QtCore.QRect(30, 380, 160, 16))
        self.Contrast_scroll.setOrientation(QtCore.Qt.Horizontal)
        self.Contrast_scroll.setObjectName("Contrast_scroll")
        self.Contrast_scroll.setRange(0, 3000)
        self.Contrast_scroll.setSingleStep(2)
        self.Contrast_scroll.setValue(1000)

        self.Contrast_input_box = QtWidgets.QDoubleSpinBox(self.edit_panel)
        self.Contrast_input_box.setGeometry(QtCore.QRect(130, 360, 62, 22))
        self.Contrast_input_box.setObjectName("Contrast_input_box")

    def setupVibrance(self):
        self.Vibrance = QtWidgets.QLabel(self.edit_panel)
        self.Vibrance.setGeometry(QtCore.QRect(30, 480, 91, 16))
        self.Vibrance.setFont(self.font)
        self.Vibrance.setObjectName("Vibrance")

        self.Vibrance_scroll = QtWidgets.QSlider(self.edit_panel)
        self.Vibrance_scroll.setGeometry(QtCore.QRect(30, 500, 160, 16))
        self.Vibrance_scroll.setOrientation(QtCore.Qt.Horizontal)
        self.Vibrance_scroll.setObjectName("Vibrance_scroll")
        self.Vibrance_scroll.setRange(0, 3000)
        self.Vibrance_scroll.setSingleStep(2)
        self.Vibrance_scroll.setValue(1000)

        self.Vibrance_input_box = QtWidgets.QDoubleSpinBox(self.edit_panel)
        self.Vibrance_input_box.setGeometry(QtCore.QRect(130, 480, 62, 22))
        self.Vibrance_input_box.setObjectName("Vibrance_input_box")

    def setupSharpness(self):
        self.Sharpness = QtWidgets.QLabel(self.edit_panel)
        self.Sharpness.setGeometry(QtCore.QRect(30, 610, 91, 16))
        self.Sharpness.setFont(self.font)
        self.Sharpness.setObjectName("Sharpness")

        self.Sharpness_scroll = QtWidgets.QSlider(self.edit_panel)
        self.Sharpness_scroll.setGeometry(QtCore.QRect(30, 630, 160, 16))
        self.Sharpness_scroll.setOrientation(QtCore.Qt.Horizontal)
        self.Sharpness_scroll.setObjectName("Sharpness")
        self.Sharpness_scroll.setRange(0, 3000)
        self.Sharpness_scroll.setSingleStep(2)
        self.Sharpness_scroll.setValue(1000)

        self.Sharpness_input_box = QtWidgets.QDoubleSpinBox(self.edit_panel)
        self.Sharpness_input_box.setGeometry(QtCore.QRect(130, 610, 62, 22))
        self.Sharpness_input_box.setObjectName("Sharpness_input_box")

    def brightnessChanged(self):
        if(self.brightness_ctr != 0):
            brightness_enhancer = ImageEnhance.Brightness(self.image)
            print(0)
        else:
            brightness_enhancer = ImageEnhance.Brightness(self.imagecopy)
            print(1)
        self.image_temp = brightness_enhancer.enhance(self.Brightness_scroll.value()/1000)
        self.pil2pixmap()
        self.brightness_ctr += 1

    def brightness_slider_released(self):
        self.imagecopy = self.image_temp
        self.contrast_ctr = 0

    def contrastChanged(self):
        if(self.contrast_ctr != 0):
            contrast_enhancer = ImageEnhance.Contrast(self.image)
        else:
            contrast_enhancer = ImageEnhance.Contrast(self.imagecopy)
        self.image_temp = contrast_enhancer.enhance(self.Contrast_scroll.value()/1000)
        self.pil2pixmap()
        self.contrast_ctr += 1

    def contrast_slider_released(self):
        self.imagecopy = self.image_temp
        self.brightness_ctr = 0

    def vibranceChanged(self):
        self.image_temp = self.image
        vibrance_enhancer = ImageEnhance.Color(self.image)

        self.image_temp = vibrance_enhancer.enhance(self.Vibrance_scroll.value()/1000)
        self.pil2pixmap()
        self.label.setPixmap(self.pixmap)
        self.label.resize(self.pixmap.width(), self.pixmap.height())

        self.Vibrance_scroll.sliderReleased.connect(lambda: self.slider_released())
    def sharpnessChanged(self):
        self.image_temp = self.image
        sharpness_enhancer = ImageEnhance.Sharpness(self.image)

        self.image_temp = sharpness_enhancer.enhance(self.Sharpness_scroll.value()/1000)
        self.pil2pixmap()
        self.label.setPixmap(self.pixmap)
        self.label.resize(self.pixmap.width(), self.pixmap.height())

        self.Sharpness_scroll.sliderReleased.connect(lambda: self.slider_released())

    def pil2pixmap(self):
        if (self.image_temp.mode == "RGB"):
            r, g, b = self.image_temp.split()
            self.image_temp = Image.merge("RGB", (b, g, r))
        elif (self.image_temp.mode == "RGBA"):
            r, g, b, a = self.image_temp.split()
            self.image_temp = Image.merge("RGBA", (b, g, r, a))
        elif (self.image_temp.mode == "L"):
            self.image_temp = self.image_temp.convert("RGBA")

        im2 = self.image_temp.convert("RGBA")
        data = im2.tobytes("raw", "RGBA")
        qim = QtGui.QImage(data, self.image_temp.size[0], self.image_temp.size[1], QtGui.QImage.Format_ARGB32)
        pixmap = QPixmap.fromImage(qim)
        self.label.setPixmap(pixmap)
        self.label.resize(pixmap.width(), pixmap.height())
    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.Brightness.setText(_translate("MainWindow", "Brightness"))
        self.Contrast.setText(_translate("MainWindow", "Contrast"))
        self.Vibrance.setText(_translate("MainWindow", "Vibrance"))
        self.Sharpness.setText(_translate("MainWindow", "Sharpness"))
        self.menuFile.setTitle(_translate("MainWindow", "File"))
        self.actionSave.setText(_translate("MainWindow", "Save"))
        self.actionSave.setShortcut(_translate("MainWindow", "Ctrl+S"))
        self.actionSave_As.setText(_translate("MainWindow", "Save As"))
        self.actionSave_As.setShortcut(_translate("MainWindow", "Ctrl+Shift+S"))
        self.actionQuit.setText(_translate("MainWindow", "Quit"))
        self.actionQuit.setShortcut(_translate("MainWindow", "Ctrl+Q"))


if __name__ == "__main__":
    import sys
    app = QtWidgets.QApplication(sys.argv)
    MainWindow = QtWidgets.QMainWindow()
    ui = Ui_MainWindow()
    ui.setupUi(MainWindow)
    MainWindow.show()
    sys.exit(app.exec_())
