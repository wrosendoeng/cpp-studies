#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
    private:
        string name;

    public:
        Person();
        string toString();
        void setName(string newName);
        string getName();
};

#endif // PERSON_H
