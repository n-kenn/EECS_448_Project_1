#ifndef EVENT_H
#define EVENT_H

#include <QVector>
#include <QString>

using namespace std;

class Event {
public:
    /*!
   * \brief Event - Constructor
   *\details
   * Pre: None
   *
   * Post: An empty event is created.
   */
  Event();
  /*!
   * \brief Event - Constructor
   * \param name
   * \param date
   * \param creator
   * \param timeSlots
   *\details
   * Pre: None
   *
   * Post: An event is created with multiple parts initialized.
   */
  Event(const QString& name, const QString& date, const QString& creator, const QVector<QString>& timeSlots);

  /*!
  * \brief Event - Deconstructor
  *
  * Pre: An event is to be deleted.
  *
  * Post: None
  */
  ~Event();
  /*!
   * \brief getName
   * \return name
   *\details
   * Pre: None
   *
   * Post: None
   */
  QString getName() const;

  /*!
   * \brief getDate
   * \return date
   *\details
   * Pre: None
   *
   * Post: None
   */
  QString getDate() const;

  /*!
   * \brief getCreator
   * \return creator
   *\details
   * Pre: None
   *
   * Post: None
   */
  QString getCreator() const;

  /*!
   * \brief getSlots
   * \return QVector<QString> timeSlots
   *\details
   * Pre: None
   *
   * Post: None
   */
  QVector<QString> getSlots() const;

  /*!
   * \brief getAttendees
   * \return attendees
   *\details
   * Pre: None
   *
   * Post: None
   */
  QVector<QString> getAttendees() const;

  /*!
   * \brief addSlot
   * \param slot
   *\details
   * Pre: a time slot is to be added to the event.
   *
   * Post: a time slot is added to the event.
   */
  void addSlot(const QString& slot);

  /*!
   * \brief removeSlot
   * \param slot
   *\details
   * Pre: A time slot is to be removed from the event.
   *
   * Post: A time slot is removed from the event.
   */
  void removeSlot(const QString& slot);

  /*!
   * \brief addAttendee
   * \param attendee
   *\details
   * Pre: An attendee is to be added to the vector.
   *
   * Post: An attendee is added.
   */
  void addAttendee(const QString& attendee);

  /*!
   * \brief removeAttendee
   * \param attendee
   * \details
   * Pre: An attendee is to be removed from the event.
   *
   * Post: An attendee is removed.
   */
  void removeAttendee(const QString& attendee);
private:
  QString name; /*!< The name of the event.*/
  QString date; /*!< the date that the event is going to take place at.*/
  QString creator; /*!< The name of the creator.*/
  QVector<QString> timeSlots; /*!< The times the event will be taking place at. Multiple times in stagnated bunches might be used,
                                   so a vector is used. */
  QVector<QString> attendees; /*!< The list of the attendees to an event.*/
};

#endif
