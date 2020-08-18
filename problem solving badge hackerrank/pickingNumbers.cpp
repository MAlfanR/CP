#include <bits/stdc++.h>

using namespace std;



int main(){

    int arr[100] = {0};
    int n, max=0, k;
    cin>>n;

    for(int i=0 ; i<n ; i++){
        cin>>k;
        arr[k-1]+=1;
    }

    for(int i=0 ;i<99 ; i++){
        if(arr[i]+arr[i+1]>=max){
            max = arr[i]+arr[i+1];
        }
    }

    cout<<max<<endl;
    return 0;
}
