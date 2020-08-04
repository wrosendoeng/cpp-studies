#include <iostream>
#include "Cat.h" // calling header

using namespace std;

int main(){

    cout << "Starting program..." << endl;

    {
        Cat bob;
        bob.speak();
    }

    cout << "Ending program..." << endl;

    return 0;
}


