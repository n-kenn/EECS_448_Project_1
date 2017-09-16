#ifndef READWRITE_H
#define READWRITE_H

#include <QString>

class ReadWrite {
public:
  ReadWrite();
  static void write(const Event& event);
  static void read(const QString& filename);
private:

};

#endif
