#include "AbstractFactory.h"
#include "ConcreteFactory.h"

AbstractFactory *AbstractFactory::createFactory(AbstractFactory::FactoryType type)
{
    AbstractFactory* pFactory =NULL;
    switch (type) {
    case e_Benz:
        pFactory = new BenzFactory;
        break;
    case e_BWM:
        pFactory = new BwmFactory;
        break;
    case e_Audi:
        pFactory = new AudiFactory;
        break;
    default:
        break;
    }
    return pFactory;
}

AbstractFactory::AbstractFactory()
{

}

