#ifndef CONCRETESTRATEGY_H
#define CONCRETESTRATEGY_H

#include "SaleStrategy.h"

class NewCustomerStrategy :public SaleStrategy
{
    double getPrice(double money) override;

};

class OldCustomerStrategy :public SaleStrategy
{
    double getPrice(double money) override;
};

class VipCustomerSrategy : public SaleStrategy
{
    double getPrice(double money) override;
};

#endif // CONCRETESTRATEGY_H
