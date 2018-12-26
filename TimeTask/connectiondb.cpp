#include "connectiondb.h"
#include "mainwindow.h"
#include "sounds.h"

connectionDB::connectionDB()
{

}

connectionDB::connect()
{
    sounds ply;
    messages print;
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("37.228.88.134");
    db.setDatabaseName("db_pogoda123451");
    db.setUserName("pogoda123451");
    db.setPassword("240500240500");
    if(!db.open())
    {
        qDebug() << db.lastError().text();
        ply.error();
        print.message(4);
        qApp->exit();
    }
    else
    {
         ply.succecful();
         qDebug() << "Success!";
    }
}
