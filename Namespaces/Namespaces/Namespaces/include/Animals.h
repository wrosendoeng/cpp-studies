#ifndef ANIMALS_H
#define ANIMALS_H
#include <iostream>

using namespace std;
namespace jwp{

const string CATNAME = "Tiddles";

class Cat
{
    public:
        Cat();
        virtual ~Cat();
        void speak();
};

}

#endif // ANIMALS_H
