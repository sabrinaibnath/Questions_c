#include<stdio.h>
int func(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*func(n-1)+n;
	}
}
int check(int x){
	int i=0;
	while(func(i)<=x){
		if(func(i)==x){
			return 1;
		}
		i++;
	}
	return 0;
}
int main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);

	int result=check(number);
	printf("%d",result);

	return 0;
}
