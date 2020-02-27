#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[100];
int n;
int cek, sum=0, q=0;

cin>>n;

for(int i=0;i<n; i++){
    cin>>arr[i];
}

for(int i=0;i<n;i=q){
    if(q+2==n){
        sum=sum+1;
        break;
    }else if(q+2==n-1){
        sum=sum+1;
        break;
    }else if(arr[q+2]==1){
        q=q+1;
        sum=sum+1;
    }else{
        q=q+2;
        sum=sum+1;
    }
}

cout<<sum<<endl;
}
