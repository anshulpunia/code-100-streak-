#include <stdio.h>
#include <math.h>

int main() {
    long long num, temp, swappedNum;
    int firstDigit, lastDigit, digitsCount = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int isNegative = (num < 0);
    num = (num < 0) ? -num : num;

    if (num < 10) {
        printf("Result: %lld\n", isNegative ? -num : num);
        return 0;
    }

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        digitsCount++;
    }
    firstDigit = temp;
    long long multiplier = 1;
    for (int i = 0; i < digitsCount; i++) {
        multiplier *= 10;
    }

    long long middlePart = (num % multiplier) / 10;
    swappedNum = (lastDigit * multiplier) + (middlePart * 10) + firstDigit;

    if (isNegative) {
        swappedNum = -swappedNum;
    }

    printf("Result after swapping: %lld\n", swappedNum);

    return 0;
}