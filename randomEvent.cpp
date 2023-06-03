#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int randomNum = rand() % 5 + 1;
    switch (randomNum)
    {
    case 1:
        std::cout << "You win tesla car!!";
        break;
    case 2:
        std::cout << "You win jackpot";
        break;
    case 3:
        std::cout << "You win PS5";
        break;
    case 4:
        std::cout << "You got bisycle";
        break;
    case 5:
        std::cout << "You got new house";
        break;
    }
    return 0;
}