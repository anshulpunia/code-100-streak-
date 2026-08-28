#include <stdio.h>

int main() {
    int n1, n2, a, b, temp;

    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is: %d\n", n1, n2, a);

    return 0;
}
