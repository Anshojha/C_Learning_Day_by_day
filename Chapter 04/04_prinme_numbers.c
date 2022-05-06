#include <stdio.h>

int main()
{
    int prime = 1, n = 9;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("This is not a prime number");
    }
    else("This is prime number");
    return 0;
}