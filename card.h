#ifndef CARD_H
#define CARD_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsPixmapItem>
#include <QPixmap>

class Card: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Card(QString suit, QChar rank);

    QString suit;
    QChar rank;

    QString getImagePath();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* ev);

    void dropEvent(QGraphicsSceneDragDropEvent*);
};

#endif // CARD_H
