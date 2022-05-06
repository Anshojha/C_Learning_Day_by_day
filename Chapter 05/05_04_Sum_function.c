
#include <stdio.h>
// int sum(int num1, int num2);
int main()
{
    int num1,num2,c;
    printf("Enter the num1 value:\n");
    scanf("%d",&num1);
    printf("Enter the num2 value:\n");
    scanf("%d",&num2);
    c=sum(num1, num2);
    printf("The value is %d", c);
    
    return 0;
}

int sum(int num1, int num2)
{
    int result;
    result = num1 + num2;
    return result;
}