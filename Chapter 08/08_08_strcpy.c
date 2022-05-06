#include <stdio.h>
#include <string.h>
int main(){
    char *st = "Appoorag";
    char st2[45];
    strcpy(st2,st);
    printf("This is the is st2 after change %s",st2);
     return 0;
}