#ifndef JPRODUCT_H
#define JPRODUCT_H

#include <QString>

class JProduct
{
public:
    JProduct();
};


class JBike
{
public:
    virtual QString name() =0;      // 自行车名称
};


class JCar
{
public:
    virtual QString name()=0;       // 汽车名称
};

#endif // JPRODUCT_H
