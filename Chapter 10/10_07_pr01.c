#include <stdio.h>

int main(){
    int a=1,b=2,c=3;
    FILE *ptr;
    ptr = fopen("pr02.txt","w");
    fprintf(ptr,"%d %d %d",a,b,c);
    printf("The value of a ,b and c is %d %d %d",a,b,c);
     return 0;
}