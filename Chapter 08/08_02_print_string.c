#include <stdio.h>

int main(){
    char str[] = "Ansh";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%C",*ptr);
        ptr++;
    }
    
     return 0;
}