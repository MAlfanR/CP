#include<bits/stdc++.h>
using namespace std;

int main(){
 long long int a,b,i,c,x,y;
x=0;
y=0;
string h;
cin>>a>>b;
cin>>h;

for(i=0; i<h.size(); i++){
    if(h[i]=='t'){
    x=x+1;
    }else if(h[i]=='b'){
    x=x-1;
    }else if(h[i]=='u'){
    y=y+1;
    }else{
    y=y-1;
    }
}
   a=a-x;
    b=b-y;


    cout<<a<<" "<<b<<endl;

return 0;
}
