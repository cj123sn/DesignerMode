#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "JProduct.h"

// 抽象工厂类,只声明方法不具体实现
class AbstractFactory
{
public:
    enum FactoryType
    {
        e_BWM,
        e_Benz,
        e_Audi,
    };


public:
    virtual JCar* createCar() = 0;          // 造车
    virtual JBike* createBike() =0;         // 造自行车

    static AbstractFactory* createFactory(FactoryType type);

    AbstractFactory();
};

#endif // ABSTRACTFACTORY_H
