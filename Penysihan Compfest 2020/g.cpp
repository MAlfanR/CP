#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;
int sum = 1;
int arr[n];

for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

if(n<=3){
    cout<<"Ya"<<endl;
}else{
    for(int i =0 ; i<n-1 ; i++){
        if(i%2==0){
            if(arr[i]<arr[i+1]){
                sum=1;
            }else{
                sum=0;
                cout<<"Tidak"<<endl;
                return 0;
            }
        }else{
            if(arr[i]>arr[i+1]){
                sum=1;
            }else{
                sum=0;
                cout<<"Tidak"<<endl;
                return 0;
            }
        }
    }
}

if(sum==1){
    cout<<"Ya"<<endl;
}
}
