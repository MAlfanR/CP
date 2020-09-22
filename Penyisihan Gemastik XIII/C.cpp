#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

int main(){

int p,q,m,n;

cin>>n;

for(int i=0 ; i< n ; i++){
    cin>>p>>q>>m;

    for(int i=0 ; i<m ; i++){
        if(p>q){
            p = p/2;
        }else{
            q=q/2;
        }
        if(p==0 && q==0){
            break;
        }
    }

    cout<<p<<" "<<q<<endl;

    if(p>q){
        cout<<p<<" "<<q<<endl;
    }else{
        cout<<q<<" "<<p<<endl;
    }
}
return 0;
}
