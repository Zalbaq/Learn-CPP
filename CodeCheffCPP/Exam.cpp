#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int limit;
    int ageMin, ageMax, ageCurrent;

    cin >> limit;
    while (limit != 0)
    {
        cin >> ageMin >> ageMax >> ageCurrent;
        (ageCurrent >= ageMin) && (ageCurrent < ageMax) ? cout << "YES" << endl : cout << "NO" << endl;
        limit--;
    }
    return 0;
}
