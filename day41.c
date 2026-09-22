#include <stdio.h>
#include <string.h>
int main (){
    int i  = 0;
    char str[111];
    printf("enter the string ");
    if(fgets(str,sizeof(str),stdin)==NULL){
        return 1;
    }
if(str[i]!=strlen(str)+1){
    i++;
    printf("%s\n",str[i]);
}
    return 0 ;
}