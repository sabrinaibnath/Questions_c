#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
stack<char>s1;
int length=s.size();
for(int i=length;i>=0;i--){
    if(!s1.empty()&&s1.top()==s[i]){
        s1.pop();
    }
    else{
        s1.push(s[i]);
    }
}
int result=s1.size();
while(!s1.empty()){
    cout<<s1.top();
    s1.pop();
}

cout<<endl;
cout<<"the result is"<<result;
return 0;
}