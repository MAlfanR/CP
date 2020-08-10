#include<bits/stdc++.h>
using namespace std;

int main(){

string x;
int n;
cin>>n;

int suma=0,sumb=0,sumc=0,sumd=0;
for(int i=0 ;i<n ; i++){
    cin>>x;

    for(int j=0 ;j<x.size(); j++){
        if(x[j]=='('){
            suma+=1;
        }else if(x[j]==')'){
            sumb+=1;
        }else if(x[j]=='['){
            sumc+=1;
        }else{
            sumd+=1;
        }

    }

    if(suma==sumb &&sumc==sumd){
        cout<<"ya"<<endl;
    }else{
        cout<<"tidak"<<endl;
    }
    suma=0;
    sumb=0;
    sumc=0;
    sumd=0;
}
}
