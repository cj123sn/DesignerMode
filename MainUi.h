#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>

class QPushButton;

namespace Ui {
class MainUi;
}

class MainUi : public QWidget
{
    Q_OBJECT

public:
    explicit MainUi(QWidget *parent = 0);
    ~MainUi();

private:
    Ui::MainUi *ui;
    QPushButton* blackBtn1;
    QPushButton* blackBtn2;
    QPushButton* whiteBtn1;
    QPushButton* whiteBtn2;


private:
    void ObserverMode();
    void AbstractFactoryMode();
    void StrategyMode();
    void FlyweightMode();
};

#endif // MAINUI_H
