#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];
int arrn[n];
int sum=0;
for(int i=0 ;i<n ; i++){
    cin>>arr[i];
    arrn[i] = arr[i];
}

int X = sizeof(arrn)/sizeof(arrn[0]);
sort(arrn,arrn+X);
for(int i=0 ;i<n ;i++){
 if(arr[i]!=arrn[i]){
    sum+=1;
 }
}



if(sum%2==0){
    cout<<sum/2<<endl;
}else{
    sum+=1;
    cout<<sum/2<<endl;
}
}
