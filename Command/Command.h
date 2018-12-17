#ifndef COMMAND_H
#define COMMAND_H

#include <QString>

class IReciever;

class Command
{
public:
    Command(IReciever* reciver);
    virtual int pay()=0;        // 具体类实现方法

protected:
    IReciever* m_pReciver;
};


class AliPay :public Command
{
public:
    AliPay(IReciever* reciver);
    int pay()Q_DECL_OVERRIDE;

};


class TxPay :public Command
{
public:
    TxPay(IReciever* reciver);
    int pay()Q_DECL_OVERRIDE;
};




#endif // COMMAND_H
