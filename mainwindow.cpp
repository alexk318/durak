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
    tableCards_test();
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

void MainWindow::tableCards_test() {
   //for (int i=0; i<6; i++) {
        Card* card1 = new Card("spades", "6");
        card1->setPos(0, -150);
        this->scene->addItem(card1);
    /*
        Card* card2 = new Card("spades", "7");
        card2->setPos(0, -150);
        this->scene->addItem(card2);

        Card* card3 = new Card("spades", "8");
        card3->setPos(0, -150);
        this->scene->addItem(card3);

        Card* card4 = new Card("spades", "9");
        card4->setPos(0, -150);
        this->scene->addItem(card4);

        Card* card5 = new Card("spades", "b");
        card5->setPos(0, -150);
        this->scene->addItem(card5);

        Card* card6 = new Card("spades", "j");
        card6->setPos(0, -150);
        this->scene->addItem(card6);
*/
   // }
}

QGraphicsScene* MainWindow::getScene() {
    return this->scene;
}
