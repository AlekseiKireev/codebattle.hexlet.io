#include <iostream>
#include <vector>
#include <string>
#include <ranges>
#include <algorithm>

int main() {
    std::vector<std::string> vec = {"hello", "world", "cpp23"};
    char old_char = 'o', new_char = 'X';

    std::ranges::for_each(vec, [old_char, new_char](std::string& str) {
        std::ranges::replace(str, old_char, new_char);
    });

    for (const auto& str : vec) {
        std::cout << str << ' ';
    }
}
