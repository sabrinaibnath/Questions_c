#include<stdio.h>
int main()
{
	int row,col;
	printf("enter the number of row and col");
	scanf("%d %d",&row,&col);

	int diagonal_sum1=0,diagonal_sum2=0,row_sum=0,col_sum=0;
	int data[row][col];
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&data[i][j]);
		}
	}

	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i==j){
				diagonal_sum1=diagonal_sum1+data[i][j];
			}
		}
	}
	printf("%d\n",diagonal_sum1);


	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i+j==row-1){
				diagonal_sum2=diagonal_sum2+data[i][j];
			}
		}
	}
	printf("%d\n",diagonal_sum2);
	if(diagonal_sum1!=diagonal_sum2){
		printf("it's not a magic square");
	}
	return 0;
}
