#include "attendee.h"

attendee::attendee()
{

}

attendee::attendee(const QString& name, const QVector<QString>& timeSlots): name(name), timeSlots(timeSlots)
{

}

QString attendee::getName() const
{
    return name;
}

QVector<QString> attendee::getSlots() const
{
    return timeSlots;
}
