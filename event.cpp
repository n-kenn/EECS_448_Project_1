#include event.h

Event::Event(const string& name, const string& description):
  this->name(&name), this->description(&description)
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

std::vector<string> Event::getSlots() {
  return this->slots;
}

std::vector<string> Event::getAttendees() {
  return this->attendees;
}

void Event::addSlot(const string& slot) {
  this->slots.push_back(slot);
}

void Event::removeSlot(const string& slot) {
  //todo
}

void Event::addAttendee(const string& attendee) {
  this->attendees.push_back(attendee);
}

void Event::removeAttendee(const string& attendee) {
  //todo
}
