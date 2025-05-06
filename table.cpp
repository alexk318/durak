#include <iostream>

#include <QMimeData>

#include "table.h"

Table::Table() {
    this->cards.reserve(6);
    setAcceptDrops(true);
    this->setRect(QRectF(QPointF(0, -160), QPointF(530, -20)));
}

void Table::update(Card card) {
    this->cards.push_back(card);
    qDebug() << this->cards.size();
}

void Table::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString suit = ev->mimeData()->text().split(' ')[0];
    QString rank = ev->mimeData()->text().split(' ')[1];

    update(Card(suit, rank));

    qDebug() << suit << rank << "on table";

}
