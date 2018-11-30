#ifndef CONCRETEPRODUCT_H
#define CONCRETEPRODUCT_H

#include "JProduct.h"
#include <QObject>

class ConcreteProduct
{
public:
    ConcreteProduct();
};


// 抽象出各类型的汽车
class BenzCar :public JCar
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "BenZ car";
    }
};

class BwmCar :public JCar
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "BWM car";
    }
};

class AudiCar :public JCar
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "Audi car";
    }
};

// 抽象出各类型的自行车
class BenzBike :public JBike
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "Benz bike";
    }
};

class BwmBike :public JBike
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "BWM bike";
    }
};

class AudiBike :public JBike
{
public:
    QString name() Q_DECL_OVERRIDE
    {
        return "Audi bike";
    }
};



#endif // CONCRETEPRODUCT_H
