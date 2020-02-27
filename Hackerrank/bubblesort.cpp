#include<bits/stdc++.h>
using namespace std;

void swap(int *x , int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main(){
int sum=0;
int n;
cin>>n;
int arr[n];

for(int i=0 ; i<n ;i++){
    cin>>arr[i];
}

for(int i=0 ; i<n-1 ;i++){
    for(int j=0 ; j< n-1 ; j++){
        if(arr[j]>arr[j+1]){
            swap (&arr[j],&arr[j+1] );
            sum=sum+1;
        }
    }
}
cout<<"Array is sorted in "<<sum<<" swaps"<<endl;
cout<<"First Element: "<<arr[0]<<endl;
cout<<"Last Element: "<<arr[n-1]<<endl;
}
