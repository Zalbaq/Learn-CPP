#include <iostream>
using namespace std;

int main(){
    int num1= 50;
    int num2 = 40;
    int n = 3;

    // operator bitwise right shift ">>"
    cout << (num1 >>= n) << endl; // this means the num1 will be devide by 2^n is 6

    // operator bitwise left shift
    cout << (num2 <<= n) << endl; // this means the num2 will be multiply by 2^n is 320

}