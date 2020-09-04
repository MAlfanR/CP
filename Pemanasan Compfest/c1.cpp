#include<bits/stdc++.h>
using namespace std;

int main(){
int n, sum=0;
string s, v;
cin>>n;
cin>>s>>v;

for(int i=0 ; i< n ; i++){
    if(s[i]==v[i]){
        sum+=0;
    }else if((s[i] != v[i]) && (s[i] == v[i+1]) && (v[i]==s[i+1]) ){
        sum+=1;
        ++i;
    }else{
        sum+=1;
    }
}

cout<<sum<<endl;
}
