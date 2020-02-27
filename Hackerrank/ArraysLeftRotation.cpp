#include<bits/stdc++.h>
using namespace std;

int main(){
int n,b;
cin>>n;
cin>>b;
int arr[n];

for(int i=0 ; i<n ;i++){
    cin>>arr[i];
}

for(int i=b ; i<n ;i++){
    cout<<arr[i]<<" ";
}

for(int i=0 ;i<b;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;
}
