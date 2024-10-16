#include "question1.h"
#include <sstream>
using std::ostringstream; using std::istringstream;
bool test_config()
{
    return true;
}

string get_factorial_sequence(int num)
{
    string factorialString = "";
    int factorial = 1;

    if (num >= 1 and num <= 10)
    {
        ostringstream str1;
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
            str1 << num;
            factorialString += str1.str();
        }
    }
}