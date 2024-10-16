#include "question2.h"
#include <iostream>
using std::cout; using std::cin;

int main()
{
    int done,num1,num2,gcd;
    do
    {
        cout<<"Enter the values you want the gcd of,\nValue 1: ";
        cin>>num1;
        cout<<"Value 2: ";
        cin>>num2;
        //number validation - I assume it was the input that needed to be within a 1-200 range according to the problem but it's not entirely clear. 
        if (num1 <= 200 and num1 >= 1 and num2 <= 200 and num2 >= 1)
        {
            gcd = get_gcd(num1,num2);
            cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<".";
        }
        else
        {
            cout<<"One or more inputed values are out of the expected range.";
        }
        cout<<"\nInput 1 to terminate program, 2 to continue: ";
        cin>>done;
    } while (done!=1);
    

    return 0;
}