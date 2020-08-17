#include<bits/stdc++.h>
using namespace std;

int main(){
regex e(".+@gmail\\.com");

int n;
cin>>n;

vector<string>v;
string nama, email;
for(int i=0;i<n ;i++){
    cin>>nama;
    cin>>email;

    if(regex_match(email,e)){
        v.push_back(nama);
    }
}

sort(v.begin(),v.end());

for(int i=0 ;i<v.size(); i++){
    cout<<v[i]<<endl;
}
}
