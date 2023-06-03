#include <iostream>
using namespace std;

int main()
{
    // int angka1, angka2, angka3;
    // cin >> angka1 >> angka2 >> angka3;
    // cout << "Angka 1: " << angka1 << endl;
    // cout << "Angka 2: " << angka2 << endl;
    // cout << "Angka 3: " << angka3 << endl;

    int myAge = 13;
    const int myBirthday = 12;
    string firstName = "ihza ";
    string lastName = "Nurkhafidh";
    const bool isAdult = true;
    float GPA = 4.0;

    myAge = 20;
    cout << "My Name is " << firstName.append(lastName) << endl; // Append() is function for concat the string
    cout << "My Age: " << myAge << endl;
    cout << "Adult: " << isAdult << endl;
    cout << "My GPA: " << GPA << endl;
    cout << "My Birthday is " << myBirthday << endl;
    cout << "First letter name: " << firstName[0];

    // insert double quote inside the string
    string nickname = "We usually called \"Lord\"";
    cout << "\n"
         << nickname;
    return 0;
}
