#include <iostream>
#include <ctime>
#include <string>

int main()
{
    srand(time(NULL));
    int num = rand() % 10 + 1;
    int guess;
    std::string answer;
    bool continueGame = true;

    while (continueGame)
    {
        std::cout << "Guess your Number: ";
        std::cin >> guess;
        if (guess < num)
        {
            std::cout << "Too Small\n";
            continue;
        }
        else if (guess > num)
        {
            std::cout << "To Large\n";
            continue;
        }
        else
        {
            std::cout << "You're Correct!!\n";
        }

        while (true)
        {
            std::cout << "Do you want play again?? ";
            std::cin >> answer;
            if (answer == "y")
            {
                num = rand() % 10 + 1;
                continueGame = true;
                break;
            }
            else if (answer == "n")
            {
                continueGame = false;
                break;
            }
            else
            {
                std::cout << "Please input valid answer!!\n";
                continue;
            }
        }
    }
    return 0;
}