#include <stdio.h>

int main(){
    int i=5;
    printf("The value of I is %d\n",i++);
    printf("%d\n",i);
    printf("The value of I is %d\n",++i);
    i+=10;
    printf("The value of i after i++ is %d",i);
     return 0;
}