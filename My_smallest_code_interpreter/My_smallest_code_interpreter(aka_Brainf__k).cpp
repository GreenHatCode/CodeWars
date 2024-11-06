
/* source link: https://www.codewars.com/kata/526156943dfe7ce06200063e */


#include <iostream>
#include <algorithm>
#include <stack>
#include <map>

class Data
{
public:
    Data(){}
    unsigned char getValue()
    {
        return this->value;
    }
    void setValue(unsigned char value)
    {
        this->value = value;
    }
    Data operator ++(int)
    {
        Data copy = *this;
        if (this->value + 1 > 255)this->value = 0;
        else ++(this->value);
        
        return copy;
    }
    Data operator --(int)
    {
        Data copy = *this;
        if (this->value - 1 < 0)this->value = 255;
        else --(this->value);

        return copy;
    }

private:
    unsigned char value = 0;
};


/*
the main program execution loop starts at the first symbol of the code 
and goes until the iter reach the \0

*/


std::string brainLuck(const std::string& code, const std::string& input) {

    std::string output;

    // loading all loops in code
    std::map<std::string::const_iterator, std::string::const_iterator> loop_endings;  // key - [
    std::map<std::string::const_iterator, std::string::const_iterator> loop_beginings;  // key - ]
    {
        std::stack<std::string::const_iterator> stack;
        for (std::string::const_iterator iter = code.begin(); iter < code.end(); iter++)
        {
            if (*iter == '[')stack.push(iter);
            else if (*iter == ']')
            {
                loop_endings.emplace(stack.top(), iter);
                loop_beginings.emplace(iter, stack.top());
                stack.pop();
            }
        }
    }

    std::string::const_iterator input_iter = input.begin();
    Data* dataPointer = new Data[4000]; // the program's memory, the pointer begins on the first element
    // program execution loop
    for (std::string::const_iterator iter = code.begin(); iter < code.end() ; iter++)
    {
        switch (*iter)
        {
        case '>': // increment the data pointer 
            dataPointer++;
            break;
        case '<': // dencrement the data pointer
            dataPointer--;
            break;
        case '+': // increment the byte at the data pointer.
            (*dataPointer)++;
            break;
        case '-': // dencrement the byte at the data pointer.
            (*dataPointer)--;
            break;
        case '.': // output the byte at the data pointer.
            std::cout << dataPointer->getValue();
            output.push_back(dataPointer->getValue());
            break;
        case ',': // accept one byte of input
            dataPointer->setValue(*input_iter);
            input_iter++;
            break;
        case '[': // exit from loop if the data pointer is zero
            if (dataPointer->getValue() == 0)
            {
                // moving to the loop ending
                iter = loop_endings.at(iter);
            }
            break;
        case ']': // continue the loop if the data pointer is nonzero
            if (dataPointer->getValue() != 0)
            {
                // moving to the loop begining
                iter = loop_beginings.at(iter);
            }
            break;

        default:
            std::cerr << "no such command: " << *iter << std::endl;
            break;
        }
    }
    
    return output;
}
