#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string st1,st2;
cout<<"enter your first string:";
getline(cin,st1);
cout<<"enter your second string:";
getline(cin,st2);

vector<char>vc,vc2;

int length1=st1.size();
int length2=st2.size();
int count=0;

for(int i=0;i<length1;i++){
    for(int j=0;j<length2;j++){
        if(st1[i]==st2[j]){
            vc.push_back(st1[i]);
            break;
        }
    }
}


for(int i=0;i<length2-1;i++){
    for(int j=0;j<vc.size();j++){
        if(st2[i]==vc[j]){
            vc2.push_back(st2[i]);
        }
    }
}


for(int i=0;i<vc.size();i++){
    if(vc[i]!=vc2[i]){
count++;
    }
}


int m=vc.size();
int t=count/2;
double first=m/(double)length1;
double sec=m/(double)length2;
double trh=(double)(m-t)/(double)m;
double jaro=0.33*(first+sec+trh);

cout<<jaro<<endl;
return 0;

}