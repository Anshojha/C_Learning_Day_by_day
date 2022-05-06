#include <stdio.h>
void printArray(int ptr[], int n){
    for(int i =0; i < n; i++) {
        printf("The value of element %d is %d\n", i+1, *(ptr+i));
    }
    ptr[2]=222; //This will change the main array also
}
int main()
{
int arr[] = {12,32,43,434,234,23};
printArray(arr,7);
printf("%d",arr[2]);
    return 0;
}