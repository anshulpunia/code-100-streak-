#include <stdio.h>

int main() {
    int i, j;
    
    
    for(i = 1; i <= 5; i++) {
        
        
        
        for(j = 1; j <= i; j++) {
            printf("%d", j); // Notice there is no \n here
        }
        
        printf("\n");
    }

    return 0;
}