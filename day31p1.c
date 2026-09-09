#include <stdio.h>

// Function to reverse the array in-place
void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    int temp;

    // Loop until the two pointers meet in the middle
    while (left < right) {
        // Swap the elements at the left and right indices
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        // Move the pointers towards the center
        left++;
        right--;
    }
}

// Helper function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}