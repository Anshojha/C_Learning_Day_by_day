#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'simpleArraySum' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY ar as parameter.
 */

int simpleArraySum(int ar_count, int* ar) {
int sum=0;
for(int i=0;i<=ar_count;i++){
sum = sum + ar[i];}
return sum;
}

int main()
{
    int ar_count,result;
    scanf("%d",&ar_count);
    
    int *ar = (int *)malloc(sizeof(int));
     for (int i = 0; i < ar_count; i++){
    scanf("%d",&ar[i]);}
    // for (int i = 0; i < ar_count; i++)
    // {
    //  printf("%d\n",ar[i]);
    // }
    
    result=simpleArraySum(ar_count,ar);
    printf("%d",result);
    return 0;
}
