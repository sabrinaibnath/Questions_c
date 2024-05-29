#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y;
cout<<"enter the position:";
cin>>x>>y;
string s;
cout<<"enter your string:";
cin>>s;


for(int i=0;i<s.size();i++){
    if(s[i]=='U'){
        y++;
    }
    else if(s[i]=='D'){
        y--;
    }
    else if(s[i]=='R'){
        x++;
    }
    else if(s[i]=='L'){
        x--;
    }
}


cout<<x<<" "<<y<<endl;
return 0;
}