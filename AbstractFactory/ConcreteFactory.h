#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "AbstractFactory.h"
#include "ConcreteProduct.h"

class ConcreteFactory
{
public:
    ConcreteFactory();
};


class BenzFactory :public AbstractFactory
{
public:
    JCar* createCar() Q_DECL_OVERRIDE
    {
        return new BenzCar;
    }

    JBike* createBike() Q_DECL_OVERRIDE
    {
        return new BenzBike;
    }
};


class BwmFactory :public AbstractFactory
{
public:
    JCar* createCar() Q_DECL_OVERRIDE
    {
        return new BwmCar;
    }

    JBike* createBike() Q_DECL_OVERRIDE
    {
        return new BwmBike;
    }
};

class AudiFactory :public AbstractFactory
{
public:
    JCar* createCar() Q_DECL_OVERRIDE
    {
        return new AudiCar;
    }

    JBike* createBike() Q_DECL_OVERRIDE
    {
        return new AudiBike;
    }
};

#endif // CONCRETEFACTORY_H
