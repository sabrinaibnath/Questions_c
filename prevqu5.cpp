#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
	set<int>s1;
	vector<int>prime,com;
	int n,m;
	cout<<"enter the size:";
	cin>>n;
	set<int>::iterator it;
	for(int i=1;i<=n;i++){
		cin>>m;
		s1.insert(m);
	}
	for(int num:s1){
		bool is_prime=true;
		
		for(int i=2;i*i<=num;i++){
			if(num%i==0){
				com.push_back(num);
				is_prime=false;
				break;
			}
		}
		if(is_prime && num>1){
			prime.push_back(num);
		}
	}
	for(int num:prime){
		cout<<num<<" ";

	}
	cout<<endl;
	for(int num:com){
		cout<<num<<" ";
	}
	int max,min,mid;
	max=min=mid=com[0];
        for(int i=0;i<com.size();i++){
			if(com[i]>max){
				max=com[i];
			}
			if(com[i]<min){
				min=com[i];
			}
	}
	for(int i=0;i<com.size();i++){
		if(com[i]<max && com[i]>min){
			mid=com[i];
		}
	}
	int diffarance;
	int b=prime.size();
	diffarance=mid-prime[b-1];
	cout<<"the difference is"<<abs(diffarance);
	return 0;
}


		

