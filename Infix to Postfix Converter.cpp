#include <iostream>
#include <string>

/* source link: https://www.codewars.com/kata/52e864d1ffb6ac25db00017f */

int prec(char op)
{
    // determaine the precedence of the operator
    switch (op)
    {
    case '^':
        return 3;
        break;
    case '/':
    case '*':
        return 2;
        break;
    case '+':
    case '-':
        return 1;
        break;
    default:
        return -1;
        break;
    }
}


std::string to_postfix(std::string& infix) {
    std::string result;
    
    std::string operators = "+-*/^()";
    std::string stack;
    for (size_t i = 0; i < infix.size(); i++)
    {
        if (operators.find_first_of(infix[i]) == std::string::npos)
        {
            result.push_back(infix[i]);
        }
        else
        {
            if (infix[i] == '(')stack.push_back(infix[i]);
            else if (infix[i] == ')')
            {
                // load all operators from stack to result until meet '('
                while (stack.back() != '(')
                {
                    result.push_back(stack.back());
                    stack.pop_back();
                }
                stack.pop_back();
            }
            else
            {
                // the char is operator
                while (!stack.empty() && prec(infix[i])<=prec(stack.back()))
                {
                    result.push_back(stack.back());
                    stack.pop_back();
                }
                stack.push_back(infix[i]);

            }
        }
    }
    // push all the remaining operators from the stack
    while (!stack.empty())
    {
        result.push_back(stack.back());
        stack.pop_back();
    }
    
    return result;
}

int main()
{
    std::string input = "3*3/(7+1)";
    std::cout << to_postfix(input);
}

