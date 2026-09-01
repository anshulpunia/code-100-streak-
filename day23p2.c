#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        
        
        double term = (double)(2 * i) / (4 * i - 1);
        sum += term;
        
        
        if (i == n) {
            printf("%d/%d ", 2 * i, 4 * i - 1);
        } else {
            printf("%d/%d + ", 2 * i, 4 * i - 1);
        }
    }


    printf("\nSum of the series up to %d terms = %.6lf\n", n, sum);

    return 0;
}