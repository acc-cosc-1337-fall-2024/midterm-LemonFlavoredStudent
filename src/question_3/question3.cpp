#include "question3.h"

bool test_config()
{
    return true;
}

vector <double> get_cookie_ingredients(int cookies)
{
    double sugar = 1.5*(cookies/48.0);
    double butter = 1*(cookies/48.0);
    double flour = 2.75*(cookies/48.0);
    vector <double> ingredients;
    ingredients.push_back(sugar); ingredients.push_back(butter); ingredients.push_back(flour);
    return ingredients;
}