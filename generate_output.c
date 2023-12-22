#include <stdio.h>
#include <ctype.h>

int main() {
    char input[50];
    printf("Enter the input string: ");
    scanf("%s", input);

    char current_char = '\0';
    int repeat_count = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        if (isalpha(input[i])) {
            if (repeat_count > 0) {
                for (int j = 0; j < repeat_count; j++) {
                    printf("%c", current_char);
                }
                repeat_count = 0;
            }
            current_char = input[i];
        } else if (isdigit(input[i])) {
            repeat_count = repeat_count * 10 + (input[i] - '0');
        }
    }

    // Print the last character sequence if any
    for (int j = 0; j < repeat_count; j++) {
        printf("%c", current_char);
    }

    return 0;
}