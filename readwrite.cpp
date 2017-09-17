#include "event.h"
#include "readwrite.h"
#include <QDir>
#include <QFile>
#include <QTextStream>

ReadWrite::ReadWrite(){
    //empty constructor
}

/* both methods in this class are static.
 * You can make a ReadWrite object if necessary.
 * But static methods can be called without an instance of the class.
 */

void ReadWrite::write(const Event& event) {
  QFile file(QDir::currentPath() + "eventlist.txt");
  if(file.open(QIODevice::Append)) {
      QTextStream writeStream(&file);
      writeStream<<event.getName();

    //  writeStream<<event.getDate();
     // writeStream<<event.getTimeSlots();
  }

  file.close();
}

void ReadWrite::read(const QString& filename) {
  QFile file(QDir::currentPath() + "eventlist.txt");
  if(file.open(QIODevice::ReadOnly)) {
      QTextStream readStream(&file);
      while(!readStream.atEnd()) {
        QString line = readStream.readLine();
        //todo: add the read event to the eventlist once we know how the line will be parsed.
      }
  }
  file.close();
}
