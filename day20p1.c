#include <stdio.h>

int main() {
    long long num;
    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative numbers manually without stdlib.h
    long long temp = num < 0 ? -num : num;
    long long product = 1;
    int has_odd_digit = 0;

    // Process each digit
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            has_odd_digit = 1;
        }
        temp /= 10;
    }

    // Output result
    if (has_odd_digit) {
        printf("Product of odd digits in %lld: %lld\n", num, product);
    } else {
        printf("No odd digits found in %lld.\n", num);
    }

    return 0;
}