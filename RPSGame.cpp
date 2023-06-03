#include <iostream>
#include <ctime>
void showUserChoice(int menu);
char getCompChoice();
void getWinner(char userChoice, char compChoice);
char getUserChoice(int menu);
void showCompChoice(char comChoice);

int main()
{
    char userChoice;
    char CompChoice;
    int menu;
    std::cout << "Select your waeapon:\n";
    std::cout << "1. ROCK\n";
    std::cout << "2. PAPER\n";
    std::cout << "3. SCISSORS\n";
    std::cout << "Menu: ";
    std::cin >> menu;

    userChoice = getUserChoice(menu);
    showUserChoice(menu);

    CompChoice = getCompChoice();
    showCompChoice(CompChoice);
    getWinner(userChoice, CompChoice);

    return 0;
}

void showUserChoice(int menu)
{
    switch (menu)
    {
    case 1:
        std::cout << "You select ROCK!\n";
        break;
    case 2:
        std::cout << "You select PAPER!\n";
        break;
    case 3:
        std::cout << "You select SCISSORS!\n";
        break;
    default:
        std::cout << "Please select valid weapon\n";
        break;
    }
}

void showCompChoice(char comChoice)
{
    switch (comChoice)
    {
    case 'r':
        std::cout << "Computer select ROCK!\n";
        break;
    case 'p':
        std::cout << "Computer select PAPER!\n";
        break;
    case 's':
        std::cout << "Computer select SCISSORS!\n";
        break;
    }
}

char getUserChoice(int menu)
{
    switch (menu)
    {
    case 1:
        return 'r';
        break;
    case 2:
        return 'p';
        break;
    case 3:
        return 's';
        break;
    }
}

char getCompChoice()
{
    int compChoice;
    srand(time(NULL));
    compChoice = rand() % 3 + 1;
    switch (compChoice)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}

void getWinner(char userChoice, char compChoice)
{
    switch (userChoice)
    {
    case 'r':
        if (compChoice == 's')
        {
            std::cout << "You Winn!!";
        }
        else if (compChoice == 'p')
        {
            std::cout << "You Lose!!";
        }
        else
        {
            std::cout << "DRAW!!";
        }

        break;
    case 'p':
        if (compChoice == 'r')
        {
            std::cout << "You Winn!!";
        }
        else if (compChoice == 's')
        {
            std::cout << "You Lose!!";
        }
        else
        {
            std::cout << "DRAW!!";
        }
        break;
    case 's':
        if (compChoice == 'p')
        {
            std::cout << "You Winn!!";
        }
        else if (compChoice == 'r')
        {
            std::cout << "You Lose!!";
        }
        else
        {
            std::cout << "DRAW!!";
        }
        break;
    }
}