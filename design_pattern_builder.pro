TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Plane/plane.cpp \
    Plane/planebuilder.cpp \
    Plane/propellerbuilder.cpp \
    Plane/jetbuilder.cpp \
    Plane/planedirector.cpp

HEADERS += \
    Plane/plane.h \
    Plane/planebuilder.h \
    Plane/propellerbuilder.h \
    Plane/jetbuilder.h \
    Plane/planedirector.h
