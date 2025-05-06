#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "player.h"
#include "table.h"

#include <QMainWindow>
#include <QGraphicsScene>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QGraphicsScene* getScene();

private:
    QGraphicsScene* scene;
    Player* player;
    Table* table;

    void setup();
    void generatePlayerCards();

};

#endif // MAINWINDOW_H
