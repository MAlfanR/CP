#include<bits/stdc++.h>
using namespace std;

int main(){

stack<int>s;
int n, m, temp;

cin>>n;

for(int i=0 ;i<n ;i++){
    cin>>temp;
    if(s.empty() || s.top()!=temp){
        s.push(temp);
    }
}

cin>>m;

for(int i=0 ;i<m ; i++){
    cin>>temp;
    while(!s.empty() && temp>=s.top() ){
        s.pop();
    }
    cout<<s.size() +1<<endl;
}
}
