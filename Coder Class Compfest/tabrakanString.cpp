#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

ulli arri[1000];

void power(int x){
    int qq=26;
    arri[0] = 26 %x;
    arri[1]= 26%x;
    for(int i=2 ;i<1000; i++){
    arri[i] = (arri[i-1] * qq % x) %x;
    }
}

int hashing (string s, int c){

if(s.size()==1){
    return (s[0]-64)%c;
}else{
    ulli qq = ((s[0]-64) + (s[1]-64) * 26) % c ;
    for(int i=2; i<s.size(); i++){
        qq= qq  + ((s[i]-64) * arri[i]));
        qq = qq %c;
        }
     return qq;
    }

}
int main(){

int n, simpan;
int t;
string s;
cin>>n;
cin>>t;

int arr[t]= {0};

power(t);
for(int i=0 ;i<n ; i++){
    cin>>s;
    simpan = hashing(s,t);
    arr[simpan]+=1;
}
int ww=0;
for(int i=0 ; i<t; i++){
    cout<<arr[i]<<endl;
    if(arr[i]>1){
    cout<<"YA"<<endl;
    ww=1;
    break;
    }
}

if(ww==0){
    cout<<"TIDAK"<<endl;
}

}
