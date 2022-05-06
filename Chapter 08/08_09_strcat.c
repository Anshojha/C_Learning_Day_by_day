#include <stdio.h>
#include <string.h>
int main(){
    char st1[45] ="Harsh";
    char *st2 = "Appoorag";
    
    strcat(st1,st2);
    printf("This is the is st2 after change %s",st1);
     return 0;
}