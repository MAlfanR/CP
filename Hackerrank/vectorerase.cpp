#include<bits/stdc++.h>
using namespace std;

int main(){

int n, i , x, q, a,b;
vector<int> v;
cin>>n;

for(i=0 ; i < n ; i ++){
        cin>>x;
    v.push_back(x);

}

cin>>q;
cin>>a;
cin>>b;

v.erase(v.begin()+q-1);
v.erase(v.begin() + a-1 ,v.begin()+b-1);

cout<<v.size()<<endl;

for(i=0 ; i <v.size()-1 ; i++){
    cout<<v[i]<<" ";
}

cout<<v[i]<<endl;
}
