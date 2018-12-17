#include "IReciever.h"
#include <QDebug>

IReciever::IReciever()
{

}


Caculator::Caculator(float price)
{
    m_price = price;
}

void Caculator::setType(Types type)
{
    m_type = type;
}

int Caculator::getResult()
{
    int result =0;
    switch(m_type)
    {
    case e_Ali:
        result = m_price*0.8;
        qDebug()<<"Alibaba price after discount ="<<result;
        break;
    case e_Tx:
        result = m_price;
        qDebug()<<" tx price ="<<m_price;
        break;
    }
    return result;
}
