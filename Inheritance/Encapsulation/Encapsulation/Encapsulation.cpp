#include <iostream>

using namespace std;

class Frog {
private:
    string name;
    string getName() {return name;}
public:
    Frog(string name): name(name){}
    void info() { cout << "My name is: " << getName() << endl; }
};

int main(){

	Frog Frog("Freddy");

	Frog.info();

	return 0;
}
