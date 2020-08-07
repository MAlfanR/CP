#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b,c;

cin>>a>>b>>c;
int temp;

if(a>c && a>b){
    temp=c;
    c=a;
    a=temp;
}else if(b>c && b>a){
    temp = c;
    c=b;
    b=temp;
}

if(a+b <= c){
    cout<<"bukan segitiga"<<endl;
}else{
    cout<<"segitiga"<<endl;
}
}
