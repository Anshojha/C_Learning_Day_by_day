#include <stdio.h>

int main(){
    int m=3,n=5,o1,o2;
    int *p1,*p2,*p3;
    p1=&m;
    p2=&n;
    printf("adress of m (p1=&m) =%d\n",p1);
    printf("adress of n (p2=&n)=%d\n",p2);
    o1 = *p1+*p2;
    printf("*p1+*p2=%d\n",o1);
    o2 = *p1-*p2;
    printf("*p1-*p2=%d\n",o2);

     return 0;
}