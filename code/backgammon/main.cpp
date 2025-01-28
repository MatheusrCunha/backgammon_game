#include <QApplication>
#include <QWidget>
#include <QPainter>
#include "board.h"

class GameWindow : public QWidget {
public:
    GameWindow() {
        setWindowTitle("Tabuleiro de Gamão");
        resize(900, 400);
    }

protected:
    void paintEvent(QPaintEvent *event) override {  // Sobrescrevendo o método paintEvent
        QPainter painter(this);  // Criando o objeto QPainter para desenhar na janela
        board.draw(painter);     // Chamando o método de desenho do tabuleiro
    }

private:
    Board board{900, 400};  // Instanciando o objeto Board
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);  // Inicializa a aplicação Qt
    GameWindow window;             // Criando a janela
    window.show();                 // Exibindo a janela
    return app.exec();             // Iniciando o loop de eventos da aplicação
}
