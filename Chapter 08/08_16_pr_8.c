#include <stdio.h>
int occurance(char st[], char c){
    char *ptr = st;
    int count =0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;

        }
        ptr++;
    }
    return count;
}
int main(){
    char st[] = "AnAAsh wefawe qwefwqe eeeeee";
    int ovv = occurance(st , 'e');
    printf("Occurance = %d ",ovv);
     return 0;
}