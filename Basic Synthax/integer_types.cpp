#include <iostream>
#include <limits> // create limits for integer numbers

using namespace std;

int main()
{
    int value = 54656;
    cout << value << endl;

    cout << "Min int value: " << INT64_MIN << endl;
    cout << "Max int value: " << INT64_MAX << endl;

    short int lValue = 3236456413521231;
    cout << lValue << endl;

    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;

    unsigned int uValue = -2342343;
    cout << uValue << endl;

    return 0;
}
