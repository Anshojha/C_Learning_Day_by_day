#include <stdio.h>

int main()
{
     int age;
     printf("Enter the age:\n");
     scanf("%d", &age);
     if (age >= 18)
     {
          printf("You can drive the Car");
     }
     else
     {
          printf("You are under age !!");
     }
     return 0;
}