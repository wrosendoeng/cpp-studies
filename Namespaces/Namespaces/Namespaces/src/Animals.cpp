#include <iostream>
#include "Animals.h"

using namespace std;

namespace jwp {

Cat::Cat()
{
    //ctor
}

Cat::~Cat()
{
    //dtor
}

void Cat::speak(){
    cout << "Ssssss!!" << endl;
}

}
