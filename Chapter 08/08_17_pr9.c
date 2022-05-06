#include <stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count =0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            // count++;
            printf("yes");
            break;

        }
        else{printf("no");break;}
        ptr++;
    }
    return 0;
}
int main(){
    char st[] = "AnAAsh wefawe qwefwqe eeeeee";
    int ovv = occurance(st , 'z');
     return 0;
}