#include <iostream>

using namespace std;
int main()
{
    string name;
    int age;
    
    cout << "Enter your age: ";
    cin >> age; // here cin will get new line so the program will terminate, so we need to use below get line to accept new line for the next charecter
    
    cout << "Enter your name: ";
    //getline(cin, name); // wont accept white space if we read any string before tis
    // getline(std::cin >> std::ws, name); //This will accept white space if read any string before this   
    getline(cin >> ws, name); //This will accept white space if read any string before this    
    cout << "Hello " << name << "\n";
    cout << "Your " << age << " years old";
}
