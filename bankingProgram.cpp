#include <iostream>
#include <iomanip>
void showBalance(double balance);
double depositMoney(double deposit);
double withdrawMoney(double withdraw);

int main()
{
    double balance = 2000000;
    double deposit;
    double withdraw;
    char menu;
    bool continueMenu = true;

    while (continueMenu)
    {
        std::cout << "=====================================\n";
        std::cout << "\tWelcome to Nasional Bank\n";
        std::cout << "=====================================\n";
        std::cout << "Please select the menu:\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cout << "Menu: ";
        std::cin >> menu;

        switch (menu)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            std::cout << "Please enter your money to be deposit\n";
            std::cin >> deposit;

            balance += depositMoney(deposit);
            break;
        case 3:
            std::cout << "Please enter your money to be withdraw\n";
            std::cin >> withdraw;

            balance -= withdrawMoney(withdraw);
            break;
        case 4:
            continueMenu = false;
            std::cout << "Thanks for using our Bank\n";
            break;

        default:
            std::cout << "Please enter valid menu\n";
            break;
            ;
        }
    }
    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance " << std::fixed << std::setprecision(2) << balance << " remaining\n";
}

double depositMoney(double deposit)
{
    return deposit;
}
double withdrawMoney(double withdraw)
{
    return withdraw;
}