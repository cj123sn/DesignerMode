#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>
#include "Command/Command.h"
#include "Command/IReciever.h"

class QPushButton;
class Command;

namespace Ui {
class MainUi;
}

class MainUi : public QWidget
{
    Q_OBJECT

public:
    explicit MainUi(QWidget *parent = 0);
    ~MainUi();

private slots:
    void on_radioButton_clicked();
    void on_radioButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainUi *ui;
    QPushButton* blackBtn1;
    QPushButton* blackBtn2;
    QPushButton* whiteBtn1;
    QPushButton* whiteBtn2;

    Caculator m_caculator;
    Command* pCommand = NULL;
    AliPay m_aliPay;
    TxPay m_txPay;


private:
    void ObserverMode();
    void AbstractFactoryMode();
    void StrategyMode();
    void FlyweightMode();
};

#endif // MAINUI_H
