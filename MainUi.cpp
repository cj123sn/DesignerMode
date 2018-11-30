#include "MainUi.h"
#include "ui_MainUi.h"
#include "AdapterMode/PowerAdapter.h"
#include "singletonMode/Singleton.h"
#include "AbstractFactory/AbstractFactory.h"

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

    // 抽象工厂模式
    AbstractFactory* pBenz = AbstractFactory::createFactory(AbstractFactory::FactoryType::e_Benz);
    qDebug()<<"current car:"<<pBenz->createCar()->name()<<"---current bike:"<<pBenz->createBike()->name();


}

MainUi::~MainUi()
{
    delete ui;
}
