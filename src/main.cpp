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
    
    double test_cases[10] = {0.0, 0.526423, 1.6, 2.5, 3.1415, 3.5, 5.0, 7.5, 10.0, 15.0};

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("Test function: %lf\n", taylor_sine(test_cases[i], 4));
        printf("Built in sin function: %lf\n\n", sin(test_cases[i]));
        
    }
    
    /*The taylor_sine function is fairly accurate up to and around pi or the number of termes depending on the number of terms
    Increasing the number of terms increases the accuracy for alle numbers up to the number of terms 
    and if the number of terms is really low increasing it will improve all results.*/




    /*
    stack first;
    initialize(&first);
    assert(empty(&first) == true);

    int test_variable = 5;
    push(test_variable, &first);
    assert(pop(&first) == test_variable);

    push(5, &first);
    push(10, &first);
    assert(pop(&first) == 10);
    assert(pop(&first) == 5);
    */
    //Tests for the stack functions
    return 0;
}