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
        gcd = get_gcd(num1,num2);
        cout<<"The GCD of "<<num1<<" and "<<num2<<" is "<<gcd<<".";
        cout<<"\nInput 1 to terminate program, 2 to continue: ";
        cin>>done;
    } while (done!=1);
    

    return 0;
}