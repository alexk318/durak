#ifndef CARD_H
#define CARD_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsPixmapItem>
#include <QPixmap>

class Card: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    QString suit;
    QString rank;

    Card(QString suit, QString rank);

    QString getImagePath();

    Card(const Card &card) {
        suit = card.suit;
        rank = card.rank;
    }

    Card operator=(Card card) {
        suit = card.suit;
        rank = card.rank;

        return *this;
    }

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* ev);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* ev);

    void dropEvent(QGraphicsSceneDragDropEvent*);
};

#endif // CARD_H
