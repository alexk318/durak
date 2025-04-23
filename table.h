#ifndef TABLE_H
#define TABLE_H

#include <QGraphicsRectItem>
#include <QGraphicsSceneDragDropEvent>

class Table: public QObject, public QGraphicsRectItem {
    Q_OBJECT

public:
    Table();


protected:
    void update(QString suit, QString rank);

    void dropEvent(QGraphicsSceneDragDropEvent* ev);

};

#endif // TABLE_H
