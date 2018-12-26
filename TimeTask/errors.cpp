#include "errors.h"
#include "mainwindow.h"

errors::errors()
{

}

errors::message(int printX)
{
    switch (printX) {
    case 0:
        QMessageBox::critical(0, "Помилка", "Додайте будь-ласка текст до вашого плану!");
        break;
    case 1:
        QMessageBox::critical(0, "Помилка", "Перевірте наявність тексту у всіх рядках!");
        break;
    case 2:
        QMessageBox::information(0, "Успішно", "Зміни внесені в базу даних!");
        break;
    case 3:
        QMessageBox::critical(0, "Помилка", "Зміни не вдалося!");
        break;
    case 4:
        QMessageBox::critical(0, "Критична помилка", "Не вдалося зв'язатися з базою даних!");
        break;
    default:
        break;     }

}


errors::messageArguments(int printX, QString printY)
{
    switch (printX) {
    case 0:
       QMessageBox::information(0, "Успішно", "Інформація додана в плани [" + printY + "]");
        break;
    case 1:
       QMessageBox::critical(0, "Помилка", printY);
        break;
    case 2:
       QMessageBox::information(0, "Успішно", "Захід  " + printY + " створено!");
        break;
    case 3:
       QMessageBox::information(0, "Успішно", "План [ID=" + printY + "] був видалений!");
        break;
    case 4:
       QMessageBox::information(0, "Успішно", "Захід " + ui->printY + " був видалений!");
        break;
    default:
        break;     }
}
