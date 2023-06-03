#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string words;
    
    std::cout << "Enter your words: ";
    std::getline(std::cin, words);
    std::reverse(words.begin(), words.end()); // reverse proccess

    char wordBegin = words.front(); 
    char wordEnd = words.back(); 

    std::cout << wordBegin << std::endl;
    std::cout << wordEnd << std::endl;
    std::cout << words;

    return 0;
}