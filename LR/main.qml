import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.5  // это версия библиотеки, содержащей Contol (аналоги виджетов) для версии Qt 5.6
import QtQuick.Layouts 1.2


Window {
    visible: true
    width: 800
    height: 550
    title: qsTr("Справочник гидролога")

    // объявляется системная палитра
    SystemPalette {
          id: palette;
          colorGroup: SystemPalette.Active
       }

    Rectangle{
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.right: parent.right
        anchors.bottom: btnAdd.top
        anchors.bottomMargin: 8
        border.color: "gray"
    ScrollView {
        anchors.fill: parent
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 15
        //flickableItem.interactive: true  // сохранять свойство "быть выделенным" при потере фокуса мыши
        Text {
            anchors.fill: parent
            text: "Could not connect to SQL"
            color: "red"
            font.pointSize: 20
            font.bold: true
            visible: IsConnectionOpen === false
        }
        ListView {
            id: rivList
            anchors.fill: parent
            model: riverModel // назначение модели, данные которой отображаются списком
            delegate: DelegateForRiver{}
            clip: true //
            activeFocusOnTab: true  // реагирование на перемещение между элементами ввода с помощью Tab
            focus: true  // элемент может получить фокус
            //opacity: {if (IsConnectionOpen === true) {100} else {0}}
        }
    }
   }

    Button {
        id: btnAdd
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.rightMargin: 8
        anchors.right:btnEdit.left
        text: "Добавить"
        width: 100

        onClicked: {
            windowAddEdit.currentIndex = -1
            windowAddEdit.show()
        }
    }

    Button {
        id: btnEdit
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.right: btnDel.left
        anchors.rightMargin: 8
        text: "Редактировать"
        width: 100
        onClicked: {
            var nameR = rivList.currentItem.riverData.NameOfRiver
            var lenghtR = rivList.currentItem.riverData.LenghtOfRiver
            var flowR = rivList.currentItem.riverData.FlowOfRiver
            var runoffR = rivList.currentItem.riverData.RunoffOfRiver
            var areaR = rivList.currentItem.riverData.AreaOfRiver
            var rID = rivList.currentItem.riverData.Id_river

            windowAddEdit.execute(nameR, lenghtR, flowR, runoffR, areaR, rID)
        }
    }

    Button {
        id: btnDel
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 8
        anchors.right:parent.right
        anchors.rightMargin: 8
        text: "Удалить"
        width: 100
        enabled: {
            if (rivList.currentItem==null || rivList.currentItem.riverData == null)
            {false}
            else
            {rivList.currentItem.riverData.Id_river >= 0} }
        onClicked: del(rivList.currentItem.riverData.Id_river)
    }

    DialogForAddorEdit {
        id: windowAddEdit
    }
}
