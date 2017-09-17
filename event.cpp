#include "event.h"

Event::Event(){

}

Event::Event(const QString& name, const QString& date, const QString& creator, const QVector<QString>& timeSlots):
  name(name), date(date), creator(creator), timeSlots(timeSlots){
}

Event::~Event() {

}

QString Event::getName() const {
  return name;
}

QString Event::getDate() const {
  return date;
}

QString Event::getCreator() const {
    return creator;
}

QVector<QString> Event::getSlots() const {
  return timeSlots;
}

QVector<Attendee> Event::getAttendees() const {
  return attendees;
}

QVector<QString> Event::getAttendeeNames() const {
    QVector<QString> names;
    foreach(Attendee attendee, attendees) {
        names.append(attendee.getName());
    }
    return names;
}

void Event::addSlot(const QString& slot) {
  this->timeSlots.push_back(slot);
}

void Event::removeSlot(const QString& slot) {
  this->timeSlots.erase(remove(this->timeSlots.begin(), this->timeSlots.end(), slot), this->timeSlots.end());
}

void Event::addAttendee(const Attendee& attendee) {
  this->attendees.push_back(attendee);
}
