#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	char word[256];
	long frequency[256]={0};



	fp=fopen("input.txt","r");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
			while(fgets(word,sizeof word,fp)!=NULL){
			if(word[strlen(word)-1]=='\n'){
				word[strlen(word)-1]='\0';
			}

			for(size_t i=0;i<strlen(word);i++){
				unsigned char c=word[i];
				frequency[c]++;
			}
		}
		for(int i=0;i<256;i++){

		if(frequency[i]>0 && frequency[i]%2!=0){
			printf("'%c'  %ld\n",i,frequency[i]);
		}
	}
		fclose(fp);
		}
	return 0;
}
