#include <iostream>
using namespace std;

int main()
{
    string name = "ihza Nurkhafidh";
    string *pointerName = &name; // most using & because pointer pointing to memory address of variable

    // to access value variabel use dereference operator -> *variableName, if you don't use dereference operator, you will be access the memory address
    cout << name << endl;
    *pointerName = "Hibatin Wafiroh"; 
    cout << pointerName << endl;
    cout << *pointerName << endl;
    return 0;
}