#include<stdio.h>
int func(int number){
	 if(number==1){
		return 1;
	}
	else{
		return func(number-1)+3;
	}
}
int main(){
	int number,count1=0,count2=0;
	scanf("%d",&number);

	int data[number+1];

	for(int i=1;i<number+1;i++){
		data[i]=func(i);
	}

	for(int i=1;i<number+1;i++){
		printf("%d\n",data[i]);
		if(data[i]%2==0){
			count1++;
		}
		else{
			count2++;
		}

	}
	printf("even number available:%d\n",count1);
	printf("odd number available:%d\n",count2);

	return 0;
}



