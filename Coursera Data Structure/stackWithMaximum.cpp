#include<bits/stdc++.h>
using namespace std;

struct stackKu{
stack<int>s;
int max_elements;

void max(){
    if(s.empty()){
        cout<<""<<endl;
    }else{
        cout<<max_elements<<endl;
    }
}

void push(int x){
    if(s.empty()){
        max_elements = x;
        s.push(x);
        return;
    }
    if(x>max_elements){
        s.push(2*x - max_elements);
        max_elements = x;
    }else{
        s.push(x);
    }
}

void pop(){
if(s.empty()){
    return;
}
int t = s.top();
s.pop();

if(t > max_elements){
    max_elements = 2 * max_elements - t;
}
}
};
int main(){
stackKu s;
int n, v;
string x;
cin>>n;
for(int i=0 ; i<n ; i++){
    cin>>x;
    if(x=="push"){
        cin>>v;
        s.push(v);
    }else if(x=="pop"){
        s.pop();
    }else{
        s.max();
    }
}
}
