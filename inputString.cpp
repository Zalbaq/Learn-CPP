#include <iostream>
using namespace std;

int main()
{
    // cin can only dispkay a singgle word (even if you type many word)
    string fullName;
    cout << "Enter your fullname\n";
    // cin >> fullName;
    // cout << "Your name is: " << fullName;

    // Using getLine(stream, string)
    // getline(cin, fullName);
    // cout << "Your name is: " << fullName;

    // Using getLine(stream, string, delimiter)
    getline(cin, fullName, ','); // will be end to read the line if meet the character "," 
    cout << "Your name is: " << fullName;


    return 0;
}