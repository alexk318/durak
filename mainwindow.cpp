#include "mainwindow.h"
#include "card.h"

#include <QPixmap>
#include <QRandomGenerator>

// Card size: 80x120
// Card's position start from its up-right corner

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    this->scene = new QGraphicsScene(QRectF(QPointF(-20, -320), QPointF(550, 140)));
    this->player = new Player();

    this->table = new Table();
    this->scene->addItem(this->table);
    this->scene->addRect(QRectF(QPointF(0, -160), QPointF(530, -20)), QPen(Qt::black, 2));

    setup();
}

void MainWindow::setup() {
    generatePlayerCards();
}

void MainWindow::generatePlayerCards() {

    const std::array<QString, 4> suits = {"spades", "clubs", "diamonds", "hearts"};
    const std::array<QString, 9> ranks = {"6", "7", "8", "9", "b", "j", "q", "r", "z"};

    for (char i=0; i<12; i++) {
        QString suit = suits[QRandomGenerator::global()->bounded(0, 3)];
        QString rank = ranks[QRandomGenerator::global()->bounded(0, 8)];

        Card* card = new Card(suit, rank);

        if (i<6) {
            card->setPos(90*i, 0);
            this->player->cards.push_back(*card);
        } else {
            card->setPos((90*i)-540, -300);
        }

        this->scene->addItem(card);

    }

    qDebug() << "Cards have been created!";

}

QGraphicsScene* MainWindow::getScene() {
    return this->scene;
}
