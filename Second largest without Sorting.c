Second largest without Sorting

#include <stdio.h>
void findSecondLargest(int arr[], int n) {
    int firstLargest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] < firstLargest && (secondLargest == -1 || arr[i] > secondLargest)) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest != -1) {
        printf("Second largest distinct element: %d\n", secondLargest);
    } else {
        printf("No second largest distinct element found.\n");
    }
}
int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    int Arr[N];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &Arr[i]);
    }
    findSecondLargest(Arr, N);
    return 0;
}
