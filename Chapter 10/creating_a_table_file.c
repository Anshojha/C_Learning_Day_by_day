#include <stdio.h>

int main(){
    FILE *ptrt;
    int num;
    printf("Enter the desired number: ");
    scanf("%d",&num);
    ptrt = fopen("teble3.txt","w");
    fprintf("*****Table of %d*****",num);
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptrt,"%d X %d = %d\n",num,i,num*i);
    }
    fclose(ptrt);
     return 0;
}