// Task 2: Calculate years, weeks, and remaining days for a given total days
#include <stdio.h>

int main() {
    int total_days, years, weeks, remaining_days;

    // Input
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    // Calculate years, weeks, and remaining days
    years = total_days / 365;
    remaining_days = total_days % 365;
    weeks = remaining_days / 7;
    remaining_days = remaining_days % 7;

    // Output
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", remaining_days);

    return 0;
}
