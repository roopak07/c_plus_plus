#include <iostream>

int main()
{
    double a=50, b=100, max, min;
    max=std::max(a,b);
    std::cout << "Max value is: " << max << "\n";
    
    min=std::min(a,b);
    std::cout << "Min value is: " << min;
    return 0;
}
