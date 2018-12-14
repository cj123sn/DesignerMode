#ifndef BTNFACTORY_H
#define BTNFACTORY_H


#include <QMap>
#include "ConcreteBtn.h"

class QPushButton;


class BtnFactory
{
public:
    static QPushButton *getBtn(QString type,QWidget*parent=0);

private:
    static QMap<QString,QPushButton*> m_map;
};
#endif // BTNFACTORY_H
