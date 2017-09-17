#include "event.h"

Event::Event(){

}

Event::Event(const QString& name, const QString& date, const QString& creator, const QVector<QString>& timeSlots):
  name(name), date(date), creator(creator), timeSlots(timeSlots){
    this->addAttendee(creator);
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

QVector<QString> Event::getAttendees() const {
  return attendees;
}

void Event::addSlot(const QString& slot) {
  this->timeSlots.push_back(slot);
}

void Event::removeSlot(const QString& slot) {
  this->timeSlots.erase(remove(this->timeSlots.begin(), this->timeSlots.end(), slot), this->timeSlots.end());
}

void Event::addAttendee(const QString& attendee) {
  this->attendees.push_back(attendee);
}

void Event::removeAttendee(const QString& attendee) {
  this->attendees.erase(remove(this->attendees.begin(), this->attendees.end(), attendee), this->attendees.end());
}
