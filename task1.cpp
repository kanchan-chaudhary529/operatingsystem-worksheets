//Task 1: Create a pointer to the local variable n called ptr_to_n, and
//  use it to increase the value of n by one.Print the result.

#include <stdio.h>

int main() {
    int n = 5;              // local variable
    int *ptr_to_n;          // pointer declaration

    ptr_to_n = &n;          // pointer stores address of n
    *ptr_to_n = *ptr_to_n + 1;   // increase n by 1 using pointer

    printf("The value of n after increasing is: %d\n", n);

    return 0;
}
