#include<stdio.h>
int main()
{
	int x,y;
	printf("enter your point:");
	scanf("%d %d",&x,&y);

	if((x>=2 &&x<=5) && (y>=1 && y<=6)){

			printf("it is inside");
	}
	else{
		printf("its not");
	}
	return 0;
}
			
		
