QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    login.cpp \
    sqlop.cpp \
    stucell_course.cpp \
    stucell_grade.cpp \
    stucell_info.cpp \
    stucell_pa.cpp \
    stucell_updateinfo.cpp \
    studentuser.cpp \
    teacel_course.cpp \
    teacell_score.cpp \
    teacell_stuinfo.cpp \
    teacell_teainfo.cpp \
    teacell_updateinfo.cpp \
    teacell_updatestuinfo.cpp \
    teacheruser.cpp

HEADERS += \
    login.h \
    sqlop.h \
    stucell_course.h \
    stucell_grade.h \
    stucell_info.h \
    stucell_pa.h \
    stucell_updateinfo.h \
    studentuser.h \
    teacel_course.h \
    teacell_score.h \
    teacell_stuinfo.h \
    teacell_teainfo.h \
    teacell_updateinfo.h \
    teacell_updatestuinfo.h \
    teacheruser.h

FORMS += \
    login.ui \
    stucell_course.ui \
    stucell_grade.ui \
    stucell_info.ui \
    stucell_pa.ui \
    stucell_updateinfo.ui \
    studentuser.ui \
    teacel_course.ui \
    teacell_score.ui \
    teacell_stuinfo.ui \
    teacell_teainfo.ui \
    teacell_updateinfo.ui \
    teacell_updatestuinfo.ui \
    teacheruser.ui

QT += sql
QT += axcontainer

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
