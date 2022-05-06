#include <stdio.h>

int main()
{
char ch;
printf("Enter the Charachter\n");
scanf("%c",&ch);
if (ch<=122 && ch>=97)
{
    printf("the given charachter is lowercase");
}
else{
    printf("It is upperxcaase");
}
    return 0;
}