#include <stdio.h>

int main()
{
    FILE *ptr;
    // ptr = fopen("getsdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of the charachter is %c\n", fgetc(ptr));
    // printf("The value of the charachter is %c\n", fgetc(ptr));
    // printf("The value of the charachter is %c\n", fgetc(ptr));
    // printf("The value of the charachter is %c\n", fgetc(ptr));
    ptr = fopen("putcdemo.txt","w");
    putc('c',ptr);
    putc('c',ptr);
    putc('c',ptr);
    fclose(ptr);
    return 0;
}