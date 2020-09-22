#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

int main(){

ulli n, m, q, x1,x2,y1,y2, sum=0, sumn=0;

cin>>n>>m>>q;
ulli arr[n][m+1];

for(int i=0 ; i<n; i++){
    for(int j=0 ; j<m ; j++){
        cin>>arr[i][j];
        sum+=arr[i][j];
    }

    arr[i][m] = sum;
    sum=0;
}

for(int i=0 ; i<q ; i++){
    cin>>x1>>y1>>x2>>y2;
    x1 = x1-1;
    y1-=1;
    x2-=1;
    y2-=1;

    /*
    for(int j = x1 ; j<= x2 ; j++){
        for(int k = y1 ; k<=y2;k ++ ){
            sum+=arr[j][k];
        }
    }
    */

    for(int j=x1 ; j<=x2 ; j++){
        if(y1==0){
            sum = arr[x1][m]- arr[x1][y2];
            sumn+=sum;
        }else if(y2==m-1){
            sum = arr[x1][m] - arr[x1]-
        }

        if(y1==0 && y2==m-1){

        }
    }

}

}
