#include <stdio.h>

int main(){
 char str1[100];
 char *pt;
 int ctrV, ctrC;
 fgets(str1,sizeof(str1),stdin);
pt=str1;
ctrC=ctrV=0;
while (*pt!='\0')
{
    if(*pt=='A'||*pt=='E'||*pt=='I'||*pt=='O'||*pt=='U'){
        ctrV++;
    }
    else{
        ctrC++;
    }
}
printf("Number of Vowel is %d and the number of consonent is %d",ctrV,ctrC);
    
     return 0;
}