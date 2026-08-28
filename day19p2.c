#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert negative numbers to positive manually
    temp = (num < 0) ? -num : num;

    while (temp > 0) {
        sum += temp % 10; // Extract the last digit and add to sum
        temp /= 10;       // Remove the last digit
    }

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}