#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b;
char c;

cin>>a;
cin>>c;
cin>>b;

if(c=='+'){
    cout<<a+b<<endl;
}else if(c=='-'){
    cout<<a-b<<endl;
}else if(c=='/'){
    cout<<a/b<<endl;
}else if(c=='*'){
    cout<<a*b<<endl;
}else{
    cout<<a%b<<endl;
}
}
