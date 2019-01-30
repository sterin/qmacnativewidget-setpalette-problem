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
        setPalette( QPalette() );
        ui.setupUi(this);
        QApplication::setPalette( QPalette(Qt::red, Qt::green) );
    }

public slots:

    void on_pushButton_pressed()
    {
        QApplication::setPalette( QPalette(Qt::cyan) );
    }

private:
    
    Ui::Form ui;
};
