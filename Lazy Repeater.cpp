#include <iostream>
#include <string>

/* source link: https://www.codewars.com/kata/51fc3beb41ecc97ee20000c3 */

// Just use function objects or lambdas
class LasyRepeater
{
public:
    LasyRepeater(const std::string& str) :str{ str }
    {
    }

    char operator ()() // invoke operator
    {
        char copy = str[i];
        i++;
        if (i >= str.size())i = 0;
        return copy;
    }

private:
    const std::string str;
    size_t i = 0;
};

auto makeLooper(const std::string& str)
{
    LasyRepeater repeater(str);
    return repeater;
}
