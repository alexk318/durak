#include "card.h"
#include <iostream>
#include <QCursor>
#include <QDrag>
#include <QMimeData>

Card::Card(QString suit, QChar rank) {
    this->suit = suit;
    this->rank = rank;
    this->setPixmap(getImagePath());

    setAcceptDrops(true);
}

// TODO: Mouse cursor change. Qt page. 132.

QString Card::getImagePath() {
    return ":/res/" + this->suit + '_' + this->rank + ".png";
}

void Card::mousePressEvent(QGraphicsSceneMouseEvent* ev) {
    if (ev->buttons() == Qt::LeftButton) {
        qDebug() << "Card clicked: " << this->suit << this->rank;
    }
}

void Card::mouseMoveEvent(QGraphicsSceneMouseEvent*) {
    QDrag* drag = new QDrag(this);

    drag->setPixmap(getImagePath());
    QMimeData* mime = new QMimeData;
    mime->setText(this->suit + " " + this->rank);
    drag->setMimeData(mime);

    drag->setHotSpot(QPoint(40, 20)); // TODO: Hotspot = cursor's coordinates (см. стр. 132)
    drag->exec();
}

void Card::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString suit = ev->mimeData()->text().split(' ')[0];
    QString rank = ev->mimeData()->text().split(' ')[1];

    if ((suit == this->suit) & (rank > this->rank)) {
        qDebug() << "Beated!";
    }

}

