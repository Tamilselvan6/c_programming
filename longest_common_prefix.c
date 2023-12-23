#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 100

void longestCommonPrefix(char strs[][MAX_STRING_LENGTH], int strsSize, char prefix[MAX_STRING_LENGTH]) {
    if (strsSize == 0) {
        strcpy(prefix, "");
        return;
    }
	int i,j;
    int len = strlen(strs[0]);

    for ( i = 0; i < len; i++) {
        for ( j = 1; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                prefix[i] = '\0';
                return;
            }
        }
        prefix[i] = strs[0][i];
    }

    prefix[len] = '\0';
}

int main() {
    int strsSize;
	int i;
    printf("Enter the number of strings: ");
    scanf("%d", &strsSize);

    char strs[strsSize][MAX_STRING_LENGTH];
    char prefix[MAX_STRING_LENGTH];

    for ( i = 0; i < strsSize; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", strs[i]);
    }

    longestCommonPrefix(strs, strsSize, prefix);
    printf("Longest common prefix: %s\n", prefix);

    return 0;
}

