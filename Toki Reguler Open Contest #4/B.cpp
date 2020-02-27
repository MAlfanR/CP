#include<bits/stdc++.h>
using namespace std;

int main(){
int n, a=0,b=0,c=0,x=0,y=0,z=0, sum=0;
cin>>n;
string s,f;
cin>>s>>f;

for(int i=0 ;i<n ;i++){
    if(s[i]=='G'){
        a= a+1;
    }else if(s[i]=='B'){
    b = b+1;
    }else if(s[i]=='K'){
    c=c+1;
    }

    if(f[i]=='G'){
        x=x+1;
    }else if(f[i]=='B'){
    y=y+1;
    }else if(f[i]=='K'){
    z=z+1;
    }
}

if(a <=z){
    sum = sum+a;
}else{
 sum = sum +z;
}

if(b<=x){
    sum = sum+ b;
}else{
sum = sum+x;
}

if(c<=y){
    sum = sum+c;
}else {
sum = sum+y;
}

cout<<sum<<endl;
}
