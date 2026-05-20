// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {0,1,2};
    std::cout << "\n" << "size of the vector: " << vec.size() << "Elements:";
    std::cout << vec[0] << vec[1] << vec[2] << "\n";
    vec.push_back(4); // Adds an element to the end of the vector. 
    std::cout << "size of vector After push back:" << vec.size() << " Elements:";
    for(int i=0; i<vec.size(); i++)
        std::cout << vec[i];
    std::cout<< "\n" <<"vector After removing last element in the vector:";
    vec.pop_back(); // Removes the last element from the vector.
    for(int i=0; i<vec.size() ; i++)
        std::cout << vec[i];
    std::cout << "\n" <<"Size of vector is:" << vec.size();
    return 0;
}
