#ifndef ABSTRACTSUBJECT_H
#define ABSTRACTSUBJECT_H


class AbstractObserver;


// 抽象主题
class AbstractSubject
{
public:
    virtual void Attach(AbstractObserver* ob) = 0;          // 注册观察者
    virtual void Detach(AbstractObserver* ob) = 0;          // 注销观察者
    virtual void Notify() = 0;                              // 通知所有观察者
};

#endif // ABSTRACTSUBJECT_H
