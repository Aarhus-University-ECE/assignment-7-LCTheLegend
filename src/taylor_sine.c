#include "taylor_sine.h"
#include <math.h>

int factorial(int x)
{
    if(x == 0)
        return 1;
    else 
        return(x * factorial(x - 1));
}

double taylor_sine(double x, int n)
{
    /* implement your function here */
    int count = 3;
    double power = 5;
    double result = 0.0;

    result = x - (pow(x,3)/factorial(3));
    for(count ; count <= n ; count++)
    {
        if(count % 2 == 1)
            result -= (pow(x,power)/factorial(power));
        if(count % 2 == 0)
            result +=  (pow(x,power)/factorial(power));
        power += 2;  
    }
    return -1.0;
}
