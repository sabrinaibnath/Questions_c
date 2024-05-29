#include<stdio.h>
#include<string.h>
int main()
{
	char p1,p2;
	scanf("%c %c",&p1,&p2);


	if((p1=='P' && p2=='R')||(p1=='R' && p2=='S')||(p1=='S' && p2=='P')){
		printf("player1 wins");
	}
	else{
		printf("player2 wins");
	}
	return 0;
}

