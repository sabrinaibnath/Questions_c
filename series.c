#include<stdio.h>
int main()
{
	int number,a;
	printf("enter your number:");
	scanf("%d",&number);
	printf("enter the value of a:");
	scanf("%d",&a);

	double product1,product2,sum1=0,sum2=0;

	for(int i=0;i<=number;i=i+2){
		product1=((a-i)*(a-i));
		sum1=sum1+product1;
	}

	for(int i=1;i<=number;i=i+2){
		product2=((a-i)*(a-i));
		sum2=product2+sum2;
	}

	double sum=sum1-sum2;

	printf("the answer is:%lf",sum);
	return 0;
}




