#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salry;
    char name[20];
};
int main(){
    struct  employee e1,e2,e3;
    printf("Enter the value of code to e1:");
    scanf("%d",&e1.code);
    printf("Enter the value of salary to e1:");
    scanf("%f",&e1.salry);
    printf("Enter the value of name to e1:");
    scanf("%s",e1.name);

    printf("Enter the value of code to e2:");
    scanf("%d",&e2.code);
    printf("Enter the value of salary to e2:");
    scanf("%f",&e2.salry);
    printf("Enter the value of name to e2:");
    scanf("%s",e2.name);

    printf("Enter the value of code to e3:");
    scanf("%d",&e3.code);
    printf("Enter the value of salary to e3:");
    scanf("%f",&e3.salry);
    printf("Enter the value of name to e3:");
    scanf("%s",e1.name);

     return 0;
}