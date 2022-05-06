#include <stdio.h>

float forece(float mass);
int main(){
    float m;
    printf("Enter the value of mass in kgs:");
    scanf("%f",&m);
    printf("The value of forces is %.2f  newton.",forece(m));
     return 0;
}

float forece(float mass){
    float result = mass * 9.8;
    return result;
}