#include <stdio.h>

struct student
{
    char name[30];
    int roll;
    float cgpa;
};

int main()
{
    int n, i;
    printf("Enter the number of student in your class : ");
    scanf("%d", &n);
    struct student s[n];
     
    for (i = 0; i < n; i++)
    {
      
        printf("Enter the details of %d student :\n", i + 1);
        scanf("%s", s[i].name);
        scanf(" %d ", &s[i].roll);
        scanf(" %.2f", &s[i].cgpa);
    }

    for (i = 0; i < n; i++)
    {
        printf("The details of %d student :", i + 1);
        printf("\nName :%s\n", s[i].name);
        printf("\nReg No : %d ", s[i].roll);
        printf("\nCGPA : %f", s[i].cgpa);
    }
    return 0;
}