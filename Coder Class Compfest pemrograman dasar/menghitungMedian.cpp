#include<bits/stdc++.h>
using namespace std;

int main(){
double sum=0;
double a;
unsigned long long int sumn=0;
int n;
cin>>n;

for(int i=1; i<=n ; i++){
    cin>>a;
    sum+=a;
    sumn+=a;

    if ((sum/i)-(sumn/i)==0.5){
    cout<<sum/i<<endl;
    }else{
    cout<<sumn/i<<endl;
    }
}
}
