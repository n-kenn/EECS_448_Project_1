#ifndef READWRITE_H
#define READWRITE_H

#include <QString>

class ReadWrite {
public:
    /*!
   * \brief ReadWrite
   *
   * Pre: None
   *
   * Post: None
   */
  ReadWrite();
  /*!
   * \brief write
   * \param event
   *
   * Pre: None
   *
   * Post: An Event is written to a file.
   */
  static void write(const Event& event);
<<<<<<< HEAD

  /*!
   * \brief read
   * \param filename
   *
   * Pre: None
   *
   * Post: A file is read. For this specific purpose, it is used to read events.
   */
  static void read(const QString& filename);
=======
  static void read(/*const QString& filename*/);
>>>>>>> origin/NoahBranch
private:

};

#endif
