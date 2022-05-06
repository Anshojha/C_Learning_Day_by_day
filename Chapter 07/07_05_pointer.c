#include <stdio.h>

int main(){
    char i = 34;
    char *ptr = &i;
    // printf("The value of ptr is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);
//     The value of ptr is 6422296
// The value of ptr is 6422300
printf("The value of ptr is %u\n",ptr);
    ptr++;
    ptr--;
    

    printf("The value of ptr is %u\n",ptr);
     return 0;
}