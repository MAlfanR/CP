#include<bits/stdc++.h>
using namespace std;

int main(){
vector<pair<int,int>>v;
long long int x,n,i,a;
cin>>n;
for(i=0;i<n;i++){
    cin>>x;
    v.push_back(make_pair(x,i));
}

cin>>a;
i=0;
while(a!=v[i].first){
    i=i+1;
}
cout<<v[i].second+1<<endl;

}

