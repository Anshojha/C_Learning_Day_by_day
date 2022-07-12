#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter rows number: ");
    scanf("%d", &r);
    printf("Enter cols number: ");
    scanf("%d", &c);
    int matrix[r][c], transpose[r][c];
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("Enter the element of a%d%d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n ***orginal of matrix*** \n");
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", matrix[i][j]);
              if ((j==c))
        {
            printf("\n");
        }
        }     
    }
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
          transpose[i][j]=matrix[j][i];
        }
    }
printf("\n ***Transpose of matrix*** \n");
       for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            printf("%d ", transpose[i][j]);
              if ((j==c))
        {
            printf("\n");
        }
        }     
    }

    return 0;
}