#include <stdio.h>

void add(){
int a ,b;
printf("Enter the first number: ");
scanf("%d",&a);
printf("Enter the second number: ");
scanf("%d",&b);
printf("Sum(a+b) =%d",a+b);
}
int main(){
    void(*ptr)(void); // Declearing function pointer
ptr =add;// Storing the address of function pointer
ptr(); //Calling the function
     return 0;
}