#include <stdio.h>

int main() {
    int n;
    // Using unsigned long long because products grow very large quickly
    unsigned long long product = 1;
    int has_even = 0; // Flag to track if we actually multiplied anything

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Start at 2 and increment by 2 to only hit even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        has_even = 1;
    }

    if (has_even) {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}