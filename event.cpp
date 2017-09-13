#include event.h
#include <algorithm> //for removing slots and attendees from the event

Event::Event(const string& name, const string& description, const string& creator):
  this->name(&name), this->description(&description) {
    this->addAttendee(creator); //everytime an event gets created, the creator is added automatically by default
}

~Event::Event() {
  delete this.name;
  delete this.description;
  delete this.date;
  delete this.slots;
  delete this.attendees;
}

Event::setName(const string& name) {
  this.name = &name;
}

Event::getName() {
  return this->name;
}

vector<string> Event::getSlots() {
  return this->slots;
}

vector<string> Event::getAttendees() {
  return this->attendees;
}

void Event::addSlot(const string& slot) {
  this->slots.push_back(slot);
}

void Event::removeSlot(const string& slot) {
  this->slots.erase(remove(this->slots.begin(), this->slots.end(), slot), this->slots.end());
}

void Event::addAttendee(const string& attendee) {
  this->attendees.push_back(attendee);
}

void Event::removeAttendee(const string& attendee) {
  this->attendees.erase(::remove(this->attendees.begin(), this->attendees.end(), attendee), this->attendees.end());
}
