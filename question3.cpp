#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int validate(string s){
    string word;
    string hscpass,sscpass;
    int count=0;
    vector<string>vct1;
    stringstream ss(s);
    while(ss>>word){
        vct1.push_back(word);
    }
    hscpass=vct1[3];
    sscpass=vct1[6];
    
for(int i=0;i<vct1.size();i++){
    if(vct1[i]=="CU"){
        count=count+1;
    }
    else if(vct1[i].size()==3){
        count=count+1;
    }
    else if(vct1[i].size()==3){
        count=count+1;
    }
    else if(hscpass>sscpass){
        count++;
    }
}
cout<<count<<endl;
if(count==4){
    return 1;
}
else if(count<4||  count>4){
    return 0;
}
}


int main()
{
    string st;
    cout<<"enter your string(in the capital letter):";
    getline(cin,st);
    int result=validate(st);
    if(result==1){
        printf("valid");
    }
    else if(result==0){
        printf("not valid");
    }
    return 0;
}