#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main()
{
    goodmorning();

    return 0;
}

void goodmorning()
{
    printf("Good Morning Alien!!\n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Good Afternoon Alien!!\n");
    goodnight();
}
void goodnight()
{
    printf("Good Night Alien!!");
}