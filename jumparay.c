#include <stdbool.h>
#include <stdio.h>
#include <conio.h>
bool canJump(int* nums, int numsSize) {
    int maxReach = 0;
	int i;
    for ( i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; // If the current index is not reachable
        }

        maxReach = fmax(maxReach, i + nums[i]);

        if (maxReach >= numsSize - 1) {
            return true; // If the last index is reachable
        }
    }

    return false;
}

int main() {
    int nums1[] = {2, 3, 1, 1, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    bool result1 = canJump(nums1, size1);
    printf("Example 1: %s\n", result1 ? "true" : "false");

    int nums2[] = {3, 2, 1, 0, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    bool result2 = canJump(nums2, size2);
    printf("Example 2: %s\n", result2 ? "true" : "false");

    return 0;
}

