#include <array>
#include "mainwindow.h"
#include "card.h"
#include "table.h"

#include <QPixmap>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    scene = new QGraphicsScene(QRectF(QPointF(-20, -320), QPointF(550, 140)));
    setup();
}

void MainWindow::setup() {

    // Initialize table
    Table* table = new Table();

    scene->addItem(table);
    scene->addRect(QRectF(QPointF(0, -160), QPointF(530, -20)), QPen(Qt::black, 2));

    generatePlayerCards();

}

void MainWindow::generatePlayerCards() {

    const std::array<QString, 4> suits = {"spades", "clubs", "diamonds", "hearts"};
    const std::array<QString, 9> ranks = {"6", "7", "8", "9", "b", "j", "q", "r", "z"};

    for (char i=0; i<12; i++) {
        QString suit = suits[QRandomGenerator::global()->bounded(0, 3)];
        QString rank = ranks[QRandomGenerator::global()->bounded(0, 8)];

        Card* card = new Card(suit, rank);
        // Card size: 80x120
        // Card's position start from its up-right corner
        if (i<6) card->setPos(90*i, 0); else card->setPos((90*i)-540, -300);

        scene->addItem(card);

    }

    qDebug() << "Cards have been created!";

}

QGraphicsScene* MainWindow::getScene() {
    return scene;
}
