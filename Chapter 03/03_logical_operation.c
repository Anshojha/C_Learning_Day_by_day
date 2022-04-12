#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age:\n");
    scanf("%d", &age);
    if (age >= 18 && age<=65)
    {
        printf("You are above 18 and below 65 you can drive !!");
    }
    else
    {
        printf("You cannot drive!!");
    }
    return 0;
}
