#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int ksmooth(int x,int k){
	int count,count2=0;
	vector<int>prime;
	for(int i=k+1;i<x;i++){
		count=0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==0){
			prime.push_back(i);
		}
	}
	for(int num:prime){
		if(x%num==0){
			count2++;
		}
	}
	if(count2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
    int k,number;
    cout<<"enter the prime factor:";
     cin>>k;
       cout<<"enter the number:";
       cin>>number;

      // int result=ksmooth(number,k);
       //if(result==1){
	      // cout<<"it's a kSmooth";
      // }
      // else if(result==0){
	      // cout<<"it's not a kSmooth";
      // }
      cout<<"if k smooth:1"<<endl;
      cout<<"if not k smooth:0"<<endl;
      cout<<endl<<"result:"<<ksmooth(number,k)<<endl;
       return 0;
}
