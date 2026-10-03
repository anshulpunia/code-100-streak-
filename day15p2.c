#include <stdio.h> 
 int main () {

    int num, remn, reversednum =0 ;
    printf("enter the no ");
    scanf("%d",&num);
    
    while (num!=0){
        remn  = num % 10 ;
        reversednum = reversednum*10 + remn ;
        num /= 10 ;

    }
    printf("reversed no.= %d\n", reversednum);
    return 0;



 }