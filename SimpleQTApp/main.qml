import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.2

Window {
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true
    color: "#151515"


    Rectangle {
        id: textbox
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: textInputBox.top
        anchors.margins: 20
        color: "#222222"

        Text {
            id: textView
            text: Data.Messages
            color: "white"
            font.pixelSize: 20
            anchors.fill: parent
            anchors.margins: 10
            width: parent.width
            wrapMode: Text.Wrap
        }
    }

    Rectangle {
        id: textInputBox
        height: 30
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        anchors.right: send.left
        anchors.margins: 20
        color: "#222222"

        TextInput {
            id: textInput
            anchors.fill: parent
            anchors.margins: 5
            height: 20
            text: ""
            color: "white"
            font.pixelSize: 20
            selectByMouse: true
            clip: true
            focus: true
            Keys.onReturnPressed: updateText()
        }
    }

    Button {
        id: send
        text: "Send"
        width: 60
        height: 30
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 20
        onClicked: updateText()
    }

    function updateText() {
        Data.AddMessage(textInput.text);
        textInput.text = "";
    }

}









