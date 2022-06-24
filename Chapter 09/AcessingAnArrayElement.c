#include <stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={10,23,34,34,56};
    int *ptr;
    int count =0;
    ptr = &arr[0];
    printf("Accesing the array");
    while(count<SIZE){
        printf("arr[%d]=%d\n",count,*ptr);
        *ptr++;
        count++;
    }
     return 0;
}