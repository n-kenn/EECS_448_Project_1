#ifndef ATTENDEE_H
#define ATTENDEE_H

#include <QObject>
#include <QVector>
class Attendee
{
public:
    Attendee();
    Attendee(const QString& name, const QVector<QString>& timeSlots);
    QString getName() const;
    QVector<QString> getSlots() const;
private:
    QString name;
    QVector<QString> timeSlots;

};

#endif // ATTENDEE_H
