import QtQuick 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
	visible: true
	width: 600
	height: 500
	title: "HelloApp"

	Rectangle {
		x: 300
		y: 300
		width: 200
		height: 200
		color: 'red'

		Text {
			anchors.centerIn: parent
			text: "Hello, World"
			font.pixelSize: 24
		}
	}
}