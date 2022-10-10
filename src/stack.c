#include "stack.h"

void initialize(stack* s){
  //implement initialize here
  node *p = s;
  p = NULL;
  p -> next = NULL;

}

void push(int x, stack* s){
    //implement push here
    node *p = s;
    assert(p == NULL);
    p = p -> next;
    while(p -> next != NULL)
    {
      p = p -> next;
    }
    p -> data = x;
    p -> next = NULL;

}

int pop(stack* s){
    // implement pop here
  return -1;
}

bool empty(stack* s)
{
  //implement empty here
  return false;
}

bool full(stack* s) {
    //implement full here
  return false;
}
