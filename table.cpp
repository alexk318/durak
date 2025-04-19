#include "table.h"
#include <QMimeData>

Table::Table() {
    setAcceptDrops(true);
    this->setRect(QRectF(QPointF(0, -160), QPointF(530, -20)));
}

void Table::dropEvent(QGraphicsSceneDragDropEvent* ev) {
    QString attackSuit = ev->mimeData()->text().split(' ')[0];
    QString attackRank = ev->mimeData()->text().split(' ')[1];

    qDebug() << attackSuit << attackRank << "on table";

}
