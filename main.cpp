#include "mainwindow.h"

#include <QApplication>
#include <QGraphicsView>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    app.setApplicationDisplayName("Durak");
    // TODO: Unresizable window
    MainWindow w;

    QGraphicsScene* scene = w.getScene();

    QGraphicsView* view = new QGraphicsView(scene);

    view->setBackgroundBrush(QColor(10, 108, 3));
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();

    return app.exec();
}
