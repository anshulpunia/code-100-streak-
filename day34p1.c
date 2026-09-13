#include <stdio.h>

#define MAX_CAPACITY 100

int main(void) {
    int arr[MAX_CAPACITY];
    int n, pos;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_CAPACITY) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", n);
    scanf("%d", &pos);

    
    if (pos < 1 || pos > n) {
        printf("Invalid position! Must be between 1 and %d.\n", n);
        return 1;
    }

  
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; 
    printf("Resulting array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}