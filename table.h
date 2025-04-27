#ifndef TABLE_H
#define TABLE_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneDragDropEvent>

#include "card.h"

class Table: public QObject, public QGraphicsRectItem {
    Q_OBJECT

public:
    Table();

    std::vector<Card> cards;

protected:
    // void update(int i);

    void dropEvent(QGraphicsSceneDragDropEvent* ev);

};

#endif // TABLE_H
