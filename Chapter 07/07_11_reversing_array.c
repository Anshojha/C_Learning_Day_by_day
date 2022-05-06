#include <stdio.h>
void reversearr(int *arr, int n){
     int temp;
     for (int i = 0; i <(n/2); i++)
     {
          temp = arr[i];
          arr[i]=arr[n-i-1];
          arr[n-i-1] = temp;
     }
     
}
int main(){
    int arr[100];
    scanf("%d",arr);
    int n = sizeof(arr);
    reversearr(arr,n);
    for (int i = 0; i < 7; i++)
    {
         printf(" %d ",arr[i]);
    }
    
     return 0;
}