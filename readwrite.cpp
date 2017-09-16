#include "Event.h"
#include <QDir>
#include <QFile>
#include <QTextStream>

static void ReadWrite::write(const Event&) {//can call this without making actual object static method
  QFile file(QDir::currentPath() + "eventlist.txt");//static method
  if(file.open(QIODevice::Append){ //static of the QIO device
      QTextStream txtStream(&file);
      txtStream<<'test';
  }
  file.close();
}

static void ReadWrite::read(const QString filename&) {//fully static method
  //todo
}
