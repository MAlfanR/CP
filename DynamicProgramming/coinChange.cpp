#include<bits/stdc++.h>
using namespace std;

//rekursif

int count( int s[], int m , int n){
    if(n==0)
        return 1;

    if (n < 0)
        return 0;


    if(m <=0 && n >=1)
        return 0;

    return count(s, m-1, n) + count(s, m , n-s[m-1] );
}
int main(){
int i, j;

int arr[] = {2,5,3,6};
int m = sizeof(arr)/sizeof(arr[0]);
cout<<m<<endl;
cout<<count(arr,m,10)<<endl;
}
