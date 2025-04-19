#include "card.h"
#include <iostream>
#include <QCursor>
#include <QDrag>
#include <QMimeData>

Card::Card(std::string suit, char rank) {
    this->suit = suit;
    this->rank = rank;
    this->setPixmap(getImagePath());

    setAcceptDrops(true);
}

// TODO: Mouse cursor change. Qt page. 132.

QString Card::getImagePath() {
    return QString::fromStdString(":/res/" + this->suit + '_' + this->rank + ".png");
}

void Card::mousePressEvent(QGraphicsSceneMouseEvent* ev) {
    if (ev->buttons() == Qt::LeftButton) {
        qDebug() << "Card clicked: " << QString::fromStdString(this->suit) << QString(this->rank);
    }
}

void Card::mouseMoveEvent(QGraphicsSceneMouseEvent*) {
    QDrag* drag = new QDrag(this);

    drag->setPixmap(getImagePath());
    QMimeData* mime = new QMimeData;
    mime->setText(QString::fromStdString(this->suit) + " " + QString(this->rank));
    drag->setMimeData(mime);

    drag->setHotSpot(QPoint(40, 20)); // TODO: Hotspot = cursor's coordinates (см. стр. 132)
    drag->exec();
}

void Card::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString attackSuit = ev->mimeData()->text().split(' ')[0];
    QString attackRank = ev->mimeData()->text().split(' ')[1];

    if ((attackSuit == QString::fromStdString(this->suit)) & (attackRank > this->rank)) {
        qDebug() << "Beated!";
    }

}

