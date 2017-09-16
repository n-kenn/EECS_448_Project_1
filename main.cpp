#include "mainwindow.h"
#include <QApplication>
//#include "writetofile.cpp"



#include <QDir>
#include <QFile>
#include <QDebug>

void preformWrite(){
    QFile file("test.txt");

    if(!file.exists()){
        qDebug() << file.fileName() << "does not exist";
    }
    if(file.open(QIODevice::ReadOnly | QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream txtStream(&file);

        qDebug() << "---- Writing to file ----";

        txtStream << "The first Line\n";
        txtStream << "The second Line\n";
        txtStream << "Note that the >> operator does not appen a new line automatically at the end\n";

        qDebug() << "----Reading from file ----";
        txtStream.seek(0);//specifying the position to be zero
        while(!txtStream.atEnd())
        {
            qDebug() << txtStream.readLine(); //txtStream.readAll() can be used instead of while loop
        }
        file.close();
    }
    else
    {
        qDebug() << "Could not open the file.";
        return;
    }
}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    preformWrite();


    return a.exec();
}
