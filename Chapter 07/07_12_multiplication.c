#include <stdio.h>
void printTable(int *multTable, int num, int n){
    printf("The multiplication of %d is : \n",num);
    for (int i = 0; i < n; i++)
    {
        multTable[i]=num*(i+1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d x %d = %d\n",num,(i+1),multTable[i]);
    }
    printf("******************************************\n\n");
    
}
int main(){
    int multable[3][10];
    printTable(multable[0],2,10);
    printTable(multable[1],7,10);
    printTable(multable[2],9,10);
     return 0;
}