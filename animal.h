#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class animal : public QObject
{
    Q_OBJECT
public:
    explicit animal(QObject *parent = nullptr);

    //deconstructor
    ~animal();

    int calc(int *age);

    int factor;

signals:

};

#endif // ANIMAL_H
