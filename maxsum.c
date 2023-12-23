#include <stdio.h>
#include <limits.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = INT_MIN;
    int currentSum = 0;
	int i;
    for ( i = 0; i < numsSize; i++) {
        currentSum = fmax(nums[i], currentSum + nums[i]);
        maxSum = fmax(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = maxSubArray(nums1, size1);
    printf("Example 1: %d\n", result1);

    int nums2[] = {1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = maxSubArray(nums2, size2);
    printf("Example 2: %d\n", result2);

    int nums3[] = {5, 4, -1, 7, 8};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int result3 = maxSubArray(nums3, size3);
    printf("Example 3: %d\n", result3);

    return 0;
}

