#include "ConcreteStrategy.h"

#include <QDebug>

double NewCustomerStrategy::getPrice(double money)
{
    qDebug()<<"sorry , new customer has not discount!";
    return money;
}

double OldCustomerStrategy::getPrice(double money)
{
    qDebug()<<"oh , old customer has ten percents discount!";
    return money*0.9;
}

double VipCustomerSrategy::getPrice(double money)
{
    qDebug()<<"oh , vip customer has twteen percents discount!";
    return money*0.8;
}
