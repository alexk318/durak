#ifndef TABLE_H
#define TABLE_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneDragDropEvent>

class Table: public QObject, public QGraphicsRectItem {
    Q_OBJECT

public:
    Table();


protected:
    void dropEvent(QGraphicsSceneDragDropEvent*);

};

#endif // TABLE_H
