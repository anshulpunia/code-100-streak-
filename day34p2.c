#include <stdio.h>

#define MAX_CAPACITY 100

int main(void) {
    int arr[MAX_CAPACITY];
    int n, element, pos;

    printf("Enter number of initial elements: ");
    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_CAPACITY) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d): ", n + 1);
    scanf("%d", &pos);

    // Validate position (1-based index)
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position! Must be between 1 and %d.\n", n + 1);
        return 1;
    }

    // Shift elements to the right to create space
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[pos - 1] = element;
    n++; 

    printf("Resulting array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}