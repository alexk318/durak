#ifndef CARD_H
#define CARD_H

#include <QGraphicsSceneMouseEvent>
#include <QGraphicsPixmapItem>
#include <QPixmap>

class Card: public QObject, public QGraphicsPixmapItem {
    Q_OBJECT

public:
    Card(std::string suit, char rank);

    std::string suit;
    char rank;

    QString getImagePath();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent*);
    void mouseMoveEvent(QGraphicsSceneMouseEvent*);

    void dropEvent(QGraphicsSceneDragDropEvent*);
};

#endif // CARD_H
