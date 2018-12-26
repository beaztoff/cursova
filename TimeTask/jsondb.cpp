#include <jsondb.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QString>
#include <QFile>
#include <QMessageBox>
#include <QDir>
jsondb::jsondb()
{

}

jsondb::insert(QString insert)
{
       QFile insertFile(QDir::currentPath() + "\\release\\json\\sessions.json");

       if (!insertFile.open(QIODevice::WriteOnly))
               return 0;

       QJsonObject json_obj;
       json_obj["entry"] = insert;

       QJsonDocument json_doc(json_obj);
       insertFile.write(json_doc.toJson());
       insertFile.close();

}
QString jsondb::parse()
{
    QByteArray data;
    QFile parseFile(QDir::currentPath() + "\\release\\json\\sessions.json");

    if (!parseFile.open(QIODevice::ReadOnly))
            return 0;

    data = parseFile.readAll();
    QJsonDocument document = QJsonDocument::fromJson(data);
    QJsonObject root = document.object();
    QJsonValue date = root.value("entry");
    parseFile.close();
    return date.toString();
}
