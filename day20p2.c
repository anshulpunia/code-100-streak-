#include <stdio.h>

int main() {
    char binary[100];
    char ones_comp[100];
    int i = 0;

    printf("Enter a binary number: ");
    if (scanf("%99s", binary) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Traverse the string and flip the bits
    while (binary[i] != '\0') {
        if (binary[i] == '0') {
            ones_comp[i] = '1';
        } else if (binary[i] == '1') {
            ones_comp[i] = '0';
        } else {
            printf("Error: '%c' is not a valid binary digit.\n", binary[i]);
            return 1;
        }
        i++;
    }
    ones_comp[i] = '\0'; // Null-terminate the string

    printf("1's Complement: %s\n", ones_comp);

    return 0;
}