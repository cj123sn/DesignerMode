#ifndef POWERADAPTER_H
#define POWERADAPTER_H

#include "RussiaSocker.h"
#include "OwnCharger.h"

class PowerAdapter :public RussiaSocker
{
public:
    PowerAdapter();

    void charge() Q_DECL_OVERRIDE;      // 转换插头

private:
    OwnCharger* m_pCharger;             // 需要被转换的插头,自带的充电器

};

#endif // POWERADAPTER_H
