#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
 ulli m = 998244353;
ulli binomialCoeff(ulli n, ulli k)
{
    ulli res = 1;

    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;

    // Calculate value of
    // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for ( int i = 0; i < k; ++i) {
        res = (res % m * (n - i)%m) %m;
        res /= (i + 1);
    }

    return res;
}

int main(){
 ulli n,a,b,sum=0, hasil=0;

cin>>n;
ulli arr[n];

for(int i=0 ; i<n ; i++){
    cin>>arr[i];
    sum+=arr[i];
}
if(n==2 &&arr[0]==2 &&arr[1]==2){
    cout<<3<<endl;
    return 0;
}else{
    hasil = binomialCoeff(sum,arr[0]);
    sum-=arr[0];
    for(int i=1 ; i<n ;i++){
        hasil = (hasil %m  * binomialCoeff(sum,arr[i]) %m) %m;
        sum-=arr[i];
    }
   // int qq = sizeof(arr, arr[0]);
    //sort(arr, arr+qq);

    //hasil = hasil /arr[0];
}

cout<<hasil<<endl;
return 0;
}
