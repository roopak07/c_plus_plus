// Online C++ compiler to run C++ program online
#include <iostream>
namespace first
{
    int x =10;
}

namespace second
{
    int x=20;
}

int main() {
   int x=0;
   using namespace std;
   cout << "first x:" << first::x << "\n";
   cout << "second x:" << second::x << "\n";
   cout << "local x:" << x;
    return 0;
}
