
#ifndef EVENT_H
#define EVENT_H

#include <QVector>
#include <QString>

using namespace std;

class Event {
public:
  Event();
  Event(const QString& name, const QString& date, const QString& creator);
  ~Event();
  void setName(const QString& name);
  QString getName() const;
  QString getDate() const;
  QString getCreator() const;
  QVector<QString> getSlots() const;
  QVector<QString> getAttendees() const;
  void addSlot(const QString& slot);
  void removeSlot(const QString& slot);
  void addAttendee(const QString& attendee);
  void removeAttendee(const QString& attendee);
private:
  QString name;
  QString creator;
  QString date;
  QVector<QString> timeSlots;
  QVector<QString> attendees;
};

#endif
