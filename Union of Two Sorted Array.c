Union of Two Sorted Array

#include <stdio.h>

void printUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j]);
            j++;
        } else {
            printf("%d ", arr2[j]);
            i++;
            j++;
        }
    }

    while (i < n) {
        printf("%d ", arr1[i]);
        i++;
    }
    while (j < m) {
        printf("%d ", arr2[j]);
        j++;
    }
}

int main() {
    int n, m;

    printf("Enter size of first array: ");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter elements of first array in sorted order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &m);

    int arr2[m];
    printf("Enter elements of second array in sorted order: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("Union of the arrays: ");
    printUnion(arr1, arr2, n, m);

    return 0;
}