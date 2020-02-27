#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> v;

int n, x;

cin>>n;

for(int i=0 ; i < n ; i++){
    cin>>x;
    v.push_back(x);
}

sort(v.begin() , v.end());

for(int i=0 ; i <n-1 ; i++){
    cout<<v[i]<<" ";
}

cout<<v[n-1]<<endl;

}
