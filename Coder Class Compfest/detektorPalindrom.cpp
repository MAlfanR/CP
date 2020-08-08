#include<bits/stdc++.h>
using namespace std;


void palindrom(string s){
int L = s.size();
int n = s.size()/2;
int sum=0;
for(int i=0 ;i<n ; i++){
    if(s[i]!=s[L-i-1]){
        sum+=1;
    }
}

if(sum>0){
    cout<< "bukan palindrom" <<endl;
}else{
    cout<<"palindrom"<<endl;
}

}
int main(){

int n;
cin>>n;
string s;
for(int i=0 ; i<n ; i++){
    cin>>s;
    palindrom(s);
}
}
