#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create a destination array large enough to hold both
    int mergedSize = n1 + n2;
    int merged[mergedSize];

    // 1. Copy elements from the first array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // 2. Copy elements from the second array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i]; 
    }

    // Print the result
    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}