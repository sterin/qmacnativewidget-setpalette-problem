#pragma once

#include <QMacNativeWidget>

#include "ui_form.h"

class MacNativeForm :
    public QMacNativeWidget
{
    Q_OBJECT

public:

    MacNativeForm()
    {
        ui.setupUi(this);
        QApplication::setPalette( QPalette(Qt::red, Qt::green) );
    }

private:
    
    Ui::Form ui;
};
