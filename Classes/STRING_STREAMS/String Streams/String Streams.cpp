#include <iostream>
#include <sstream> // create a long stream concatenating words

using namespace std;

int main(){

    string name = "Bob";
    int age = 32;

    stringstream ss;

    ss << "Name is: ";
    ss << name;
    ss << "; Age is: ";
    ss << age;

    cout<< ss.str() << endl;

	return 0;
}
