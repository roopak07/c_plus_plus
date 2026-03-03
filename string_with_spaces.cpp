#include <iostream>

using namespace std; //we can remove all the std:: as we are using this line
int main()
{
    //std::string name; 
    string name
    cout << "Enter your name: ";
    //cin >> name; // This wont work if include any spaces in the string
    //std::getline(std::cin, name);
    getline(cin, name);
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "Hello " << name << '\n' << "your " << age << " years old";
}
