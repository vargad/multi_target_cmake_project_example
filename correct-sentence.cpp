// 2018 Daniel Varga (vargad88@gmail.com)

#include <iostream>
#include <locale>

std::string correct_sentence(const std::string &text) {
    return std::toupper(text[0], std::locale())+text.substr(1, text.npos)+(text.back() == '.' ? "" : ".");
}

int main()
{
    std::cout << correct_sentence("greetings, friends") << std::endl;
    return 0;
}
