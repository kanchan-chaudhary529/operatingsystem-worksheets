//Write a program that reads the following numbers from a file, and prints their sum
#include <stdio.h>
#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0;

    fp = fopen("foo.txt", "r");   // open file for reading

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {   // read numbers one by one
        sum += num;
    }

    fclose(fp);

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
