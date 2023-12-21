#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char password[50];

    // Input
    printf("Enter the password: ");
    scanf("%s", password);

    // Check password strength
    bool lowercase = false, uppercase = false, special_char = false, digit = false;
    int length = strlen(password);

    for (int i = 0; i < length; ++i) {
        if ('a' <= password[i] && password[i] <= 'z') {
            lowercase = true;
        } else if ('A' <= password[i] && password[i] <= 'Z') {
            uppercase = true;
        } else if (strchr("!@#$%^&*()-+", password[i])) {
            special_char = true;
        } else if ('0' <= password[i] && password[i] <= '9') {
            digit = true;
        }
    }

    // Output
    if (lowercase && uppercase && special_char && digit && length >= 8) {
        printf("Strong password\n");
    } else {
        printf("Weak password\n");
    }

    return 0;
}
