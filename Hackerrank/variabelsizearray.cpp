#include<bits/stdc++.h>
using namespace std;

int main(){

int n, q, a, w, i , j, z, qq ,ww;

cin>>n;
cin>>q;

vector<int>v[n];
for(i=0 ; i < n ; i++){

    cin>>a;

    for(j=0 ; j < a ; j++){
        cin>>w;
        v[i].push_back(w);
    }


}

for(z = 0 ; z< q ; z++){
    cin>>qq;
    cin>>ww;

    cout<<v[qq][ww]<<endl;

}

}
