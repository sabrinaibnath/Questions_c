#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char line[256];
	long frequency[256]={0};
	int sum=0;

	fp=fopen("input.txt","r");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		while(fgets(line,sizeof line,fp)!=NULL){
			if(line[strlen(line)-1]=='\n'){
				line[strlen(line)-1]='\0';
			}

			for(size_t i=0;i<strlen(line);i++){
				unsigned char c=line[i];
				frequency[c]++;
                       		}
		for(int i=0;i<256;i++){
			sum=sum+frequency[i];
		}
	}

		printf("%d",sum);

			
		if(sum%7==0){
			printf("it is divisible by 7");
		}
		else{
			printf("it's not divisible by 7");
		}
	}
		fclose(fp);
	return 0;
}

