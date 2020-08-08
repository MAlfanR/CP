#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0 ;i<n ; i++){
    cin>>arr[i];
}
int x;
if(n%2==1){
    x = n/2;

    for(int i=0 ;i<x ;i++){
        cout<<arr[i]<<" ";
        cout<<arr[n-1-i]<<" ";
    }

    cout<<arr[x]<<endl;
}else{
    x= n/2;
     for(int i=0 ;i<x ;i++){
        if(i!=x-1){
        cout<<arr[i]<<" ";
        cout<<arr[n-1-i]<<" ";
        }else{
        cout<<arr[i]<<" ";
        cout<<arr[n-1-i];
        }
    }
    cout<<endl;
}

//1 2 3 4 5 6 7 8
}
