#ifndef PLAYER_H
#define PLAYER_H

#include "card.h"

class Player: QObject {
    Q_OBJECT
public:
    Player();

    QVector<Card> cards;


protected:
    void update(Card card);

};

#endif // PLAYER_H
