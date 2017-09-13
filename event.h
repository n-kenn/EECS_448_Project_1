
#ifndef EVENT_H
#define EVENT_H

#include <vector>

class Event {
public:
  Event();
  ~Event();
  void setName(const string& name);
  void getName(const string& name);
  std::vector<string> getSlots();
  std::vector<string> getAttendees();
  void addSlot(const string& slot);
  void removeSlot(const string& slot);
  void addAttendee(const string& attendee);
  void removeAttendee(const string& attendee);
private:
  string *name = nullptr;
  string *description = nullptr;
  string *date = nullptr;
  vector<string> *slots = nullptr;
  vector<string> *attendees = nullptr;
};

#endif
