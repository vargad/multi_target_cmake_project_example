// 2018 Daniel Varga (vargad88@gmail.com)

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

template <typename Container>
bool all_the_same(const Container &container) {
    return std::all_of(container.begin(), container.end(), [&](auto const &element){ return element == container.front(); });
}

int main()
{
    std::vector<int> v = { 1, 1, 1, 1, 1 };
    std::cout << all_the_same(v) << std::endl;
    std::cout << all_the_same(std::list<int>{1,2,3}) << std::endl;
    return 0;
}

