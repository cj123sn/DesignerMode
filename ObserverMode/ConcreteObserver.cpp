#include "ConcreteObserver.h"

#include<QDebug>

ConcreteObserver::ConcreteObserver(QString obName)
{
    m_sObName = obName;
}

void ConcreteObserver::UpdatePrice(float price)
{
    qDebug()<<"name:"<<m_sObName<<"---price:"<<price;
}

