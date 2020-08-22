#include<bits/stdc++.h>
using namespace std;

bool sortbysecdesc(const pair<long long int,long long int> &a,
                   const pair<long long int,long long int> &b) {
       return a.second>b.second;
}

 int main(){
long long int sum =0;
vector<pair<long long int,long long int>> v;

long long int n;
cin>>n;

long long int a[n], b[n];
for(long long int i=0 ;i<n ; i++){
    cin>>a[i];
}

for(long long int i=0 ;i<n ; i++){
    cin>>b[i];
    v.push_back(make_pair(a[i], b[i]));
}



sort(v.begin(), v.end(), sortbysecdesc);

for(long long int i=0 ; i<n ; i++){
    sum = sum + (v[i].first - (i * v[i].second));
}

cout<<sum<<endl;
}
