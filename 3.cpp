//Implement a function that takes two pointers, to the same type, along with a length parameter.
//If the pointers are not null, then check that the elements are the same, for length, and return true
//(1), otherwise false (0). Write a main function to test your function.

#include <stdio.h>
int compare_arrays(int *arr1, int *arr2, int length) {
    if (arr1 == NULL || arr2 == NULL) {
        return 0; // return false if either pointer is null
    }

    for (int i = 0; i < length; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return 0; // return false if any elements differ
        }
    }

    return 1; // return true if all elements are the same
}

int main() {
    int array1[5] = {1, 2, 3, 4, 5};
    int array2[5] = {1, 2, 3, 4, 5};
    int array3[5] = {1, 2, 3, 4, 6};

    // Test case 1: Both arrays are the same
    if (compare_arrays(array1, array2, 5)) {
        printf("array1 and array2 are the same.\n");
    } else {
        printf("array1 and array2 are different.\n");
    }

    // Test case 2: Arrays are different
    if (compare_arrays(array1, array3, 5)) {
        printf("array1 and array3 are the same.\n");
    } else {
        printf("array1 and array3 are different.\n");
    }

    // Test case 3: One of the pointers is null
    if (compare_arrays(array1, NULL, 5)) {
        printf("array1 and NULL are the same.\n");
    } else {
        printf("array1 and NULL are different.\n");
    }

    return 0;
}