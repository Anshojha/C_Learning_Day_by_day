#include <stdio.h>
int sum(int num1, int num2){
    return num1+num2;
}
int sub(int num1, int num2){
    return num1-num2;
}
int mult(int num1, int num2){
    return num1*num2;
}
int div(int num1, int num2){
    return num1/num2;
}

int main(){
    int num1,num2,choise,result;
    int (*ope[choise])(int, int);
    ope[0]=sum;
    ope[1]=sub;
    ope[2]=mult;
    ope[3]=div;

    printf("Enter the value of num1: ");
    scanf("%d",&num1);
    printf("Enter the value of num2: ");
    scanf("%d",&num2);
    printf("Enter the choise as 0 for add, 1 for sub, 2 for mult and 3 for div: ");
    scanf("%d",&choise);
    result = ope[choise](num1,num2);
    printf("The desired answer is %d.",result);
     return 0;
}