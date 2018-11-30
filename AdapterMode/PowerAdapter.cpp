#include "PowerAdapter.h"

PowerAdapter::PowerAdapter():RussiaSocker()
{
    m_pCharger = new OwnCharger;
}

void PowerAdapter::charge()
{
    m_pCharger->chargeWithTwoFeetFlat();
}

