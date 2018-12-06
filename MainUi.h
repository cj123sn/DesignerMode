#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>

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


private:
    void ObserverMode();
    void AbstractFactoryMode();
    void StrategyMode();
};

#endif // MAINUI_H
