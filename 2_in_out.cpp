#include <iostream>

using namespace std;
int main()
{
    int a=100;
    int b=200;
    int c = 0;
    int temp_val;
    c=a;
    a=b;
    b=c;
    cout<<"a = " 
            << a 
            << endl
            << "b = " 
            << b
            << endl;
    cout << "Enater a value:";
    cin >> temp_val;
    cout << "Temp value: " << temp_val; 
    return 0;
}
