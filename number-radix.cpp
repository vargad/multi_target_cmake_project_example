// 2018 Daniel Varga (vargad88@gmail.com)

#include <iostream>
#include <string>

int number_radix(const std::string &text, int radix) {
    try {
        return std::stoi(text, nullptr, radix);
    } catch (std::invalid_argument &) {
        return -1;
    }
}

int main()
{
    std::cout << number_radix("123", 10) << std::endl;
    std::cout << number_radix("AB", 16) << std::endl;
    std::cout << number_radix("AB", 10) << std::endl;
    return 0;
}

