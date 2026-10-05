#include <stdio.h>
#include <string.h>

int main() {
    char st[100];
    char target;
    int count = 0;

    printf("Enter the string: ");
    if (fgets(st, sizeof(st), stdin) == NULL) {
        return 1;
    }

    printf("Enter the character to find: ");
    if (scanf(" %c", &target) != 1) {
        return 1;
    }

    for (int i = 0; st[i] != '\0'; i++) {
        if (st[i] == target) {
            count++;
        }
    }

    printf("Occurrences of '%c': %d\n", target, count);
    return 0;
}