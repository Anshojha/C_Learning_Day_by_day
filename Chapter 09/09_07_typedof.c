#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salry;
    char name[20];
}emp;

void show(struct employee emp1)
{
    printf("The name of the employee is : %s\n", emp1.name);
    printf("The code of the employee is : %d\n", emp1.code);
    printf("The salry of the employee is : %f\n", emp1.salry);
  
}
int main()
{
    // declearing e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;
    // (*ptr).code = 101;
    // we have the alternate for this code which is ptr->code=101;

    //set the value of member of e1
    ptr->code = 101;
    ptr->salry = 101101;
    strcpy(ptr->name, "Ansh");
    
    show(e1);
    return 0;
}