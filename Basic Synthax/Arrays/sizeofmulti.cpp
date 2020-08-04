#include <iostream>
using namespace std;

int main(){

    int values[4] = {4,7,3,4};
    string animals[2][3] = {
        {"fox","dog","cat"},
        {"mouse","squirrel","parrat"}
    };

    cout << sizeof(string) << endl;
    cout << sizeof(animals) << endl;

    for(unsigned int i=0; i<sizeof(animals)/sizeof(animals[0]); i++){
        for(unsigned int j=0; j<sizeof(animals[0])/sizeof(string); j++){
            cout << animals[i][j] << " " << flush;
        }
        cout << endl;
    }

    return 0;
}

