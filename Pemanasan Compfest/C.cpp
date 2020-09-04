#include<bits/stdc++.h>
using namespace std;

int main(){

int n , sum=0, suni=0 ; sunj =0;
string s, v;

int arr[26]={0};
int arrn[26] ={0};

cin>>s;
cin>>v;

for(int i=0 ;i<n ; i++){
    if(s[i]!=v[i]){
        arr[ ((int)s[i]) -97]++;
        arrn[ ((int)v[i]) -97]++;
    }
}

for(int i=0 ;i<26 ; i++){
    sum = sum + arr[i];
}

if(sum==0){
    cout<<0<<endl;
}else{
    for(int i=0 ;i<26 ; i++){
        if(arr[i]> 0 && arrn[i]>0){
            sunj+=arr[i];
            suni+=arr
        }else{
            sum += abs(arr[i]-arrn[i]);
        }
    }
}


}
