#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

std::vector<int> solve(std::vector<int>& vec) {
    std::map<int, int> map;
    for (int n : vec){
        map[n]++;
    }
    std::sort(vec.begin(), vec.end(), [&](int a, int b) {return (map[a] > map[b]) || (map[a] == map[b] && a < b); });
    return vec;
}


int main()
{
    std::vector<int> v = { 5,9,6,9,6,5,9,9,4,4 };
    solve(v);
}

