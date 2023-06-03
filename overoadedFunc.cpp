#include <iostream>
void happyBirthday();
void happyBirthday(std::string name);

int main()
{
    happyBirthday();
    happyBirthday("Firaa");
    return 0;
}

// Multiple func can have the same name, but type of parameters must ber different
void happyBirthday()
{
    std::cout << "Happy Birthday to youu!!\n";
}

void happyBirthday(std::string name)
{
    std::cout << "Happy Birthday " << name << std::endl;
}