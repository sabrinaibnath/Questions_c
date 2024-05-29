#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string invert(bitset<8>x,int p,int n){
	for(int i=p-1;i<p-1+n;i++){
		if(x[i]==1){
			x[i]=0;
		}
		else{
			x[i]=1;
		}
	}

		return x.to_string();
}
int main()
{
	int n,p;
	bitset<8>x;
	cin>>x>>p;
	n=x.size();
	cout<<invert(x,p,n)<<endl;
	return 0;
}
