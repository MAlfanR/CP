#include<bits/stdc++.h>
using namespace std;

int main(){
int t, n , k, q;
vector<int>v;
cin>>t;

int p1,p2,p3,p4;
for(int x=0 ;x<t ;x++){
    cin>>n>>k;

    for(int i=0 ;i<n ; i++){
        cin>>q;
        v.push_back(q);
    }

    sort(v.begin(), v.end());

    p1 = v[n-1] - v[k];
    p2 = v[n-1-k] - v[0];
    p3 = v[n-(k/2)-1] - v[k/2];

    if(p1 <= p2 && p1 <=p3){
        cout<<p1<<endl;
    }else if(p2<=p1 && p2 <=p3){
        cout<<p2<<endl;
    }else{
        cout<<p3<<endl;
    }

    v.clear();
}
}
