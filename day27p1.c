// *
// ***
// *****
// *******
// *********
// *******
// *****
// ***
// *
// #include <stdio.h>
// int main (){
//     int i,j ;
//         for(i=1;i<=9;i+=2){

//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//     }
//     printf("\n");
    
//     for(int a =5;a>=1;a-=2){

//         for(int b =5;b>=a;b--){
//             printf("*");
//         }
        
//     }
//     printf("\n");
    
//     return 0 ;
//     }
#include <stdio.h>

int main (){
    int i, j;
    
    for(i=1; i<=9; i+=2){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n"); 
    }
    
    for(int a=5; a>=1; a-=2){
        for(int b=1; b<=a; b++){
            printf("*");
        }
        printf("\n");
    
    }
    
    return 0;
}


