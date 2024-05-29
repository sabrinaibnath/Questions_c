#include<stdio.h>
int main()
{
char str[25];
printf("enter your string:");
scanf("%s",str);

char word;
scanf(" %c",&word);
int l=0;


for(int i=0;str[i]!='\0';i++){
	l++;
}

for(int i=0;i<l;i++){
	if(str[i]==word){
	for(int j=i;j<l;j++){	
		str[j]=str[j+1];
	}
	l--;
	i--;
	}
}
str[l]='\0';

printf("%s",str);
return 0;
}

