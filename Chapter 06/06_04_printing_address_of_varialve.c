#include <stdio.h>

int main(){
  int a=6;
  int *ptr;
    ptr = &a;
    printf("The address of the variable is %u\n",ptr);
    printf("The address of the variable is %u\n",*ptr);

     return 0;
}