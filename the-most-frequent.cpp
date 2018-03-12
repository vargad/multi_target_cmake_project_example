// 2018 Daniel Varga (vargad88@gmail.com)

#include <list>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>

template <typename Container>
typename Container::value_type most_frequent(const Container &container) {
    std::map<typename Container::value_type, std::size_t> counter;
    for (auto const &elem : container) counter[elem]++;
    return std::max_element(counter.begin(), counter.end(), [](auto const &lhs, auto const &rhs) { return lhs.second < rhs.second; })->first;
}

int main()
{
    std::vector<int> v = { 1, 1, 3, 1, 1, 1, 2 };
    std::cout << most_frequent(v) << std::endl;
    std::cout << most_frequent(std::list<int>{2,2,2,3,4,5,6}) << std::endl;
    return 0;
}

