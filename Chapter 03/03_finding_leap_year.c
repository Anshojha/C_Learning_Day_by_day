#include <stdio.h>

int main(){
    int yr;
    printf("Enter the desired year: ");
    scanf("%d",&yr);
    if (yr/4==0)
    {
        printf("Entered yr is leap yr");
    }
    else{
        printf("not a leap year");
    }
    
     return 0;
}