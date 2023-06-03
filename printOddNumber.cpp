#include <iostream>
using namespace std;

int main()
{
    int limit;
    cout << "Enter the number limit: ";
    cin >> limit;
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << endl;
        }
        else
        {
            continue;
        }
    }

    return 0;
}