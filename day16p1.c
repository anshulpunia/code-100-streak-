#include <stdio.h>

int main() {
    int n;
    int binary[32];
    int index = 0;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Special case for 0
    if (n == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Handle non-negative integers
    int temp = n;
    while (temp > 0) {
        binary[index] = temp % 2;
        temp = temp / 2;
        index++;
    }

    printf("Binary representation: ");
    // Print the array in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}