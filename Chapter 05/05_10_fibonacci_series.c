#include <stdio.h>

int main(){
    int t1=0,t2=1,n;
    int t3 = t1+t2;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("%d %d %d", t1,t2,t3);
    for (int i = 3; i < n; i++)
    {
        t1 = t2;
        t2 = t3;
        t3 = t1+t2;
        printf(" %d ",t3);
    }
    
    
     return 0;
}