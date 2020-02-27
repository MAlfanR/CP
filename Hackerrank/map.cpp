#include <bits/stdc++.h>
using namespace std;

int main(){

map <string, int> m;

int n , i, x, a;
string s;
cin>>n;

for(i=0 ; i < n ; i++){
    cin>>x;
    if(x==1){
        cin>>s;
        cin>>a;
        if(m.find(s)==m.end()){
        m.insert(make_pair(s, a));
        }else{
        m[s] = m[s] +a;
        }

    }else if(x==2){
        cin>>s;
        m.erase(s);
    }else{
        cin>>s;
        if(m.find(s)==m.end()){
            cout<<0<<endl;
        }else{
            cout<<m[s]<<endl;
        }
    }
}
}
