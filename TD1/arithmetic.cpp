#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    std::string octal;
    std::cin >> octal;

    
    int decimal = std::stoi(octal, nullptr, 8);

   
    std::stringstream ss;

    ss << std::hex << decimal;
    std::string hex = ss.str();

    std::cout << hex << std::endl;
    return 0;
}
