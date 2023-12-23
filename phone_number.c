#include <stdio.h>
#include <string.h>

const char phoneMap[10][5] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void backtrack(char *digits, int index, char *combination, char result[][5], int *count) {
    if (digits[index] == '\0') {
        combination[index] = '\0';
        strcpy(result[(*count)], combination);
        (*count)++;
        return;
    }

    int digit = digits[index] - '0';
    char *letters = phoneMap[digit];
	int i;
    for ( i = 0; i < strlen(letters); i++) {
        combination[index] = letters[i];
        backtrack(digits, index + 1, combination, result, count);
    }
}

void letterCombinations(char *digits) {
    int n = strlen(digits);
    if (n == 0) {
        printf("No digits entered.\n");
        return;
    }
	int i,j;
    int size = 1;
    for ( i = 0; i < n; i++) {
        size *= strlen(phoneMap[digits[i] - '0']);
    }

    char result[size][5];
    int count = 0;

    char combination[5]; // assuming the maximum length of a combination is 4

    backtrack(digits, 0, combination, result, &count);

    printf("Letter combinations:\n");
    for ( j = 0; j < count; j++) {
        printf("%s ", result[j]);
    }
    printf("\n");
}

int main() {
    char digits[100];

    printf("Enter the digits: ");
    scanf("%s", digits);

    letterCombinations(digits);

    return 0;
}

