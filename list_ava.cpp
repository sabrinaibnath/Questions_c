#include<iostream>
#include<bits/stdc++.h>
using namespace std;
double avarage(list<int>&l,int size){
    int sum=0;
    double av;
    list<int>::iterator it;
    for(it=l.begin();it!=l.end();it++){
        sum=sum+(*it);
    }
av=sum/size;
return av;
}
int main()
{
    list<int>l;
    int size;
    cin>>size;
    for(int i=1;i<=size;i++){
        int x;
        cin>>x;
        l.push_back(x);
    }
    double result=avarage(l,size);
    cout<<result;
    return 0;

}