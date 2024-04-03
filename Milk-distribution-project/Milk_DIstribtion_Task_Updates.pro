TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        consumer.cpp \
        house.cpp \
        main.cpp \
        milk.cpp \
        milkdistributor.cpp \
        processmenuchoice.cpp

HEADERS += \
    consumer.h \
    house.h \
    milk.h \
    milkdistributor.h \
    processmenuchoice.h
