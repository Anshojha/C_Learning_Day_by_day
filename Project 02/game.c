#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int snakewatergun(char you, char comp){
    // return 1 if you win else -1 of if the match is drawn return 0
    if(you == comp){
        return 0;
    }
    if(you=='s' && comp == 'w'){
        return 1;
    }
    else if (you=='w' && comp == 's'){
        return -1;
    }
    if(you=='s' && comp == 'g'){
        return -1;
    }
    else if (you=='g' && comp == 's'){
        return 1;
    }
    if(you=='g' && comp == 'w'){
        return -1;
    }
    else if(you=='w' && comp == 'g'){
        return 1;
    }
}
int main(){
    char you, comp;
    int number;
    srand(time(0));
    number = rand()%100+1;
    if(number <33){
        comp='s';
    }
    else if(number >33 && number <66){
        comp='w';
    }
    else{
        comp='g';
    }
    // comp = 's';
    printf("Enter 's' for snake , 'w' for water and 'g' for gun:\n ");
    scanf("%c",&you);
    int result = snakewatergun(you,comp);
    printf("You choose %c and computer choose %c.\n", you, comp);
    if (result == 0){
        printf("Match Drawn!!\n");
    }
    else if (result == 1){
        printf("Match Won!!\n");
    }
    else if (result == -1){
        printf("Match Lost!!\n");
    }
     return 0;
}