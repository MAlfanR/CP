#include <bits/stdc++.h>

using namespace std;
int main(){
int x, n ;
cin>>n;

int arr[100] = {0};
for(int i=0 ; i<n ; i++){
    cin>>x;

    arr[x]++;
}
int max = 0;
for(int i=0 ;i<100 ;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
int sum = n-max;
cout<<sum<<endl;
}
