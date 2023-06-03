// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int A, B;
        cin >> A >> B;
        // Decare variables for lower and higher of the 2 numbers
        int minAB = min(A, B);
        int maxAB = max(A, B);
        int flag = 0; // mark point

        while (minAB <= maxAB)
        {
            if (minAB == maxAB)
            {
                flag = 1;
                break;
            }
            else
            {
                minAB *= 2;
            }
        }

        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}