#include <stdio.h>
void display();
int main()
{
    int a;
    printf("Initializing the function\n");
display();
printf("function stop working from here\n");
    return 0;
}
 void display(){
     printf("This is a display function\n");
 }