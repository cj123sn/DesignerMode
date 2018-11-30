#include "OwnCharger.h"
#include <QDebug>

OwnCharger::OwnCharger(QObject *parent) : QObject(parent)
{

}

void OwnCharger::chargeWithTwoFeetFlat()
{
    qDebug()<<"OwnCharger : already been charged with two feet";
}

