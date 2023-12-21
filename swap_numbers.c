//Task 1: Swap two numbers without using a temporary variable
#include <stdio.h>

int main() {
    int num1, num2;

    // Input
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Swap without using a temporary variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    // Output
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
