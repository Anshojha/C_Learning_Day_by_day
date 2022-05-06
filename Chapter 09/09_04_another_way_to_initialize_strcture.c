#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salry;
    char name[20];
};
int main(){
    struct employee facebook = {101,101101,"First"};
    printf("code is %d\n",facebook.code);
    printf("salry is %.2f\n",facebook.salry);
    printf("name is %s\n",facebook.name);

     return 0;
}