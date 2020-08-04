#include <iostream>
using namespace std;

int main()
{
    string password = "hello";
    cout << "Enter your password: " << flush;

    string input;
    cin >> input;

    while(input != password){
        cout << "Access Denied!" << endl;
        cout << "Enter your password: " << flush;
        cin >> input;
    }

    cout << "Password Accepted!" << endl;

    return 0;
}
