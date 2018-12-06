#ifndef CONCRETECONTENX_H
#define CONCRETECONTENX_H

#include "ConcreteStrategy.h"

class ConcreteContenx
{
public:
    inline void SetStrategy(SaleStrategy * strategy)
    {
        this->m_pStrategy = strategy;
    }

    inline double getPrice(double money)
    {
        return m_pStrategy->getPrice(money);
    }

private:
    SaleStrategy* m_pStrategy = nullptr;
};

#endif // CONCRETECONTENX_H
