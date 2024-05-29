#include<stdio.h>
int semiPrime(int number){
	int count=0;


	for(int i=2;i*i<=number && count<2;i++){
		while(number%i==0){
			number/=i;
			count++;
		}
	}
	if(number>1){
		count++;
	}
	return count==2;
}


int main()
{
	int number;
	printf("enter your number:");
	scanf("%d",&number);

	int result=semiPrime(number);


	if(result==1){
		printf("the number is semiprime:");
	}
	else{
		printf("the number is not semiprime");
	}

	
	return 0;
}
