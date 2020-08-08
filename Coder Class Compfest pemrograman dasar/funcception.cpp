#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,x,y;

cin>>a>>b>>x>>y;

if(x>y){
    cout<<x<<endl;
}else {
    while(x<y){
    cout<<x<<endl;
    x= x*a+b;
    }
}


}
