#include <stdio.h>
int sum(int a , int b);
int main(){
    int a =7 , b = 4;
    printf("The value of a and b is %d and %d\n", a,b );
    printf("The value of 4 + 7 is %d\n", sum(a,b));
    printf("The value of a and b is %d and %d", a ,b);
     return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    a = 34334;
    b = 34545;
    return c;
}