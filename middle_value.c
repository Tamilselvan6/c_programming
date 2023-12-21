#include <stdio.h>

int main() {
    int x, y, z;

    // Input
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    printf("Enter the value of z: ");
    scanf("%d", &z);

    // Determine the middle value
    if ((y < x && x < z) || (z < x && x < y)) {
        printf("1\n");
    } else if ((x < y && y < z) || (z < y && y < x)) {
        printf("2\n");
    } else {
        printf("3\n");
    }

    return 0;
}
