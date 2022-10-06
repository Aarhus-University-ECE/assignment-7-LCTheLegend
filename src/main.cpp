#include <stdio.h>
// Add your test cases for Exercise 1b,c) here
extern "C"
{
    #include "taylor_sine.h"
}

int main(int argc, char **argv)
{
    printf("%lf", taylor_sine(3.1415, 4));
    return 0;
}