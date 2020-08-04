#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        Person(): name("unnamed"), age(0){};
        Person(string name, int age): name(name),age(age){};
        string toString();
};

#endif // PERSON_H
