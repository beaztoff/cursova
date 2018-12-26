#ifndef CONNECTIONDB_H
#define CONNECTIONDB_H

#include "mainwindow.h"

class connectionDB
{
public:
    connectionDB();
    connect();
private:
     QSqlDatabase db;
};

#endif // CONNECTIONDB_H
