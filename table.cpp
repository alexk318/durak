#include <iostream>
#include "table.h"
#include <QMimeData>

Table::Table() {
    cards.reserve(6);
    setAcceptDrops(true);
    this->setRect(QRectF(QPointF(0, -160), QPointF(530, -20)));
}


/*
void Table::update(int i) {
    this->cards.push_back(i);
    qDebug() << this->cards.size();
}
*/

void Table::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString suit = ev->mimeData()->text().split(' ')[0];
    QString rank = ev->mimeData()->text().split(' ')[1];

    // update(1);

    qDebug() << suit << rank << "on table";

}
