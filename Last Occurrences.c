Last Occurrences

#include <stdio.h>
void findFirstAndLastOccurrence(int arr[], int n, int x) {
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            first = i;
            break;
        }
    }
    if (first == -1) {
        printf("-1 -1\n");
        return;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == x) {
            last = i;
            break;
        }
    }

    printf("%d %d\n", first, last);
}

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the element to find: ");
    scanf("%d", &x);
    int arr[n];
    printf("Enter the sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    findFirstAndLastOccurrence(arr, n, x);
    return 0;
}
