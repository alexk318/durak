#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QGraphicsScene* getScene();

private:
    QGraphicsScene* scene;

    void setup();
    void generatePlayerCards();

};

#endif // MAINWINDOW_H
