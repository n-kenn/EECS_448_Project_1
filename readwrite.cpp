#include "event.h"
#include "readwrite.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox> //for debug

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
      foreach(QString time, event.getSlots()){
          if (time.left(2).toInt() > 12)
              time = QString::number((time.left(2).toInt()-12)) + time.right(6) + " PM";
          if (time.contains("AM") || time.contains("PM"))
            writeStream<<time + ",";
          else{
              if (time.left(2).toInt() < 13)
                writeStream<<time + " AM, ";
                else
                      writeStream<<time + " PM, ";
          }
      }
      writeStream << "\n";
      if (event.getAttendees().size() > 0)
      {
          foreach(Attendee att, event.getAttendees())
          {
              writeStream<<"[attendee] " + att.getName() + "\n";
              writeStream<<"[att_timeSlots] ";
              writeStream<< "\n\n";
            }
        file.close();
        }
  }
}

void ReadWrite::read(QVector<Event>& eventList) {
  QFile file("eventlist.txt");
  QString lines = "test";
  QString eventName;
  QString creatorName;
  QString date;
  QString times;
  QVector<QString> timeSlots;

  QString att_name;
  QString att_times;

  if(file.open(QIODevice::ReadOnly))
  {



      QTextStream readStream(&file);
      while (!readStream.atEnd())
      {
          lines = readStream.readLine();
          if (lines.indexOf("[event]") == 0)
          {
              eventName = lines.right(lines.size()-8);
              lines = readStream.readLine();
              creatorName = lines.right(lines.size()-10);
              lines = readStream.readLine();
              date = lines.right(lines.size()-7);
              lines = readStream.readLine();
              times = lines.right(lines.size()-12);
              foreach (QString time, times.split(",")) {
                 timeSlots.append(time);
              }
              timeSlots.removeLast();
              Event newEvent(eventName, creatorName, date, timeSlots);
              timeSlots.clear();
              lines = readStream.readLine();
              while (lines.startsWith("[attendee] "))
              {

                  att_name = lines.right(lines.size()-11);
                  lines = readStream.readLine();
                  att_times = lines.right(lines.size()-16);
                  foreach (QString time, times.split(",")) {
                     timeSlots.append(time);
                  }
                  timeSlots.removeLast();
                  Attendee att(att_name, timeSlots);
                  newEvent.addAttendee(att);
                  lines = readStream.readLine();
                  timeSlots.clear();
              }

              eventList.append(newEvent);

          }
       }
      file.remove();
    }
}
