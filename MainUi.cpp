#include "MainUi.h"
#include "ui_MainUi.h"
#include "AdapterMode/PowerAdapter.h"
#include "singletonMode/Singleton.h"
#include "AbstractFactory/AbstractFactory.h"
#include "ObserverMode/ConcreteSubject.h"
#include "ObserverMode/ConcreteObserver.h"

#include "StrategyMode/ConcreteContenx.h"


MainUi::MainUi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainUi)
{
    ui->setupUi(this);
    // 适配模式
//    RussiaSocker* pRussiaSocker = new PowerAdapter;     // 给俄国插座找个适配器
//    pRussiaSocker->charge();
    // 单例模式
//    Singleton::Instance()->doSomething();


    StrategyMode();

}

MainUi::~MainUi()
{
    delete ui;
}

void MainUi::ObserverMode()
{
    // 观察者模式
/*
 * 应用场景: 购票系统
 * 1个人买了一张票,需要通知各个模块,进行处理
 * ticket++
 * 短信通知
 * 日志通知
 * 抵扣卷通知
*/
    ConcreteSubject * sub = new ConcreteSubject;
    ConcreteObserver* ob1 = new ConcreteObserver("chenjia");
    ConcreteObserver* ob2 = new ConcreteObserver("hejvhong");
    sub->Attach(ob1);
    sub->Attach(ob2);

    sub->SetPrice(13.0);
    sub->Notify();

    sub->Detach(ob1);
    sub->SetPrice(15);
    sub->Notify();
}

void MainUi::AbstractFactoryMode()
{
    // 抽象工厂模式
    AbstractFactory* pBenz = AbstractFactory::createFactory(AbstractFactory::FactoryType::e_Benz);
    qDebug()<<"current car:"<<pBenz->createCar()->name()<<"---current bike:"<<pBenz->createBike()->name();
}

void MainUi::StrategyMode()
{

    // 策略模式

/*
 * 使用场景,目标只有1个获得当前优惠价格,至于怎么优惠,调用者并不关心
 * 使用各种优惠策略,注册到场景中
 * 普通用户
 * 老用户
 * vip用户
*/

    //SaleStrategy * strategy = new OldCustomerStrategy;
    OldCustomerStrategy strategy;
    ConcreteContenx content;
    content.SetStrategy(&strategy);
    qDebug()<<"current menoy = "<<content.getPrice(100.0);
}
