#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){
    if (happy){
        cout << "Meouw!!!" << endl;
    } else {
        cout << "Sssss!!!" << endl;
    }
}

