import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15
import com.mycompany.qmlcomponents 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    SocketClient {
        id: socketClient
    }

    Grid {
        rows: 4
        Repeater {
            model: ["forward", "backward", "left", "right", "lookLeft", "lookRight"]
            delegate: Button {
                text: modelData
                onPressed: socketClient.send(modelData + "Start")
                onReleased: socketClient.send(modelData + "Stop")
            }
        }
        Button {
            text: "connect"
            onClicked: socketClient.connect()
        }
    }
}
