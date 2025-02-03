#include <QApplication>
#include "gamewindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);  // Aplicação Qt
    GameWindow w;                 // Cria a janela
    w.show();                    // Mostra a janela
    return app.exec();
}
