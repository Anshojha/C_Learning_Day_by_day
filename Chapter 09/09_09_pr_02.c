#include <stdio.h>
#include <string.h>

struct data
{
    int code;
    char name[20];
    float result;
};


int main(){
    struct data f1;
    struct data *ptr;
    ptr = &f1;
    ptr->code=101;
    strcpy(ptr->name,"Ansh");
    ptr->result=76.43;

    printf("My code is %d and I am %s and got the result %.2f",f1.code,f1.name,f1.result);
     return 0;
}