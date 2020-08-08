#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,c,x;

cin>>a>>b>>c>>x;
int simpan =x;

x= (a*x + b) %c;
int sum =1;
while(x!=simpan){
    x= (a*x + b) %c;
    sum+=1;
}

cout<<sum<<endl;
}
