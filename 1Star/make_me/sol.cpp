#include <unordered_map>
#include <sstream>

std::string solution(std::string s) {
    std::unordered_map<std::string, std::string> m{
        {"smile", ":D"}, {"grin", ":)"}, {"sad", ":("},
        {"shocked", "D:"}, {"bored", "(._.)"}, {"painful", "(>_<)"}
    };
    size_t pos = s.find_last_of(' ');
    return s.substr(0, pos) + " " + m[s.substr(pos + 1)];
}
