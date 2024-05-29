#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>invert(vector<int>&v,int p,int n){//this fuction will return a vector.and accept a vector,position, and size.
	for(int i=p-1;i<n;i++){//this loop will itearate till the size and channge the bits.
		if(v[i]==0){
			v[i]=1;
		}
		else if(v[i]==1){
			v[i]=0;
		}
	}

          return v;
}
int main()
{
	vector<int>v,v1;
	int n,p,m;
	cout<<"enter size:";
	cin>>n;
	cout<<"enter the position:";
	cin>>p;
	for(int i=0;i<n;i++){//it is taking input from the user and keeping it in a vector
		cin>>m;
		v.push_back(m);
	}
	v1=invert(v,p,n);//it's just keeping the returened vector from the function
	for(int num:v1){
		cout<<num;//they are showing the function in the consol
	}
	

	return 0;
}


