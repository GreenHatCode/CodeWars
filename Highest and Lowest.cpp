#include <iostream>
#include <string>

std::string highAndLow(const std::string& numbers) {
    
    size_t pos = numbers.find(' ');
    int max = std::stoi(numbers.substr(0, pos));
    int min = max;

    size_t prev = pos + 1;
    while (numbers.find(' ', pos)!=std::string::npos)
    {
        pos = numbers.find(" ", prev);
        int num = std::stoi(numbers.substr(prev, pos));
        if (num > max)max = num;
        else if (num < min)min = num;

        prev = pos + 1;
    }

    std::string result = std::to_string(max);
    result += " ";
    result += std::to_string(min);

    return result;
}