#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "taylor_sine.h"
// Add your test cases for Exercise 1b,c) here

int main(void)
{
    printf("%lf", taylor_sine(0.000, 4));
    printf("%lf", sin(0.00));
    return 0;
}