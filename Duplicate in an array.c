Duplicate in an array

#include <stdio.h>

void findDuplicates(int arr[], int size) {
    int *count = (int *)calloc(size, sizeof(int));
    int i, flag = 0;

    for (i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    printf("Duplicates in the array: ");

    for (i = 0; i < size; i++) {
        if (count[i] > 1) {
            printf("%d ", i);
            flag = 1;
        }
    }

    if (!flag) {
        printf("-1");
    }

    free(count);
}

int main() {
    int N;
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int a[N];
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    findDuplicates(a, N);

    return 0;
}