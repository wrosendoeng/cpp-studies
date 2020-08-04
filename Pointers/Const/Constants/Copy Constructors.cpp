#include <iostream>

using namespace std;

class Animal{
private:
    string name;
public:
    Animal() {cout << "Animal created." << endl;};
    void setName(string name) {this->name = name;};
    void speak() const {cout<< "My name is: " << name << endl;};
};

int main(){

    Animal animal1;
    animal1.setName("Freddy");

    Animal animal2 = animal1;
    animal2.setName("Bob");

    animal1.speak();
    animal2.speak();

	return 0;
}
