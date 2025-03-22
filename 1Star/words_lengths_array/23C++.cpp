#include <vector>
#include <string>
#include <ranges>

auto word_lengths(const std::vector<std::string>& words) {
    return words | std::views::transform(&std::string::size);
}
