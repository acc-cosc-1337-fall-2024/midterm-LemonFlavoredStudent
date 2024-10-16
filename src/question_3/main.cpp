#include "question3.h"
#include <iostream>
using std::cout; using std::cin;
int main()
{
    int cookies,done;
    vector <double> ingredients;
    do
    {
        cout<<"Input the amount of cookies desired: ";
        cin>>cookies;
        while (cookies<1)
        {
            cout<<"Cookie Count Can't Be Less Than One, Input New Value: ";
            cin>>cookies;
        }
        ingredients = get_cookie_ingredients(cookies);
        cout<<"You need "<<ingredients[0]<<" cup(s) of sugar "<<ingredients[1]<<" cup(s) of butter and "<<ingredients[2]<<" cup(s) of flour.";
        cout<<"\nInput 1 to terminate program, 2 to continue: ";
        cin>>done;
    } while (done!=1);
    
    return 0;
}