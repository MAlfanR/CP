#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,c,i;
int sum1=0,sum2=0;
cin>>a;

int arr[a];
for(i=0;i<a;i++){
    cin>>arr[i];
}

string ayu,budi;
cin>>b;
cin>>ayu;
cin>>c;
cin>>budi;

if(ayu=="right"){
    for(i=b-1; i<a ;i++){
        sum1=sum1+arr[i];
    }}else{
        for(i=b-1; i>=0 ;i--){
        sum1=sum1+arr[i];
    }
}

if(budi=="right"){
    for(i=c-1; i<a ;i++){
        if(arr[i]==0)
        sum2=sum2+1;
    }}else{

        for(i=c-1; i>=0 ;i--){
        if(arr[i]==0)
        sum2=sum2+1;
    }
}

cout<<sum1<<" "<<sum2<<endl;
return 0;


}
