#include <QApplication>
#include "gamewindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);  // Inicializa a aplicação Qt
    GameWindow w;             // Criando a janela
    w.show();                 // Exibindo a janela
    return app.exec();
}
