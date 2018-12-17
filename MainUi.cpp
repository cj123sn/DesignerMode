#include "MainUi.h"
#include "ui_MainUi.h"
#include "AdapterMode/PowerAdapter.h"
#include "singletonMode/Singleton.h"
#include "AbstractFactory/AbstractFactory.h"
#include "ObserverMode/ConcreteSubject.h"
#include "ObserverMode/ConcreteObserver.h"

#include "StrategyMode/ConcreteContenx.h"
#include "FlyweightMode/BtnFactory.h"




MainUi::MainUi(QWidget *parent) :
    QWidget(parent),
    m_caculator(20.0),
    m_aliPay(&m_caculator),
    m_txPay(&m_caculator),
    ui(new Ui::MainUi)
{
    ui->setupUi(this);



    // 适配模式
//    RussiaSocker* pRussiaSocker = new PowerAdapter;     // 给俄国插座找个适配器
//    pRussiaSocker->charge();
    // 单例模式
//    Singleton::Instance()->doSomething();


    //StrategyMode();
    //FlyweightMode();
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

void MainUi::FlyweightMode()
{

    // 享元模式
    blackBtn1 = BtnFactory::getBtn("black",this);
    blackBtn1->move(100,0);
    blackBtn2 = BtnFactory::getBtn("black",this);
    blackBtn2->move(0,0);

    whiteBtn1 = BtnFactory::getBtn("white",this);
    whiteBtn1->move(100,20);
    whiteBtn2 = BtnFactory::getBtn("white",this);
    whiteBtn2->move(20,20);

}

void MainUi::on_radioButton_clicked()
{
    pCommand = &m_aliPay;
}

void MainUi::on_radioButton_2_clicked()
{
    pCommand = &m_txPay;
}

void MainUi::on_pushButton_clicked()
{
    float price = ui->lineEdit->text().toFloat();
    pCommand->pay();
}
