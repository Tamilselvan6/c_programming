#include <stdio.h>

int main() {
    int rows = 4;  // You can adjust the number of rows as needed
    int number = 1;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = i; j < rows; j++) {
            printf("  ");
        }

        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", number);
            number += 2;
        }

        printf("\n");
    }

    return 0;
}