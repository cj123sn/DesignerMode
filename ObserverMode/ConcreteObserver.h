#ifndef CONCRETEOBSERVER_H
#define CONCRETEOBSERVER_H

#include <QString>
#include "AbstractObserver.h"

class ConcreteObserver : public AbstractObserver
{
public:
    ConcreteObserver(QString obName);

    void UpdatePrice(float price);

private:
    QString m_sObName;
};

#endif // CONCRETEOBSERVER_H
