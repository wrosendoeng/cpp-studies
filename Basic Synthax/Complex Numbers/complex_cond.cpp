#include <iostream>

using namespace std;

int main(){
    int value1 = 7;
    int value2 = 4;

    if(value1 >= 5){
        cout << "Condition 1: true" << endl;
    } else {
        cout << "Condition 1: false" << endl;
    }

    if(value2 >= 4 && value1 <= 7){
        cout << "Condition 2: true" << endl;
    } else {
        cout << "Condition 2: false" << endl;
    }

    if(value2 < 4 || value1 >= 9){
        cout << "Condition 3: true" << endl;
    } else {
        cout << "Condition 3: false" << endl;
    }

    if(value2 != 4){
        cout << "Condition 4: true" << endl;
    } else {
        cout << "Condition 4: false" << endl;
    }
    return 0;
}

