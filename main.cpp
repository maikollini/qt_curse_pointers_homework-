#include <QCoreApplication>
#include <QDebug>
#include "test.h"
#include "animal.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //create the parent
    test* parent = new test(&a);

    int age = 0;
    qInfo() << "Enter your age ";
    cin >> age;

    parent->dog = new animal(parent);
    parent->dog->factor = 7;
    parent->cat = new animal(parent);
    parent->cat->factor = 5;

    qInfo() << "Your dog age is: " << parent->dog->calc(&age);
    qInfo() << "Yourcat age is: " << parent->cat->calc(&age);

    delete parent;

    return a.exec();
}
