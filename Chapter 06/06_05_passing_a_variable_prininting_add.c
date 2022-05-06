#include <stdio.h>
void printadd(int a)
{
    printf("The address of the variable i is %u", &a);
}
int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    printadd(i);
    printf("The address of the variable i is %u\n", &i);
    return 0;
}