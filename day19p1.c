#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // 
    for (; num != 0; num /= 10) {
    temp = num % 10;
    sum += temp;
}

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}