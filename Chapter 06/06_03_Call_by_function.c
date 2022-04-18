#include <stdio.h>
void wrongswap(int a , int b);
void swap(int *a , int *b);
int main(){
    int x =7 , y = 4;
    printf("The value of a and b before swap is %d and %d\n", x,y );
    // wrongswap(x,y); // will not work by call by value.
    swap(&x,&y);
    printf("The value of a and b after swap is %d and %d\n", x,y );
     return 0;
}

void wrongswap(int a , int b){
int temp;
temp=a;
a=b;
b=temp;
}
void swap(int *a , int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}