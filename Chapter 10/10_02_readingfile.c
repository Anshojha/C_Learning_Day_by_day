#include <stdio.h>

int main(){
 FILE *ptr;
 ptr = fopen("answh.txt","w");
    int num;
    int num2;
   //  clearscr();
     printf("Enter the value of num:");
    fscanf(ptr,"%d",&num);
     printf("Enter the value of num:");
    fscanf(ptr,"%d",&num2);
    if(ptr==NULL){printf("The file does not exit");}
    else{
     
     
    printf("The value of is %d\n",num);
    printf("The value of is %d",num2);
    }
     return 0;
}