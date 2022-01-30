#include "animal.h"

animal::animal(QObject *parent)
    : QObject{parent}
{
    qInfo() << this << "Animal constructed";
}

animal::~animal()
{
    qInfo() << this << "Animal deconstructed";
}

int animal::calc(int *age)
{
    return *age * this->factor;
}
