#include <stdio.h>

int main()
{
int num1,num2,num3,num4,num;
printf("Enter thr NUM1 value");
scanf("%d",&num1);
printf("Enter thr NUM2 value");
scanf("%d",&num2);
printf("Enter thr NUM3 value");
scanf("%d",&num3);
printf("Enter thr NUM4 value");
scanf("%d",&num4);
if(num1>num2 && num1>num3 && num1>num4){
    num=num1;
}
if(num2>num1 && num2>num3 && num2>num4){
    num=num2;
}
if(num3>num1 && num3>num2 && num3>num4){
    num=num3;
}
if(num4>num1 && num4>num2 && num4>num3){
    num=num4;
}
printf(" The greatese number among %d, %d, %d, %d is %d",num1 ,num2,num3,num4,num);
    return 0;
}