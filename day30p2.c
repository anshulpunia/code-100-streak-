// Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\nCount of Positive elements: %d\n", positiveCount);
    printf("Count of Negative elements: %d\n", negativeCount);
    printf("Count of Zero elements: %d\n", zeroCount);

    return 0;
}