#include<bits/stdc++.h>
using namespace std;

int main(){
int n, q;
cin>>n>>q;

int arr[n];

for(int i=0 ;i<n ;i++){
    cin>>arr[i];
}

int X = sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+X);

int p;
for(int i=0 ; i<q; i++){
    cin>>p;
    cout<<arr[p-1]<<endl;
}
}
