#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern. 
    int size = 2*(n-1);
    int start =0;
    int end =size-1;
    int a[size][size];
    for(int i=start;i <=end; i++){
        for(int j=start; j<=end;i++)
        if(i==start || i ==end || 
        j==start || j==end){
            a[size][size] =n;
        }
    }
    return 0;
}
