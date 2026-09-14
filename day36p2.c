#include <stdio.h>

#define MAX 100

int main(void) {
    int rows, cols;
    int matrix[MAX][MAX];
    long long sum = 0; 
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid dimensions. Must be between 1 and %d.\n", MAX);
        return 1;
    }


    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }


    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements = %lld\n", sum);

    return 0;
}