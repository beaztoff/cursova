#include "usertime.h"
#include "mainwindow.h"

usertime::usertime()
{

}

QString usertime::timeEvent()
{
    QDateTime time = QDateTime::currentDateTime();
    QString time_text = time.toString("hh : mm : ss \n"
                                      "dd.MM.yyyy");
    return time_text;
}
