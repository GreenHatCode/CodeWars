#include <string>
#include <vector>

/* https://www.codewars.com/kata/52249faee9abb9cefa0001ee */

std::vector<std::string> uniq(const std::vector<std::string>& v) {
    if (v.empty())return v;
    std::vector<std::string> resV;
    resV.push_back(v.front());
    for (auto buf : v)
    {
        if (resV.back() != buf)resV.push_back(buf);
    }
    return resV;
}






