#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int number,guess,nguess=0;
srand(time(0));
number=rand()%100 +1; //generate random number  between 1 and 100
printf("The random number is %d\n", number);
do
{
    printf("Guess the number between 1 and 100:\n");
    scanf("%d",&guess);
    if (guess>number)
    {
        printf("Lower the number please!\n");
    }
    else if(guess<number){
        printf("Higher the number please\n");
    }
    else{
        printf("You guessed in %d attempt\n",nguess);
    }
    nguess++;

} while (guess != number);

    return 0;
}