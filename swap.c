
//////
//
// The goal of this activity is to start getting practice using pointers and related syntax as *references*.
//
//  Relevant syntax:
//    how to declare a pointer-to-int:          int *x;
//    how to *dereference* a pointer-to-int:    2 + *x
//    how to get the address of an int:         int y;      int *z = &y;
//
//  PS: This is taken straight out of K&R, so that means the solution is in there, but don't go look at it.
//      So read 5.1 if you need help with the syntax, but don't read 5.2 until you're done this activity.
//
//
//  So, right now, main tries to swap two integers, using `badSwap`.  As its name suggests, badSwap does not work.
//  So your job is to write goodSwap, which will actually work.
//
//  You will need to:
//    * figure out how to fix the function declaration of goodSwap  (this line is marked with FIXME(1))
//    * implement the body of goodSwap        ( that's FIXME(2) )
//    * figure out how to modify the call site of goodSwap  (this line is marked with FIXME(3))
//
//
//  You will know it's working if the third printf works the way it should, by saying
//    after goodSwap, alice is 99, bob is 42
//
//////



#include <stdio.h>

// This function doesn't actually swap anything!  It's bad!
void badSwap(int left, int right) {
  int tmp = left;
  left = right;
  right = tmp;
}


// Your job is to make this function work!
void goodSwap(int *left, int *right) {        // FIXME(1)
  // FIXME(2) , probably several lines needed here
  int tmp = *left;
  *left = *right;
  *right = tmp;
}



int main() {
  int alice = 42;
  int bob = 99;

  printf("initially, alice is %d, bob is %d\n", alice, bob);

  badSwap(alice, bob);
  printf("after badSwap, alice is %d, bob is %d\n", alice, bob);

  goodSwap(&alice, &bob);
  printf("after goodSwap, alice is %d, bob is %d\n", alice, bob);
  return 0;
}