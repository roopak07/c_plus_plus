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
   using namespace std;
   using namespace first; // since we are using namespace , it represents elemet present in that particular namespace i.e "x" 
   cout << "first x:" << first::x << "\n";
   cout << "second x:" << second::x << "\n";
   cout << "local x:" << x; // since there no local vriable with x and we used namespcae for "first", so in first we have x=10, here we will get output as 10
    return 0;
}
