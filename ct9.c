#include<stdio.h>
int main()
{
int row,col;
printf("enter the number of row and col:");
scanf("%d %d",&row,&col);
for(int i=1;i<=row;i++){
    for(int j=1;j<=col;j++){
        if(i%2!=0){
            if(j%3==0){
                printf(" O");
            }
            else{
                printf(" $");
            }
        }
        if(i%2==0){
            if(j%3!=0){
                printf(" *");
            }
            else{
                printf(" $");
            }
        }
    }
    printf("\n");
}
return 0;
}