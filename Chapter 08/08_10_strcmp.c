#include <stdio.h>
#include <string.h>
int main(){
    char st1[23] = "Zpple";
    char *st2 = "Apple";
    int val = strcmp(st1,st2);
    printf("Now the value of val %d ", val);
     return 0;
}