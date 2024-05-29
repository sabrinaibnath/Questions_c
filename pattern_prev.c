#include<stdio.h>
int main()
{
    int row;
    printf("enter the number of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        for(int j=0;j<=row;j++){
            if((i+j)==(row+1)){
                printf(" 0");
            }
            else if((i+j)<(row+1)){
                printf(" 1");
            }
            else{
                printf("-1");
            }
        }
        printf("\n");
    }
    return 0;
}