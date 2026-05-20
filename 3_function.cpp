#include<iostream>

int name_name(std::string name)
{
    std::cout << "name is: " << name;
    return 0;
}
int main()
{
    std::string name;
    std::cout << "Enter name: ";
    getline(std::cin >> std::ws, name);
    name_name(name);
    return 0;
}
