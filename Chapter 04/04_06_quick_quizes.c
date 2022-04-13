#include <stdio.h>

int main(){
    int i=0;
    int n;
    printf("The Value you enter od n :");
    scanf("%d",&n);
    do
    {
        printf("The number is %d\n",i);
        i=i-2;
    } while (i<n);
    
     return 0;
}