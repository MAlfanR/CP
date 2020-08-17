#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.

typedef unsigned long long int ulli;

int main(){
    int t,x;
    cin>>t;
    ulli sum=1;
    vector<ulli> v;
    v.push_back(1);
    for(int i=1; i<=60; i++){
        if(i%2==1){
            sum =sum*2;
            v.push_back(sum);
        }else{
            sum+=1;
            v.push_back(sum);
        }
    }

    for(int i=0 ; i<t; i++){
        cin>>x;
        cout<<v[x]<<endl;
    }
    return 0;
}
