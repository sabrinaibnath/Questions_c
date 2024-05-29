#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string word1,word2;
    int value1,value2;
    map<string,int>inputMap1;
    map<int,string>look;
    vector<int>vac;
    int max=0;

    ifstream infile("bookData.txt");
    while(infile>>word1>>value1){
        cout<<word1<<" "<<value1<<endl;
        inputMap1.insert({word1,value1});
    }
    infile.close();

    for(auto it=inputMap1.begin();it!=inputMap1.end();it++){
        value2=(*it).second;
        cout<<value2<<endl;
        vac.push_back(value2);
        word2=(*it).first;
        }

        int length=vac.size();

    for(int i=0;i<length;i++){
        if(vac[i]>max){
            max=vac[i];
        }
    }
    
    ofstream infile2("Max.txt");
    infile2<<word2<<" "<<max;

    infile2.close();
return 0;
}