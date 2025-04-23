#include "table.h"
#include <QMimeData>

Table::Table() {
    setAcceptDrops(true);
    this->setRect(QRectF(QPointF(0, -160), QPointF(530, -20)));
}

void Table::update(QString suit, QString rank) {

}

void Table::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString suit = ev->mimeData()->text().split(' ')[0];
    QString rank = ev->mimeData()->text().split(' ')[1];

    update(suit, rank);

    qDebug() << suit << rank << "on table";

}
