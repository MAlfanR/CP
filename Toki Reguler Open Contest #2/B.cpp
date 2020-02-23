#include<bits/stdc++.h>
using namespace std;


int main(){
long long int a,b,n,sum,hasil,i;
cin>>n;

if(n%2==1){
    sum = n/2;
    cout<<2<<endl;
    cout<<sum<<" "<<sum+1<<endl;
}else{
    sum = n-6;
    hasil = sum/2;
    cout<<hasil+2<<endl;
    for(i=0 ;i<hasil ; i++){
        cout<<2<<" ";
    }
    cout<<3<<" "<<3<<endl;
}
}
