#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Prompt the user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Validate that the input is a natural number (greater than 0)
    if (n <= 0) {
        printf("Error: Please enter a positive integer greater than 0.\n");
    } else {
        // Calculate the sum using a for loop
        for (i = 1; i <= n; ++i) {
            sum += i;
        }

        // Display the result
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
