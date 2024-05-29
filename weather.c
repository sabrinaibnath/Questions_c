#include<stdio.h>
int main()
{
	FILE *fp;

	float temp1[64][365]={0};
        float humidity[64][365]={0};
        float rain[64][365]={0};
        float avgtemp[64]={0};
        float avghum[64]={0};
        float avgr[64]={0};


	fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		int disId,day;
		float temp,hum,r;

		while(fscanf(fp,"%d %d %f %f %f",&disId,&day,&temp,&hum,&r)!=feof(fp)){
			temp1[disId-1][day-1]=temp;
			humidity[disId-1][day-1]=hum;
			rain[disId-1][day-1]=r;
		}
		for(int i=0;i<64;i++){
			for(int j=0;j<365;j++){
				avgtemp[i]=avgtemp[i]+temp1[i][j];
				avghum[i]=avghum[i]+humidity[i][j];
				avgr[i]=avgr[i]+rain[i][j];
			}
			avgtemp[i]/=365;
			avghum[i]/=365;
			avgr[i]/=365;
		}
		FILE *fp2=fopen("temp.txt","w");
	        FILE *fp3=fopen("hum.txt","w");
		FILE *fp4=fopen("rain.txt","w");

		for(int i=0;i<64;i++){
			fprintf(fp2,"%d %0.2f\n",i+1,avgtemp[i]);
	                fprintf(fp3,"%d %0.2f\n",i+1,avghum[i]);
	                fprintf(fp4,"%d %0.2f\n",i+1,avgr[i]);
		}
		fclose(fp);
		fclose(fp2);
		fclose(fp3);
		fclose(fp4);
		printf("repoted successfully");
	}
	return 0;
}

