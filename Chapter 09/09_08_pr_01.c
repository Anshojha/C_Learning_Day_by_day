#include <stdio.h>
struct vector
{
    int x;
    int y;
};

struct vector sumvector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 21;
    v1.y = 45;
    printf("The Xdim is %d and Ydin is %d\n", v1.x, v1.y);

    v2.x = 2;
    v2.y = 4;
    printf("The Xdim is %d and Ydin is %d\n", v2.x, v2.y);
    sum = sumvector(v1,v2);
    printf("The sum of Xdim vector is %d and sum of Ydim is %d",sum.x,sum.y);

    return 0;
}