#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,b;
    cin>>n;
    int sumA=0,sumB=0;
    long int a[n][n];

    for(int i=0 ;i<n; i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
   int  j=n-1;
    for(int i=0; i<n; i++){
        sumA+=a[i][i];
        sumB+=a[i][j];
        j--;
    }

    int hasil;
    hasil = sumA - sumB;

    if(hasil <0){
        hasil = hasil *-1;
    }

    cout<<hasil<<endl;

}

