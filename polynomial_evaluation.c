//Task 3: Evaluate a polynomial of degree n
#include <stdio.h>

int main() {
    int degree, i;
    float x_value, result = 0;

    // Input
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);

    float coefficients[degree + 1];
    printf("Enter the coefficients separated by space: ");
    for (i = 0; i <= degree; i++) {
        scanf("%f", &coefficients[i]);
    }

    printf("Enter the value of x: ");
    scanf("%f", &x_value);

    // Evaluate the polynomial
    for (i = 0; i <= degree; i++) {
        result += coefficients[i] * pow(x_value, degree - i);
    }

    // Output
    printf("P(%f) = %f\n", x_value, result);

    return 0;
}