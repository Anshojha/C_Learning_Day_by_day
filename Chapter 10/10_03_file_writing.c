#include <stdio.h>

int main(){
    FILE *fptr;
    int num = 32;
    fptr = fopen("generat.txt","w");
    fprintf(fptr,"The number is %d\n",num);
    fprintf(fptr,"Thank you for the writing this file using fprintf",num);
     return 0;
}