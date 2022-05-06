#include <stdio.h>
#include <math.h>
// void areasq(int side);
int main(){
    int side;
    printf("Enter the Side of square: ");
    scanf("%d",&side);
    // int ar = areasq(side);
    printf("The area of given %d side of a square is %.2f sq unit.", side, pow(side,2));
     return 0;
}
