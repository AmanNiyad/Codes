from PyQt6 import QtCore, QtGui, QtWidgets


class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(966, 649)
        self.centralwidget = QtWidgets.QWidget(parent=MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.centralFrame = QtWidgets.QFrame(self.centralwidget)
        self.centralFrame.setGeometry(0, 0, 950, 621)
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.centralFrame)
        self.horizontalLayout.setStretch(1,1)
        self.frame = QtWidgets.QFrame(parent=self.centralFrame)
        self.frame.setGeometry(QtCore.QRect(0, 0, 40, 621))
        self.frame.setFrameShape(QtWidgets.QFrame.Shape.StyledPanel)
        self.frame.setFrameShadow(QtWidgets.QFrame.Shadow.Raised)
        self.frame.setObjectName("frame")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.frame)
        self.verticalLayout.setContentsMargins(5, 0, 5, 0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.ToggleButton = QtWidgets.QPushButton(parent=self.frame)
        self.ToggleButton.setObjectName("ToggleButton")
        self.verticalLayout.addWidget(self.ToggleButton)
        self.pushButton_2 = QtWidgets.QPushButton(parent=self.frame)
        self.pushButton_2.setObjectName("pushButton_2")
        self.verticalLayout.addWidget(self.pushButton_2)
        self.pushButton_3 = QtWidgets.QPushButton(parent=self.frame)
        self.pushButton_3.setObjectName("pushButton_3")
        self.verticalLayout.addWidget(self.pushButton_3)
        self.pushButton_4 = QtWidgets.QPushButton(parent=self.frame)
        self.pushButton_4.setObjectName("pushButton_4")
        self.verticalLayout.addWidget(self.pushButton_4)
        self.pushButton_5 = QtWidgets.QPushButton(parent=self.frame)
        self.pushButton_5.setObjectName("pushButton_5")
        self.verticalLayout.addWidget(self.pushButton_5)
        self.frame_2 = QtWidgets.QFrame(parent=self.centralFrame)
        self.frame_2.setGeometry(QtCore.QRect(220, 0, 741, 621))
        self.frame_2.setFrameShape(QtWidgets.QFrame.Shape.StyledPanel)
        self.frame_2.setFrameShadow(QtWidgets.QFrame.Shadow.Raised)
        self.frame_2.setObjectName("frame_2")
        self.label = QtWidgets.QLabel(parent=self.frame_2)
        self.label.setGeometry(QtCore.QRect(250, 160, 261, 311))
        self.label.setObjectName("label")
        MainWindow.setCentralWidget(self.centralwidget)
        self.statusbar = QtWidgets.QStatusBar(parent=MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)


        self.Side_Menu_Pos = 0
        self.ToggleButton.clicked.connect(lambda: self.side_Menu_Def_0())


        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def side_Menu_Def_0(self):
        if self.Side_Menu_Pos == 0:
            self.animation1 = QtCore.QPropertyAnimation(self.frame, b"maximumWidth")
            self.animation1.setDuration(500)
            self.animation1.setStartValue(40)
            self.animation1.setEndValue(220)
            self.animation1.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
            self.animation1.start()

            self.animation2 = QtCore.QPropertyAnimation(self.frame, b"minimumWidth")
            self.animation2.setDuration(500)
            self.animation2.setStartValue(40)
            self.animation2.setEndValue(220)
            self.animation2.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
            self.animation2.start()
            self.Side_Menu_Pos = 1
        else:
            self.animation1 = QtCore.QPropertyAnimation(self.frame, b"maximumWidth")
            self.animation1.setDuration(500)
            self.animation1.setStartValue(220)
            self.animation1.setEndValue(40)
            self.animation1.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
            self.animation1.start()

            self.animation2 = QtCore.QPropertyAnimation(self.frame, b"minimumWidth")
            self.animation2.setDuration(500)
            self.animation2.setStartValue(220)
            self.animation2.setEndValue(40)
            self.animation2.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
            self.animation2.start()
            self.Side_Menu_Pos = 0

        def side_Menu_Def_2(self, Event):
            if Event.button() == QtCore.Qt.LeftButton:
                if self.Side_Menu_Pos == 1:
                    self.animation1 = QtCore.QPropertyAnimation(self.frame, b"maximumWidth")
                    self.animation1.setDuration(500)
                    self.animation1.setStartValue(220)
                    self.animation1.setEndValue(40)
                    self.animation1.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
                    self.animation1.start()

                    self.animation2 = QtCore.QPropertyAnimation(self.frame, b"minimumWidth")
                    self.animation2.setDuration(500)
                    self.animation2.setStartValue(220)
                    self.animation2.setEndValue(40)
                    self.animation2.setEasingCurve(QtCore.QEasingCurve.Type.InOutQuad)
                    self.animation2.start()
                    self.Side_Menu_Pos = 0
                else: 
                    pass


    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow"))
        self.ToggleButton.setText(_translate("MainWindow", "Press MEE"))
        self.pushButton_2.setText(_translate("MainWindow", "PushButton"))
        self.pushButton_3.setText(_translate("MainWindow", "PushButton"))
        self.pushButton_4.setText(_translate("MainWindow", "PushButton"))
        self.pushButton_5.setText(_translate("MainWindow", "PushButton"))
        self.label.setText(_translate("MainWindow", "TEXT"))


import sys

app =QtWidgets.QApplication(sys.argv)
MainWindow = QtWidgets.QMainWindow()
ui = Ui_MainWindow()
ui.setupUi(MainWindow)
MainWindow.show()
sys.exit(app.exec())
