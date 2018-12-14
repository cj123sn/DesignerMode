#ifndef CONCRETEBTN_H
#define CONCRETEBTN_H

#include <QObject>
#include <QPushButton>

class BlackBtn :public QPushButton
{
public:
    BlackBtn(QWidget*parent=0)
    {
        this->setParent(parent);
        this->setText("黑色");
        this->show();
    }
};


class WhiteBtn :public QPushButton
{
public:
    WhiteBtn(QWidget*parent=0)
    {
        this->setParent(parent);
        this->setText("白色");
        this->show();
    }
};

#endif // CONCRETEBTN_H
