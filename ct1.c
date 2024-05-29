#include<stdio.h>
int main()
{
int tempHigh,tempMin,humi,rain,sunshin;
printf("enter the value:");
scanf("%d %d %d %d %d",&tempHigh,&tempMin,&humi,&rain,&sunshin);

int count=0;
if(tempHigh>=31 && tempHigh<=34){
	count++;
}
if(tempMin>=22 && tempMin<=23){
	count++;
}
if(humi>=89 && humi<=92){
	count++;
}
if(rain>=0 && rain<=10){
	count++;
}
if(sunshin>=6 && sunshin<=9){
	count++;
}
if(count>3){
printf("high");
}
else if(count==3){
	printf("modarate");
}
else{
	printf("no");
}
return 0;
}