#include <iostream>
#include <unordered_set>
#include <vector>
#include <ranges>

constexpr auto solution(auto e, int method) {
    switch (method) {
        case 1:
            return std::unordered_set(e.begin(), e.end()).size() == 1;
        case 2:
            return std::ranges::to<std::unordered_set>(e).size() == 1;
        case 3:
            //return std::unordered_set{e | std::views::as_rvalue}.size() == 1; // тут ошибка
        default:
            return false;
    }
}

int main() {
    std::vector<std::vector<std::string>> test_cases = {
        {"9919", "9919", "9919"},  // true
        {"abc", "abc", "abb"},    // false
        {"@", "@", "@"}           // true
    };

    for (int method = 1; method <= 3; ++method) {
        std::cout << "Testing method " << method << ":\n";
        for (const auto& test : test_cases) {
            std::cout << (solution(test, method) ? "true" : "false") << '\n';
        }
    }
}
/*
Ошибка возникает из-за попытки передать std::views::as_rvalue в std::unordered_set, что не поддерживается. 
std::views::as_rvalue преобразует элементы в rvalue, но unordered_set требует, 
чтобы передаваемые элементы были хешируемыми, а as_rvalue_view не удовлетворяет этим требованиям.
*/
