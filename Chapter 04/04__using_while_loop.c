#include <stdio.h>

int main()
{
    int n, i=1, sum = 0;
    printf("Enter the natural number:");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum +i;
        i++;
    }
    printf("The sum of %d natural number is %d", n, sum);
    return 0;
}