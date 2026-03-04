#include<iostream>

int main()
{
    std::string name;
    std::cout << "Enter anything: ";
    
    std::getline(std::cin >> std::ws, name);
    std::cout << "Length of the string is:" << name.length();
}
