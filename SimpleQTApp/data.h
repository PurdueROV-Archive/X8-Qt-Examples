#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT

    //Property Messages that returns data from Messages() and gets updated when MessagesChanged is called
    Q_PROPERTY(QString Messages READ Messages NOTIFY MessagesChanged)


public:

    //Contructor and Deconstructor
    Data();
    ~Data();

    //Function is called when Messages is trying to be read
    QString Messages();



signals:
    //Emit when Messages is changed
    void MessagesChanged();

//Additional Methods that can be called
public slots:

    //Function to add a message to our string
    void AddMessage(QString message);


private:
    //Holds message data
    QString messages;


};

#endif // DATA_H
