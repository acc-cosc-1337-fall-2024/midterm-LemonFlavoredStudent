#include "question2.h"

bool test_config()
{
    return true;
}

int get_gcd(int num1, int num2)
{
    auto temp = 0;
    while (num1 != num2)
    {
        if (num1<num2)
        {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        else if (num1>num2)
        {
            num1=num1-num2;
        }
    }
    return num1;
}