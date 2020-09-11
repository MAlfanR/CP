#include<bits/stdc++.h>
using namespace std;

int main(){
int n, sum=0, sun =0, penanda=0, ran=0, sun= 0;
string s;
cin>>n;
cin>>s;

for(int i=0 ;i< n/2 ;i++){
    if(s[i]==s[n-1-i]){
        penanda+=1;
        sum+=1;
    }else{
        for(int j =0 ; j<penanda; j++){
            if(s[i]==s[n-1-penanda]){
                ran+=1;
                sun+=1;
            }
        }
    }
}

if(n==sum){
    cout<<sum<<endl;
}else{
    cout<<sum+1<<endl;
}
}
