#include <iomanip>
#include <iostream>
#include <typeinfo>

int main()
{
    std::string a;

    std::cin >> a;
    if (a == "")
        std::cout << "null";
        
    // std::cout << std::setfill('x') << std::setw(10);
    // std::cout << 12345678901 << std::endl;
}