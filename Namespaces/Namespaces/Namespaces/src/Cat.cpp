#include <iostream>
#include "Cat.h"

using namespace std;

namespace cats{
Cat::Cat()
{
    //ctor
}

Cat::~Cat()
{
    //dtor
}

void Cat::speak(){
    cout << "Meow" << endl;
}
}
