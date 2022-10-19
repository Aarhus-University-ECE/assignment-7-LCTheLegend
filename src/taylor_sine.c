#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

double factorial(int x) //Factorial function makes to make the calculations easier
{
    if(x == 0)
        return 1;
    else 
        return(x * factorial(x - 1));
}

double taylor_sine(double x, int n)
{
    /* implement your function here */
    int count = 2; //Counter variable for determining if next step is - or + and how many terms should be calculated
    double power = 5.0;
    double result = 0.0;

    result = x - (pow(x,3)/factorial(3)); //Result for two first terms
    for(count ; count <= n ; count++)
    {
        if(count % 2 == 1)
            result -= (pow(x,power)/factorial(power));
        if(count % 2 == 0)
            result += (pow(x,power)/factorial(power));
        //The section above makes sure the function changes between addition and subtraction for each term
        power += 2;  
    }
    return result;
}
