// Online C++ compiler to run C++ program online
#include <iostream>
/*
class <class_name>
{
<private/public/protected>: //By defult all the members are private in the class
virable
function
};

<class_name> <class_vriable_name>
ex:
class car
{
private:
    sal=20000;
Public
    int speed=80;
    void show_speed()
    {
        std::cout << "speed: " << speed << "\n";
    }
    void showsal
    {
        std::cout << "sal: " << sal << "\n";
    }
}
*/

class car
{
private: // can't be accessed out the class
    int sal=20000;

public: // accessed out side the class using ".operator"
    void set_sal(int x)
    {
        sal = x;
    }
    void show_sal()
    {
        std::cout << "sal:" << sal << "\n";
    }
    int speed=0;
    void show_speed()
    {
        std::cout << "Spped is: " << speed << "\n";
    }
};
int main() {
    car c1;
    c1.speed=60;
    c1.show_speed();
    // We cant directly access c1.sal as its a private member
    // we need to access using the public functions which has private data access
    c1.set_sal(50000);
    c1.show_sal();
    return 0;
}
