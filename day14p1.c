#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the number of odd numbers (n): ");
    scanf("%d", &n);

    // Loop through the first 'n' odd numbers
    for (i = 1; i <= n; i++) {
        // The i-th odd number is (2 * i - 1)
        sum += (2 * i - 1); 
    }

    printf("The sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}