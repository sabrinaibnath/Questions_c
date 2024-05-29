#include<stdio.h>
void removeValue(int A[],int n,int v){
	int last=-1;


	for(int i=n-1;i>=0;i--){
		if(A[i]==v){
			last=i;
			break;
		}
	}

	if(last!=-1){
		for(int i=last;i<n-1;i++){
			A[i]=A[i+1];
		}
		A[n-1]=0;
	}
	for(int i=0;i<n;i++){
		printf("%d",A[i]);
	}

}



int main(){
	int size,number;
	printf("enter the number of size:");
	scanf("%d",&size);

	int data[size];
	for(int i=0;i<size;i++){
		scanf("%d",&data[i]);
	}

	printf("enter the number:");
	scanf("%d",&number);

	removeValue(data,size,number);

	return 0;
}





