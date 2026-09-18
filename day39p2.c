#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: \n");
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    printf("enter the matrix\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    } 

    int diagonal_sum = 0;
    for (int i = 0; i < r && i < c; i++)
    {
        diagonal_sum += matrix[i][i];
    }

    printf("sum of diagonal is %d\n", diagonal_sum);
}