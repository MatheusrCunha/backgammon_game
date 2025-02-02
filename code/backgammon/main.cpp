#include <QApplication>
#include <QWidget>
#include <QPainter>
#include "gamewindow.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);  // Inicializa a aplicação Qt
    GameWindow window;             // Criando a janela
    window.show();                 // Exibindo a janela
    return app.exec();
}
