#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int x,y,distance,k,m;
	printf("enter your point:");
	scanf("%d %d",&x,&y);


	k=abs((x-5)*(x-5));
	y=abs((y-7)*(y-5));
	distance=sqrt(k+y);


	if(distance<7){
		printf("It's inside");
	}
	else{
		printf("it's not inside");
	}


	return 0;
}
