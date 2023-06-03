#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int inputTotal;
    int dice1, dice2;
    cin >> inputTotal;
    for (int i = 0; i < inputTotal; i++)
    {
    cin >> dice1 >> dice2;
    (dice1 + dice2) > 6 ? cout << "YES" << endl: cout << "NO" << endl;
    }    
    return 0;
}
