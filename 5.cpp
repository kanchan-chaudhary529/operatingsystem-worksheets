//Implement a program that contains the swap function, and tests it works correclty 
// void print_array(int * arr, int width, int height);
#include <stdio.h>

// swap function: swaps two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// print_array function (width x height matrix)
void print_array(int *arr, int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            printf("%d ", arr[i * width + j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[4] = {10, 20, 30, 40};

    printf("Array before swap:\n");
    print_array(arr, 4, 1);

    // test swap: swap arr[1] and arr[3]
    swap(&arr[1], &arr[3]);

    printf("\nArray after swap:\n");
    print_array(arr, 4, 1);

    return 0;
}

