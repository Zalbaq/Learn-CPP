#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Masukkan angka: ";
    cin >> number;
    if (number > 0)
    {
        cout << "Angka positif";
    }
    else if (number < 0)
    {
        cout << "Angka Negatif";
    }
    else
    {
        cout << "Bilangan 0";
    }

    return 0;
}