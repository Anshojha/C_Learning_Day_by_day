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
    ptr = fopen("putddemo.txt","w");
    fprintf(ptr,"This is a sample file i am wrinting to test the puts");
    // putc('c',ptr);
    // putc('c',ptr);
    fclose(ptr);
    return 0;
}