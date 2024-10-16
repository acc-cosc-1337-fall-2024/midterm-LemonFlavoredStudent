#include "question4.h"
bool test_config()
{
    return true;
}

bool is_palindrome(const string& word)
{
    int frontCounter = 0;
    int backCounter = word.size()-1;
    while(frontCounter<backCounter)
    {
        if(word[frontCounter] != word[backCounter])
        {
            return false;
        }
        ++frontCounter;
        --backCounter;
    }
    return true;
}