#ifndef SINGLETON_H
#define SINGLETON_H

#include<QDebug>

class Singleton
{
public:
    static Singleton* Instance()
    {
        static Singleton instance;
        return &instance;
    }

    void doSomething()
    {
        m_test++;
        qDebug()<<"do something~~"<<m_test;
    }

private:
    Singleton();
    Singleton(Singleton const &);  // 无需实现
    Singleton& operator = (const Singleton &);  // 无需实现

    int m_test =0;      // 非静态数据成员初始化可以使用,必须在c++11之上
};

#endif // SINGLETON_H
