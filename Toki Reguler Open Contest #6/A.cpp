#include<bits/stdc++.h>
using namespace std;


int main(){

long long int n,a,b,c,d,x,y;

long long int temp1,temp2, sum=0,sisip;
cin>>n;
cin>>x;
cin>>y;
temp1=x;
temp2=y;
if(x<0){
    temp1 = x *-1;
}
if(y<0){
    temp2 = temp2 * -1;
}

if(temp1>n || temp2 > n ){
    cout<<-1<<endl;
}else if(temp1+temp2>n){
    cout<<-1<<endl;
}else{
    if(x<0){
        d= x*-1;
        b=0;
        sum = sum+d;
    }else{
        b=x;
        d=0;
        sum = sum+b;
    }

    if(y<0){
        c= y*-1;
        a=0;
        sum = sum+c;
    }else{
        a=y;
        c=0;
        sum = sum+a;
    }
    sisip = n-sum;

    if (sisip %2==1){
        cout<<-1<<endl;
    }else{
        sisip = sisip /2;
        cout<<a+sisip<<" "<<b<<" "<<c+sisip<<" "<<d<<endl;
    }

}

}
