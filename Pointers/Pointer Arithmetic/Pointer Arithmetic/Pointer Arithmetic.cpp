#include <iostream>

using namespace std;

int main(){

    const int NSTRINGS = 5;
    string texts[NSTRINGS] = {"one", "two", "three", "four", "five"};

    string *pTexts = texts;

    string *pEnd = &texts[NSTRINGS];
    pTexts = &texts[0];

    while(pTexts != pEnd){
        cout << *pTexts << endl;
        pTexts++;
    }

    pTexts = &texts[0];

    long elements = (long)(pEnd - pTexts);
    cout << elements << endl;

	pTexts = &texts[0];
	pTexts += NSTRINGS/2;
	cout << *pTexts << endl;

	return 0;
}
