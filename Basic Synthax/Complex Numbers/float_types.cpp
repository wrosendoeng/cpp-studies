#include <iostream>
#include <iomanip>> // iostream manipulation class

using namespace std;

int main()
{
    float fValue = 76.4;

    cout << "Size of: " << sizeof(float) << endl;
    cout << setprecision(20) << fixed << fValue << endl; // using fixed function fix to the correct value

    double dValue = 756.45464;

    cout << "Size of: " << sizeof(double) << endl;
    cout << setprecision(20) << fixed << dValue << endl; // using fixed function fix to the correct value

    return 0;
}
