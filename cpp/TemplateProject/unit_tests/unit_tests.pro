QT += testlib
QT -= gui
QT += xml

TARGET = unit_tests
CONFIG   += console
CONFIG   += testlib


SOURCES += test_main.cpp \
    test_myclass.cpp

HEADERS += \
     test_myclass.h


#OUT_PWD = \"$$OUT_PWD/\"

LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib

DEPENDPATH += $$PWD/../lib

#QMAKE_PRE_LINK = copy /Y ..\lib\*.dll #win change

#Release:DESTDIR = $$PWD/../build/release/unit_tests #win change
#Release:OBJECTS_DIR = $$PWD/../build/release/unit_tests #win change
#Release:MOC_DIR = $$PWD/../build/release/unit_tests #win change


#Debug:DESTDIR = $$PWD/../build/debug/unit_tests #win change
#Debug:OBJECTS_DIR = $$PWD/../build/debug/unit_tests #win change
#Debug:MOC_DIR = $$PWD/../build/debug/unit_tests #win change

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../lib/release/ -llib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../lib/debug/ -llib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/liblib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/liblib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/lib.lib

