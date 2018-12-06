#ifndef SALESTRATEGY_H
#define SALESTRATEGY_H


class SaleStrategy
{

public:
    SaleStrategy();
    virtual double getPrice(double money)=0;

};

#endif // SALESTRATEGY_H
