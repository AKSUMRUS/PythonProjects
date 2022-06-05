import sys

from PyQt5.QtGui import QGuiApplication
from PyQt5.QtGui import QIcon
from PyQt5.QtQml import QQmlApplicationEngine

app = QGuiApplication(sys.argv)
app.setWindowIcon(QIcon("./gfx/icon.png"))

engine = QQmlApplicationEngine()
engine.quit.connect(app.quit)
engine.load('./UI/main.qml')

sys.exit(app.exec())
