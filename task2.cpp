//Create an array that has 3 elements (10, 30, 2000), and declare a pointer to that array, and then
//a loop that iterates through the array, using the pointer, printing each element, and the pointer of that element.

#include <stdio.h>
int main() {
    int arr[3] = {10, 30, 2000}; // array with 3 elements
    int *ptr_to_arr = arr;      // pointer to the first element of the array

    // loop through the array using the pointer
    for (int i = 0; i < 3; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(ptr_to_arr + i), (ptr_to_arr + i));
    }

    return 0;
}