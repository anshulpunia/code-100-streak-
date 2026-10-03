#include <stdio.h>
 int main () {
    int n,  i ;
    int fact = 1 ;

    printf("enter the no. ");
    scanf("%d",&n  );

    // for ( i =1;  i<=n ;  ++i ) {
    //     fact *= i ;
        
    // }
    for(i=1;i>0;i++){
        fact=fact*(n-i);
    }
    printf("value of factorial is %d",fact);

    
    return 0 ;


 }
