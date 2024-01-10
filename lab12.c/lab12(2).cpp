#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remove_non_alpha(char str[]) {
    int i, j, count = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[count++] = str[i];
        }
    }

    str[count] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Removing newline character

    remove_non_alpha(str);

    printf("Resulting string after removing non-alphabet characters: %s\n", str);

    return 0;
}