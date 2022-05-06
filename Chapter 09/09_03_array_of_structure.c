#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salry;
    char name[20];
};
int main(){
    struct employee facebook[100];
    facebook[0].code = 101;
    facebook[0].salry = 101101;
    strcpy(facebook[0].name,"First"); 

    facebook[1].code = 101;
    facebook[1].salry = 101101;
    strcpy(facebook[1].name,"Second"); 

    facebook[2].code = 101;
    facebook[2].salry = 101101;
    strcpy(facebook[2].name,"Thirs"); 
    printf("Done!!");
     return 0;
}