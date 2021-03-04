#include <QCoreApplication>

#include "worker.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QList<QHostAddress> list = QNetworkInterface::allAddresses();

//    for( int i = 0; i < list.count(); ++i )
//    {
//        QHostAddress address = list.at(i);

//        qInfo() << address.toString();

//        qInfo() << "\t Loopback: " << address.isLoopback();

//        qInfo() << "\t Muilticast: " << address.isMulticast();

//        switch( address.protocol() )
//        {
//            case QAbstractSocket::UnknownNetworkLayerProtocol :
//                qInfo() << "\t Protocol: Unknown";
//                break;

//            case QAbstractSocket::AnyIPProtocol :
//                qInfo() << "\t Protocol: Any";
//                break;

//            case QAbstractSocket::IPv4Protocol :
//                qInfo() << "\t Protocol: IPv4";
//                break;

//            case QAbstractSocket::IPv6Protocol :
//                qInfo() << "\t Protocol: IPv6";
//                break;
//        }
//    }

    Worker worker;

    worker.start();

    return a.exec();
}

