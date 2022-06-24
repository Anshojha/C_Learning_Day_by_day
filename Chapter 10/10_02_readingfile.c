#include <stdio.h>

int main(){
 FILE *ptr;
 ptr = fopen("answh.txt","r");
    int num;
    int num2;
    if(ptr==NULL){printf("The file does not exit");}
    else{
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    printf("The value of is %d\n",num);
    printf("The value of is %d",num2);
    }
     return 0;
}