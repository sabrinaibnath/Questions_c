#include<stdio.h>
int main()
{
char player1,player2;
printf("enter the move of player one:");
scanf("%c %c",&player1,&player2);
if((player1=='P' && player2=='R')||(player1=='R'&& player2=='S')||(player1=='S'&& player2=='P')){
    printf("player1 wins");
}
else{
    printf("player2 wins");
}
return 0;
}