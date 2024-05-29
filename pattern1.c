#include<stdio.h>
int main()
{
	int row,col,i,j,mid;
	printf("enter the number of row and col:");
	scanf("%d %d",&row,&col);
	if(col%2==0){
		mid=col/2;
	}
	else{
		mid=col/2;
	}

	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			if(i%2!=0 || j==mid){
				printf(" $ ");
			}
			else{
				printf(" * ");
			}
		}
		printf("\n");
	}
	return 0;
}
				

