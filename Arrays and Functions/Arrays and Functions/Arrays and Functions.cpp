#include <iostream>

using namespace std;

string numbers[] = {"one","two","three"};

void show1(const int nElements, string texts[]){
    for(int i=0;i<3;i++){
        cout << texts[i] << " " << flush;
    }
}

void show2(const int nElements, string *texts){
    for(int i=0;i<3;i++){
        cout << texts[i] << " " << flush;
    }
}

void show3(string (&texts)[3]){
    for(int i=0;i<sizeof(texts)/sizeof(string);i++){
        cout << texts[i] << " " << flush;
    }
}

string *getArray(){
    // Don't return pointers to local variables!!! string texts[] = {"one","two","three"};

    return numbers;
}

char *getMem(){
    char *pMem = new char[100];
    return pMem;
}

void freeMemory(char *pMem){
    delete [] pMem;
}

int main(){

    string texts[] = {"apple", "orange", "banana"};

    cout << sizeof(texts) << endl;

    show3(texts);

    char *pMemory = getMem();
    freeMemory(pMemory);

	return 0;
}
