#include <vector>
#include <algorithm>
#include <map>

/* source link: https://www.codewars.com/kata/5a8d2bf60025e9163c0000bc */

std::vector<int> solve(std::vector<int>& vec) {
    std::map<int, int> map;
    for (int n : vec){
        map[n]++;
    }
    std::sort(vec.begin(), vec.end(), [&](int a, int b) {return (map[a] > map[b]) || (map[a] == map[b] && a < b); });
    return vec;
}
