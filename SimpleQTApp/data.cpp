#include "data.h"
#include <QDebug>

Data::Data() {
    messages = "";
}


QString Data::Messages() {
    return messages;
}

void Data::AddMessage(QString message) {

    //Error checking
    if (message == NULL) return;
    if (message.length() == 0) return;


    messages += message + "\n";

    qDebug() << messages;

    //Emit the signal becaues we updated message
    emit MessagesChanged();

}


Data::~Data() {

}
