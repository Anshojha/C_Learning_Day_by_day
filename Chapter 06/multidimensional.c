#include <stdio.h>

int main()
{
 int i,j,k,arr[2][3][2];
 printf("\nEnter the value\n");
 for (int i = 0; i < 2; ++i)
 {
     for (int j = 0; i  <3; ++j)
     {
        for (int  k = 0; k < 2; ++k)
        {
            scanf("%d",&arr[i][j][k]);
        } 
     }  
 }
 
//  printf("\n************Dispalaying the number***********\n");

//  for (int i = 0; i < 2; i++)
//  {
//      for (int j = 0; i  <3; j++)
//      {
//         for (int  k = 0; k < 3; k++)
//         {
//             printf("arr[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
//         } 
//      }  
//  }
 
    return 0;
}