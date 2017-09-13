
#ifndef EVENT_H
#define EVENT_H

#include <vector>

using namespace std;

class Event {
public:
  Event();
  ~Event();
  void setName(const string& name);
  void getName(const string& name);
  vector<string> getSlots();
  vector<string> getAttendees();
  void addSlot(const string& slot);
  void removeSlot(const string& slot);
  void addAttendee(const string& attendee);
  void removeAttendee(const string& attendee);
  void loopThru(const vector<string>& list); //loops through a vector and currently prints each element
private:
  string *name = nullptr;
  string *description = nullptr;
  string *date = nullptr;
  vector<string> *slots = nullptr;
  vector<string> *attendees = nullptr;
};

#endif
