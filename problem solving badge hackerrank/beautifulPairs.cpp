#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,a,x;
    int arr[1001] ={0};

    cin>>n;

    for(int i=0; i<n ; i++){
        cin>>x;
        arr[x]++;
    }

    int pasanganCantik=0;

    for(int i=0; i<n ; i++){
        cin>>x;
        if(arr[x]>0){
            arr[x]-=1;
            pasanganCantik++;
        }
    }

    if(pasanganCantik==n){
        cout<<pasanganCantik-1<<endl;
    }else{
        cout<<pasanganCantik+1<<endl;
    }
}
