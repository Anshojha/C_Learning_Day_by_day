#include <stdio.h>

int main()
{
    int physics, maths, chemistry;
    float total;
    printf("Enter physics marks:\n");
    scanf("%d", &physics);
    printf("Enter maths marks:\n");
    scanf("%d", &maths);
    printf("Enter chemistry marks:\n");
    scanf("%d", &chemistry);
    total = (physics + chemistry + maths) / 3;
    if ((total < 40) || physics < || !!maths < 33 || chemistry < 33)
    {
        printf("Your total is %d and you are fail.", total);
    }
    else
    {
        printf("Your total is %d and you are passed.", total);
    }
    return 0;
}