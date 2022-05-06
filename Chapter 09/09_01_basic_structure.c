#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salry;
    char name[20];
};

int main()
{
struct employee e1;
strcpy(e1.name,"Ansh");
e1.code = 100;
e1.salry = 12312212;

printf("%d\n",e1.code);
printf("%.2f\n",e1.salry);
printf("%s\n",e1.name);
    return 0;
}