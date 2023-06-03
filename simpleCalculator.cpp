#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    double defaultNumber = 12E3;
    cout << "Enter the number to add up:\n";
    cin >> num1 >> num2;
    cout << "Sum is: " << defaultNumber + num1 + num2;
    return 0;
}
