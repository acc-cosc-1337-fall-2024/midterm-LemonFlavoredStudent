#include "question1.h"
#include <iostream>
using std::cout; using std::cin;
int main()
{
    string done;
    int num;
    
    do 
    {
        cout<<"Input a value between 1-10 to get it's factorial: ";
        cin>>num;
        string factorialOutput = get_factorial_sequence(num);
        cout<<"The factorial results in: " << factorialOutput<<"\n";
        cout<<"Would you like to stop the program? (Y/y to exit): ";
        cin>>done;

    }while (done!="y" and done!="Y");

    return 0;
}