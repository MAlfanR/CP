#include<bits/stdc++.h>
using namespace std;

int main(){
int  x=0, sum=0, n;

cin>>n;
int arr[n];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

if(n==1){
    cout<<0<<endl;
    return 0;
}


for(int i=0 ; i<n ; i++){
    if(arr[i]==arr[n-1-x]){
        x+=1;
        y=
    }else{
        sum+=1;
    }
    if(i+x >n-1-1){
        break;
    }


}

cout<<sum<<endl;
}
