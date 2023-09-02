#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    //ROCK PAPER SCISSORS
    char optn,compoptn;
    char compchoice[]={'R','P','S'};
    int val;

    printf("WELCOME TO ROCK , PAPER , SCISSORS !!!\n");
    printf("PRESS R : ROCK \nP : PAPER \nS : SCISSORS \n");
    scanf("%c",&optn);
    
    //COMPUTER'S CHOICE
    srand(time(0));      //SEED FOR RANDOM NO.
    val = rand() % 3;
    compoptn=compchoice[val];
    if (compoptn==optn){
        printf("computer option: %c\n",compoptn);
        printf("DRAW !!");
    } else if (compoptn=='R') {
        printf("computer option: ROCK\n");
        if (optn=='P'){
            printf("YOU WIN!");
        } else if (optn=='S'){
            printf("YOU LOSE ! BETTER LUCK NEXT TIME");
        }
    } else if (compoptn=='P') {
        printf("computer option: PAPER \n");
        if (optn=='R'){
            printf("YOU LOSE ! BETTER LUCK NEXT TIME");
        } else if (optn=='S'){
            printf("YOU WIN!");
        }
    } else if (compoptn=='S') {
        printf("computer option: SCISSORS\n");
        if (optn=='P'){
            printf("YOU LOSE ! BETTER LUCK NEXT TIME");
        } else if (optn=='R'){
            printf("YOU WIN!");
        }
    }
}