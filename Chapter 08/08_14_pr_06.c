#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}
int main()
{
    char a[100];
    printf("Enter the string you want to encrypt: ");
    scanf("%s", a);
    encrypt(a);
    printf("The encrypted value of string %s", a);
    return 0;
}