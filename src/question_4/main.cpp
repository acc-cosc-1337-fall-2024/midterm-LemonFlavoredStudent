#include "question4.h"
#include <iostream>
using std::cout; using std::cin;
int main()
{  
    string word;
    int done;
    bool palindrome;

    do
    {
        cout<<"Input the word you want to check is a palindrome (case sensitive): ";
        cin>>word;
        palindrome = is_palindrome(word);
        cout<<std::boolalpha<<word<<" is palindrome = "<<palindrome;
        cout<<"\nInput 1 to terminate program, 2 to continue: ";
        cin>>done;
    } while (done!=1);
    
    return 0;
}