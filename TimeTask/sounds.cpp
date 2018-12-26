#include "sounds.h"
#include "mainwindow.h"
#include <QMediaPlayer>

sounds::sounds()
{

}

sounds::succecful()
{
    QMediaPlayer* succesful = new QMediaPlayer();
    succesful->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/sounds/succesful.mp3"));
    succesful->play();

}

sounds::error()
{
    QMediaPlayer* error = new QMediaPlayer();
    error->setMedia(QUrl::fromLocalFile(QDir::currentPath() + "/sounds/error.mp3"));
    error->play();
}
