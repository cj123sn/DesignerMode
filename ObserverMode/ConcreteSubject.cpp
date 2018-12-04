#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{

}

void ConcreteSubject::SetPrice(float price)
{
    m_fCurrentPrice = price;
}

void ConcreteSubject::Attach(AbstractObserver *ob)
{
    if(!m_observerList.contains(ob))
    m_observerList.append(ob);
}
void ConcreteSubject::Detach(AbstractObserver *ob)
{
    if(m_observerList.contains(ob))
    m_observerList.removeOne(ob);
}

void ConcreteSubject::Notify()
{
    foreach(AbstractObserver* ob,m_observerList)
    {
        ob->UpdatePrice(m_fCurrentPrice);
    }
}

