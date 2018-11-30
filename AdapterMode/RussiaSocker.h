#ifndef RUSSIASOCKER_H
#define RUSSIASOCKER_H

#include <QObject>

/*
 * 优点：

可以让任何两个没有关联的类一起运行
提高了类的复用
增加了类的透明度
灵活性好
缺点：

过多地使用适配器，会让系统非常零乱，不利于整体把控。
例如，看到调用的是 A 接口，内部却被适配成了 B 接口的实现，系统如果出现太多类似情况，无异于一场灾难。因此，如果不是很必要，可以不使用适配器，而是直接对系统进行重构。
---------------------
 *
 *
 *
 */


class RussiaSocker
{
public:
    RussiaSocker();

    virtual void charge()=0;
};

#endif // RUSSIASOCKER_H
