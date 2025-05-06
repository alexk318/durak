QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    card.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    table.cpp

HEADERS += \
    card.h \
    mainwindow.h \
    player.h \
    table.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res/clubs_b.png \
    res/clubs_2.png \
    res/clubs_3.png \
    res/clubs_4.png \
    res/clubs_5.png \
    res/clubs_6.png \
    res/clubs_7.png \
    res/clubs_8.png \
    res/clubs_9.png \
    res/clubs_z.png \
    res/clubs_j.png \
    res/clubs_j_2.png \
    res/clubs_r.png \
    res/clubs_r_2.png \
    res/clubs_q.png \
    res/clubs_q_2.png \
    res/diamonds_b.png \
    res/diamonds_2.png \
    res/diamonds_3.png \
    res/diamonds_4.png \
    res/diamonds_5.png \
    res/diamonds_6.png \
    res/diamonds_7.png \
    res/diamonds_8.png \
    res/diamonds_9.png \
    res/diamonds_z.png \
    res/diamonds_j.png \
    res/diamonds_j_2.png \
    res/diamonds_r.png \
    res/diamonds_r_2.png \
    res/diamonds_q.png \
    res/diamonds_q_2.png \
    res/hearts_b.png \
    res/hearts_2.png \
    res/hearts_3.png \
    res/hearts_4.png \
    res/hearts_5.png \
    res/hearts_6.png \
    res/hearts_7.png \
    res/hearts_8.png \
    res/hearts_9.png \
    res/hearts_z.png \
    res/hearts_j.png \
    res/hearts_j_2.png \
    res/hearts_r.png \
    res/hearts_r_2.png \
    res/hearts_q.png \
    res/hearts_q_2.png \
    res/joker1.png \
    res/joker2.png \
    res/spades_b.png \
    res/spades_2.png \
    res/spades_3.png \
    res/spades_4.png \
    res/spades_5.png \
    res/spades_6.png \
    res/spades_7.png \
    res/spades_8.png \
    res/spades_9.png \
    res/spades_z.png \
    res/spades_z_2.png \
    res/spades_j.png \
    res/spades_j_2.png \
    res/spades_r.png \
    res/spades_r_2.png \
    res/spades_q.png \
    res/spades_q_2.png

