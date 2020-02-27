#include<bits/stdc++.h>
using namespace std;

int main(){
int n, sum=99999999, sun;
cin>>n;

int arr[n];

for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

int x = sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+x);

for(int i=0;i<n-1;i++){
        sun = (abs(arr[i]-arr[i+1]));
        //cout<<sun<<endl;
    if(sum > sun){
        sum = sun;
    }
}

cout<<sum<<endl;
}
