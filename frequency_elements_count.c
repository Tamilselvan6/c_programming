#include <stdio.h>

void printDuplicateFrequency(int arr[], int n) {
    if (n <= 1) {
        printf("No duplicates found.\n");
        return;
    }

    int currentElement = arr[0];
    int currentFrequency = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == currentElement) {
            currentFrequency++;
        } else {
            if (currentFrequency > 1) {
                printf("%d->%d, ", currentElement, currentFrequency);
            }
            currentElement = arr[i];
            currentFrequency = 1;
        }
    }

    if (currentFrequency > 1) {
        printf("%d->%d", currentElement, currentFrequency);
    }
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int arr[N];
    printf("Enter the sorted array elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sample Output:\n");
    printDuplicateFrequency(arr, N);

    return 0;
}
