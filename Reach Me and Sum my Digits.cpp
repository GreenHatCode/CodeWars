#include <iostream>
#include <vector>

/* source link: https://www.codewars.com/kata/55ffb44050558fdb200000a4 */

int sumDigNthTerm(int initval, const std::vector<int> patternl, int nthterm) {
    
    int pattern_index = 0;
    for (int i = 1; i < nthterm; i++, pattern_index++)
    {
        if (!(pattern_index < patternl.size()))
        {
            pattern_index = 0;
        }
            
        initval += patternl[pattern_index];
    }
    
    // count the sum of digits
    int sum = 0;
    while (initval != 0)
    {
        sum += initval % 10;
        initval /= 10;
    }
    return sum;
}

int main()
{
    int initval = 10, nthterm = 6;
    std::vector<int> patternl = { 2, 1, 3 };
    std::cout << sumDigNthTerm(initval, patternl, nthterm);
}
