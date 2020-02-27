#include <bits/stdc++.h>
using namespace std;

int main(){

int a, n , i, x;
set <int> s;
cin>>n;

set<int>::iterator itr;
for(i=0 ; i <  n ; i++){
    cin>>a;
    if(a==1){
        cin>>x;
        s.insert(x);
    }else if(a==2){
        cin>>x;
        s.erase(x);
    }else{
        cin>>x;
    if(s.find(x)==s.end()){
        cout<<"No"<<endl;
    }else{
        cout<<"Yes"<<endl;
    }
    }
}

}
