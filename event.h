
#ifndef EVENT_H
#define EVENT_H

#include <vector>
#include <string>

using namespace std;

class Event {
public:
  Event();
  Event(const string& name, const string& description, const string& creator);
  ~Event();
  void setName(const string& name);
  string getName() const;
  string getDate() const;
  vector<string> getSlots() const;
  vector<string> getAttendees() const;
  void addSlot(const string& slot);
  void removeSlot(const string& slot);
  void addAttendee(const string& attendee);
  void removeAttendee(const string& attendee);
private:
  string name;
  string description;
  string date;
  vector<string> timeSlots;
  vector<string> attendees;
};

#endif
