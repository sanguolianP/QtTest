import QtQuick 2.9
import QtQuick.Window 2.2


Window {
    id:vMainwindow;
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Rectangle
    {
        id:displayArea;
        anchors.fill: parent;
        anchors.topMargin: 50
        anchors.bottomMargin: 50
        anchors.leftMargin: 50
        anchors.rightMargin: 50
        color: "#bbbbbb";

        Column
        {
            Image {
                id: img
                source: "images1/WindowBG.png"
            }

//            Image{ source: "image://colors/black" }
//            Image{ source: "image://colors/blue" }



            Image{ source: "image://colors/hello" }



        }


    }

}

























