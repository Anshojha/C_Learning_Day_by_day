#include <stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while (*ptr !='\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    

}
int main(){
    char a[40];
    printf("Enter the string you want to decrypt: ");
    scanf("%s",a);
    decrypt(a);
    printf("The decrypted value of string %s",a);
     return 0;
}