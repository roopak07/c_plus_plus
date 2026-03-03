#include<iostream>
#include<cmath>
// c(diagonal of the rectangle) = squarroot of( a squar + b squar)
int main()
{
    double length, weidth, diagonal;
    std::cout << "Enter length: ", std::cin >> length;    
    std::cout << "Enter weidth: ", std::cin >> weidth;
    diagonal = sqrt(pow(length,2) + pow(weidth, 2));
    std::cout << "diagonal of rectangle is: " << diagonal;
}
