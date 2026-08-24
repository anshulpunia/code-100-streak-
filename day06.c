#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer:\n ");
    scanf("%d", &num);

    if (num >= 0) {
        
        if (num == 0) {
            printf("The number is zero.");
        } 
            else {
            printf("%d is a positive number.", num);
        }
        
    } 
        else {
        printf("%d is a negative number.", num);
    }

    return 0;
}