#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int x =1;
int arr[n];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}
x = arr[n-1];
for(int i =n-2 ; i>=0 ; i--){
    x= pow(arr[i], x);
}

cout<<x<<endl;
}
