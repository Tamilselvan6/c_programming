#include <stdio.h>

int main() {
    int total_hours_needed, num_days, num_workers;

    // Input
    printf("Enter total number of hours needed: ");
    scanf("%d", &total_hours_needed);
    printf("Enter number of days: ");
    scanf("%d", &num_days);
    printf("Enter number of workers: ");
    scanf("%d", &num_workers);

    // Calculate available working hours
    int working_days = (int)(0.9 * num_days);
    int normal_working_hours = working_days * num_workers * 8;
    int overtime_hours = num_days * num_workers * 2;

    // Calculate hours needed or left
    int total_working_hours = normal_working_hours + overtime_hours;
    int hours_left = total_working_hours - total_hours_needed;

    // Output
    if (hours_left >= 0) {
        printf("Yes! %d hours left.\n", hours_left);
    } else {
        printf("Not enough time! %d hours needed.\n", -hours_left);
    }

    return 0;
}
