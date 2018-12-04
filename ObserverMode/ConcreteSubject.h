#ifndef CONCRETESUBJECT_H
#define CONCRETESUBJECT_H

#include <Qlist>

#include "AbstractSubject.h"
#include "AbstractObserver.h"

// 具体主题

class ConcreteSubject : public AbstractSubject
{
public:
    ConcreteSubject();
    void SetPrice(float price);
    void Attach(AbstractObserver * ob) Q_DECL_OVERRIDE;     // 注册
    void Detach(AbstractObserver * ob) Q_DECL_OVERRIDE;     // 注销
    void Notify() Q_DECL_OVERRIDE;

private:
    float m_fCurrentPrice =10.0;
    QList<AbstractObserver* > m_observerList;
};

#endif // CONCRETESUBJECT_H
