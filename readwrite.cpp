#include "event.h"
#include "readwrite.h"
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
  QFile file("eventlist.txt");
  if(file.open(QIODevice::Append | QIODevice::WriteOnly)) {
      QTextStream writeStream(&file);
      writeStream<< "[event] " + event.getName() +"\n";
      writeStream<< "[creator] " + event.getCreator() + "\n";
      writeStream<< "[date] " + event.getDate() + "\n";
      writeStream<< "[timeSlots] ";
      foreach(QString time, event.getSlots())
      {
          writeStream<<time + ",";
      }
      writeStream<< "\n\n";
  }
  file.close();
}

QString ReadWrite::read() {
  QFile file("eventlist.txt");
  QString lines = "test";
  if(file.open(QIODevice::ReadOnly)) {
      QTextStream readStream(&file);
      lines = readStream.readAll();
      file.close();
  }
  return lines;
}
