#ifndef OWNCHARGER_H
#define OWNCHARGER_H

#include <QObject>

class OwnCharger : public QObject
{
    Q_OBJECT
public:
    explicit OwnCharger(QObject *parent = 0);

    void chargeWithTwoFeetFlat();

signals:

public slots:
};

#endif // OWNCHARGER_H
