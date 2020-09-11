#include<bits/stdc++.h>
using namespace std;

int main(){
int n, x , sum=0, simpan =0;
cin>>n;

int arr[n];

for(int i=0 ;i<n ; i++){
    cin>>x;
    arr[i] = x;
}

for(int i=0 ; i<n ; i++){
    if(i==arr[i]-1){
        sum+=0;
    }else{
        sum+=1;
    }
}

if(sum%2==1){
    sum = (sum+1)/2;
    cout<<sum<<endl;
}else{
    cout<<sum/2<<endl;
}
}
