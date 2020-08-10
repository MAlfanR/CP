#include<bits/stdc++.h>
using namespace std;

int main(){
int n ;
cin>>n;

vector<string> v;
string s;
string x;
int sum=0;
for(int i=0 ;i<n ;i++){
    cin>> x;
    if(x=="DAFTAR"){
        cin>>s;
        v.push_back(s);
    }else{
        cin>>s;
        for(int i=0; i<v.size();i++){
            if(s==v[i]){
                sum+=1;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }
}
}
