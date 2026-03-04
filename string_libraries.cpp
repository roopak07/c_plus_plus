int main()
{
    std::string name;
    std::cout << "Enter username: ";
    
    std::getline(std::cin >> std::ws, name);
    if(!(name.empty()))
    {
        std::cout << "Length of the string is:" << name.length();
    }
    else
        std::cout << "String is empty";
    name.append("@gmail.com");
    std::cout << "User name is: " << name;
  // string library functions are found in - https://cplusplus.com/reference/string/string/
}
