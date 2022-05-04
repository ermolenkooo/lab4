import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.5   // это версия библиотеки, содержащей Contol (аналоги виджетов) для версии Qt 5.6
import QtQuick.Layouts 1.2


Window {
    id: root
    modality: Qt.ApplicationModal  // окно объявляется модальным
    title: qsTr("Добавление информации о реке")
    minimumWidth: 400
    maximumWidth: 400
    minimumHeight: 200
    maximumHeight: 200

    property bool isEdit: false
    property int currentIndex: -1

    GridLayout {
        anchors { left: parent.left; top: parent.top; right: parent.right; bottom: buttonCancel.top; margins: 10 }
        columns: 2

        Label {
                Layout.alignment: Qt.AlignRight  // выравнивание по правой стороне
                text: qsTr("Название реки:")
            }
            TextField {
                id: textName
                Layout.fillWidth: true
                placeholderText: qsTr("Введите название")
            }
            Label {
                Layout.alignment: Qt.AlignRight
                text: qsTr("Протяженность:")
            }
            TextField {
                id: textLenght
                Layout.fillWidth: true
                placeholderText: qsTr("Введите длину")
            }
            Label {
                Layout.alignment: Qt.AlignRight
                text: qsTr("Куда впадает?:")
            }
            TextField {
                id: textFlow
                Layout.fillWidth: true
                placeholderText: qsTr("Введите, куда впадает река")
            }
            Label {
                Layout.alignment: Qt.AlignRight
                text: qsTr("Годовой сток:")
            }
            TextField {
                id: textRunoff
                Layout.fillWidth: true
                placeholderText: qsTr("Введите годовой сток")
            }
            Label {
                Layout.alignment: Qt.AlignRight
                text: qsTr("Площадь бассейна:")
            }
            TextField {
                id: textArea
                Layout.fillWidth: true
                placeholderText: qsTr("Введите площадь бассейна")
            }
    }

    Button {
        anchors { right: buttonCancel.left; verticalCenter: buttonCancel.verticalCenter; rightMargin: 10 }
        text: qsTr("ОК")
        width: 100
        onClicked: {
            root.hide()
            if (currentIndex<0)
            {
                add(textName.text, textLenght.text, textFlow.text, textRunoff.text, textArea.text)
            }
            else
            {
                edit(textName.text, textLenght.text, textFlow.text, textRunoff.text, textArea.text, root.currentIndex)
            }

        }
    }

    Button {
        id: buttonCancel
        anchors { right: parent.right; bottom: parent.bottom; rightMargin: 10; bottomMargin: 10 }
        text: qsTr("Отменить")
        width: 100
        onClicked: {
             root.hide()
        }
    }

    // изменение статуса видимости окна диалога
    onVisibleChanged: {
      if (visible && currentIndex < 0) {
          textName.text = ""
          textLenght.text = ""
          textFlow.text = ""
          textRunoff.text = ""
          textArea.text = ""
      }
    }

    function execute(name, lenght, flow, runoff, area, index){
            textName.text = name
            textLenght.text = lenght
            textFlow.text = flow
            textRunoff.text = runoff
            textArea.text = area
            root.currentIndex = index

            root.show()
        }
 }
