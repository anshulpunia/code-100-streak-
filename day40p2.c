#include <stdio.h>
int main (){
    int r, c;
    printf("Enter rows and columns: \n");
    scanf("%d %d", &r, &c);

    int matrix1[r][c];
    printf("enter the matrix\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    int r2, c2;
    printf("Enter rows and columns of 2nd matrix : \n");
    scanf("%d %d", &r2, &c2);

    int matrix2[r2][c2], result[r][c]; 
    printf("enter the 2nd matrix \n");
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    for(int i=0;i<r&&i<r2;i++){
        for(int j=0;j<c&&j<c2;j++){
            result[r][c] += matrix1[i][j]*matrix2[i][j];

        }
    }
    printf("the product  is\n ");{
        for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", result[r][c]);
        }
        printf("\n");
    }
    }
    return  0 ;

}