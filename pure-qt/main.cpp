#include <QApplication>

#include "normalform.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    NormalForm form;

    form.move(500, 500);
    form.resize(500, 500);

    form.show();

    return app.exec();
}
