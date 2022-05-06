#include <stdio.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    int i =0;
    printf("Enter the value of st1 \n");
    scanf("%s",st1);
    printf("Enter the value charachter  by character:\n");
    while (i != '\n')
    {
    fflush(stdin);
    scanf("%c",&c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\n';
printf("The value of st1 is %s\n",st1);
printf("The value of st2 is %s\n",st2);
     return 0;
}