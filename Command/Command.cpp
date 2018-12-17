#include "Command.h"

#include <QDebug>

Command::Command(IReciever* reciver)
{
    m_pReciver = reciver;
}


AliPay::AliPay(IReciever *reciver):Command(reciver)
{

}

int AliPay::pay()
{
    qDebug()<<"ali pay :....";
}

TxPay::TxPay(IReciever* reciver):Command(reciver)
{

}

int TxPay::pay()
{
    qDebug()<<"tx pay :....";
}
