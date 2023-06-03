#include <iostream>
using namespace std;

int main()
{
    int nama[5] = {1, 2, 3, 5, 4};
    cout << sizeof(nama) << endl; // cause the array size 5 and int size 4 bytes, so 5*4 = 20;
    double number[5];
    cout << sizeof(number); // cause the array size 5 and double size 4 bytes, so 5*8 = 40;
}