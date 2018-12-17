#ifndef IRECIEVER_H
#define IRECIEVER_H

#include <QObject>

enum Types
{
    e_Ali,
    e_Tx,
};

class IReciever
{

public:
    IReciever();
    virtual void setType(Types type)=0;
    virtual int getResult()=0;
};

class Caculator :public IReciever
{
public:
    Caculator(float price);
    void setType(Types type) Q_DECL_OVERRIDE;
    int getResult() Q_DECL_OVERRIDE;

private:
    Types m_type;
    float m_price;
};

#endif // IRECIEVER_H
