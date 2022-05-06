#include <stdio.h>

int main()
{
    int NUM1,NUM2;
    printf("Enter num1:: ");
    scanf("%d",&NUM1);
    printf("Enter num2:");
    scanf("%d", &NUM2);
    (NUM1 < NUM2) ? printf("num1 is less than num2") : printf("num1 is not less than 2");
    return 0;
}