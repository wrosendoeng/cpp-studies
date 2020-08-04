#include <iostream>
#include "Cat.h" // calling header

using namespace std;

int main(){

    Cat jim;
    jim.happy = true;
    jim.speak();

    Cat bob;
    bob.happy = false;
    bob.speak();

    return 0;
}


