#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salry;
    char name[20];
};

void show(struct employee emp)
{
    printf("The name of the employee is : %s\n", emp.name);
    printf("The code of the employee is : %d\n", emp.code);
    printf("The salry of the employee is : %f\n", emp.salry);
    emp.code = 11121;
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101;
    // we have the alternate for this code which is ptr->code=101;
    ptr->code = 101;
    ptr->salry = 101101;
    strcpy(ptr->name, "Ansh");
    show(e1);
    printf("The name of the employee is : %s\n", e1.code);

    return 0;
}