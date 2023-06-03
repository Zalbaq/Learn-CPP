#include <iostream>
#include <ctime>

int main()
{
    srand(std::time(NULL));

    int num = (rand() % 6) + 1;
    std::cout << num;
    return 0;
}