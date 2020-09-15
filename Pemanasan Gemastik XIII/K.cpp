#include<bits/stdc++.h>
using namespace std;

/*
Untuk cek apakah resultan sebuah vector ada kemungkinan 0 atau tidak cukup dengan menggunakan dasar dari rumus segitiga dimana a+b >= c

*/
int main(){

int sum=0;
int n;
vector<int>v;
while(cin>>n){
    v.push_back(n);
}

sort(v.begin(), v.end());

for(int i=0 ; i<v.size()-1 ; i++){
    sum = sum+v[i];
}

if(sum>=v[v.size()-1]){
    cout<<"MUNGKIN"<<endl;
}else{
    cout<<"MUSTAHIL"<<endl;
}

return 0;
}
