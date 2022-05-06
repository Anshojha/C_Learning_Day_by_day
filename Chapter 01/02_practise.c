#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("What is the Radius of Circle: ");
    scanf("%d", &radius);
    printf("The area of  Circle %d is %f ", radius, pi * radius * radius);
    int height;
    printf("What is the height of Cylinder: ");
    scanf("%d", &height);
    printf("The volume of the cylinder with the given radius %d is %f", radius, pi * radius * radius * height);

    return 0;
}