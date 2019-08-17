import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.4
import Imagepro 1.1


Window {
    id:vMainwindow;
    visible: true
    width: 1280
    height: 720
    title: qsTr("ImageProviderTest")

    Rectangle
    {
        id:displayArea;
        anchors.fill: parent;
        anchors.topMargin: 50
        anchors.bottomMargin: 100
        anchors.leftMargin: 100
        anchors.rightMargin: 100
        color: "#bbbbbb";

        Image {
            id:bg;
            source: "qml/images/w.jpg";
        }

        Column
        {
            Image {
                id: img
                source: "qml/images/q.jpg"
            }

//            Image{ source: "image://colors/black" }
//            Image{ source: "image://colors/blue" }

            Image{ source: "image://colors/hello" }

        }
    }

    Button
    {
        id: selectButton;
        anchors.bottom: parent.bottom;
        anchors.bottomMargin: 20;
        anchors.horizontalCenter: parent.horizontalCenter;
        width: parent.width-200;
        height: 50;
        text: "Select Image File";

        ImageProItem
        {
            id: imageItem;
        }
        onClicked:
        {
//            qDebug("clicked");
            imageItem.openImage();

        }
    }

}

























