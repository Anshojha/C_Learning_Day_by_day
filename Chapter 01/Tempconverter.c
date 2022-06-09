#include <stdio.h>

int main(){
    float celciusTemp,fahrenheitTemp,result;
    int c;
    printf("****Choose the option 1 for celcius to fahrenheit  and 0 for vice versa****\n");
    printf("Enter your choice : ");
    scanf("%d",&c);
    if(c==1){
        printf("Enter the temperature in celcius:");
        scanf("%f",&celciusTemp);
        result = (celciusTemp*1.8) +32;
        printf("%.2f Fahrenheit",result);
        
    }
    else if(c==0)
        {
        printf("Enter the temperature in fahrenheit:");
        scanf("%f",&fahrenheitTemp);
        result = (fahrenheitTemp-32)*0.55555555;
        printf("%.2f Celcius",result);
    }
    else{
        printf("Invalid Input!!");
    }
    
     return 0;
}