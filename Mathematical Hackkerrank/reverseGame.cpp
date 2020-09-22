#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n , k;

    cin>>t;

    for(int i=0 ; i<t ; i++){
        cin>>n>>k;

        if (k < n-1-k){
            cout << 2*k+1<<endl;
        }else{
            cout << 2*(n-1-k)<<endl;;
        }
    }
    return 0;
}
