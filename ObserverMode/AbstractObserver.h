#ifndef ABSTRACTOBSERVER_H
#define ABSTRACTOBSERVER_H


// 抽象观察者

class AbstractObserver
{

public:
    virtual void UpdatePrice(float price)=0;
};

#endif // ABSTRACTOBSERVER_H
