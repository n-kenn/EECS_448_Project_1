#include "event.h"
#include <algorithm> //for removing slots and attendees from the event

Event::Event() {

}

Event::Event(const string& name, const string& description, const string& creator):
  name(name), description (description) {
    this->addAttendee(creator); //everytime an event gets created, the creator is added automatically by default
}

Event::~Event() {

}

void Event::setName(const string& name) {
  this->name = name;
}

string Event::getName() const {
  return name;
}

string Event::getDate() const {
  return date;
}

vector<string> Event::getSlots() const {
  return timeSlots;
}

vector<string> Event::getAttendees() const {
  return attendees;
}

void Event::addSlot(const string& slot) {
  this->timeSlots.push_back(slot);
}

void Event::removeSlot(const string& slot) {
  this->timeSlots.erase(remove(this->timeSlots.begin(), this->timeSlots.end(), slot), this->timeSlots.end());
}

void Event::addAttendee(const string& attendee) {
  this->attendees.push_back(attendee);
}

void Event::removeAttendee(const string& attendee) {
  this->attendees.erase(::remove(this->attendees.begin(), this->attendees.end(), attendee), this->attendees.end());
}
