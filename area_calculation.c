#include <stdio.h>
#include <math.h>

void calculateArea(char shape, float size) {
    float area;

    if (shape == 'S') {
        area = size * size;
        printf("Area of Square = %.2f\n", area);
    } else if (shape == 'C') {
        area = M_PI * size * size;
        printf("Area of Circle = %.2f\n", area);
    } else {
        printf("Invalid shape input. Please enter 'S' for square or 'C' for circle.\n");
    }
}

int main() {
    char shapeInput;
    float sizeInput;

    // Get user input
    printf("Enter the shape ('S' for square or 'C' for circle): ");
    scanf(" %c", &shapeInput);

    printf("Enter the size: ");
    scanf("%f", &sizeInput);

    // Calculate and display area
    calculateArea(shapeInput, sizeInput);

    return 0;
}
