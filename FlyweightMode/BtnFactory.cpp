#include "BtnFactory.h"
#include <QPushButton>

QMap<QString,QPushButton*> BtnFactory::m_map =QMap<QString,QPushButton*>();

QPushButton *BtnFactory::getBtn(QString type, QWidget *parent)
{
    QPushButton* btn = NULL;

    if (m_map.contains(type))
    {
        btn = m_map[type];
    }
    else
    {
        if(type =="black")
        {
            btn = new BlackBtn(parent);
        }
        else if(type =="white")
        {
            btn = new WhiteBtn(parent);
        }
        m_map[type] = btn;
    }

    return btn;
}
