#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning()
{
    printf("Good Morning Alien!!\n");
}
void goodafternoon()
{
    printf("Good Afternoon Alien!!\n");
}
void goodnight()
{
    printf("Good Night Alien!!");
}