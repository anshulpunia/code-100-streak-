#include <stdio.h>
#include <stdlib.h>

int main() {
    long long num, temp;
    int freq[10] = {0}; // Array to store frequency of digits 0-9
    int maxFreq = 0;
    int maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Use absolute value to handle negative numbers
    temp = llabs(num);

    // Special case for 0
    if (temp == 0) {
        freq[0] = 1;
    } else {
        // Extract each digit and increment its frequency count
        while (temp > 0) {
            int digit = temp % 10;
            freq[digit]++;
            temp /= 10;
        }
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("The most frequent digit is %d (appears %d times).\n", maxDigit, maxFreq);

    return 0;
}