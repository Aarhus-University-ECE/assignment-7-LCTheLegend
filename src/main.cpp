#include <stdio.h>
#include <math.h>
#include <assert.h>

extern "C"
{
#include "taylor_sine.h"
#include "stack.h"
}
// Add your test cases for Exercise 1b,c) here

int main(void)
{
    /*
    double test_cases[7] = {0.0, 0.5, 1.6, 2.5, 3.5, 5.0, 15.0};

    for(int i = 0 ; i < 7 ; i++)
    {
        printf("Test function: %lf\n", taylor_sine(test_cases[i], 5));
        printf("Built in sin function: %lf\n\n", sin(test_cases[i]));
        
    }
    */
    stack first;
    initialize(&first);
    push(5, &first);
    printf("%d\n", pop(&first));
    //printf("%d\n", pop(&first));
    push(5, &first);
    push(10, &first);
    //printf("%d", empty(&first));
    printf("%d\n", pop(&first));
    printf("%d", pop(&first));
    return 0;
}