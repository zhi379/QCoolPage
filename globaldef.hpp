﻿#ifndef GLOBALDEF_HPP
#define GLOBALDEF_HPP
#include <QString>
#include <QDebug>
#include <QFile>

#ifndef LOADQSS
#define LOADQSS(qssFile)                        \
{                                               \
    QFile file(qssFile);                        \
    file.open(QFile::ReadOnly);                 \
    if(file.isOpen())                           \
    {                                           \
        qApp->setStyleSheet(file.readAll());    \
        file.close();                           \
    }                                           \
}
#endif

#ifndef SAFEDELETE
#define SAFEDELETE(pointer) \
{                           \
    if(pointer)             \
    {                       \
        delete pointer;     \
    }                       \
pointer = nullptr;          \
}
#endif

enum WidgetTabType
{
    TAB_BANNA,
    TAB_CYLINDER,
    TAB_PROGRESS,
    TAB_FRAME,
    TAB_CUSTOM_PLOT,
    TAB_MOVE_BUTTON,
    TAB_MAX,

};
namespace GlobalSpace
{
const QString BLACK_QSS_FILE_PATH = ":/res/res/stylesheet/black.qss";
const QString LOGO_PATH = ":/res/res/image/image.png";
}
#endif // GLOBALDEF_HPP
