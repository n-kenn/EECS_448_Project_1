#include "mainwindow.h"
#include <QApplication>
//#include "writetofile.cpp"

 //you found my secret comment.

#include <QDir>
#include <QFile>
#include <QTextStream>

void performWrite(){
    QFile file(QDir::currentPath() + "/test.txt");
    if(file.open(QIODevice::Append | QIODevice::ReadWrite)){
        QTextStream txtStream(&file);
        txtStream<<"hello";
    }
    file.close();
}




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    performWrite();


    return a.exec();
}
