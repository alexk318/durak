#ifndef TABLE_H
#define TABLE_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneDragDropEvent>

#include "card.h"

class Table: public QObject, public QGraphicsRectItem {
    Q_OBJECT

public:
    Table();

    QVector<Card> cards;

protected:
    void update(Card card);

    void dropEvent(QGraphicsSceneDragDropEvent* ev);

};

#endif // TABLE_H
