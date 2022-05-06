#include <stdio.h>

int main(){
    int num,sum;
    printf("Enter the nth natural number:");
    scanf("%d",&num);
    sum = (num*(num+1))/2;
    printf("The sum of n natural number is %d",sum);
     return 0;
}