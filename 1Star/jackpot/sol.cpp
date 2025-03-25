#include <unordered_set>
constexpr auto solution(auto e) { return unordered_set(e.begin(), e.end()).size() == 1; }

#include <unordered_set>
#include <ranges>

constexpr auto solution(auto e) { return std::ranges::to<std::unordered_set>(e).size() == 1; }

#include <unordered_set>
#include <ranges>

constexpr auto solution(auto e) { return std::unordered_set{e | std::views::as_rvalue}.size() == 1; }
