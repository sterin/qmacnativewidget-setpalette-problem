#pragma once

#include <QWidget>

#include "ui_form.h"

class NormalForm :
    public QWidget
{
    Q_OBJECT

public:

    NormalForm()
    {
        ui.setupUi(this);
        QApplication::setPalette( QPalette(Qt::red, Qt::green) );
    }

private:
    
    Ui::Form ui;
};
