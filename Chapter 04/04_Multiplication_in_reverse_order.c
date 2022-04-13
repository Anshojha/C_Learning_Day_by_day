#include <stdio.h>

int main(){
    int a,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (int a = 1; a <= -10; a--)
    {
        printf("%d * %d = %d\n",n,a,n*a);
        
    }
    
     return 0;
}