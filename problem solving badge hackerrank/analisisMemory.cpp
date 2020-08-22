#include<bits/stdc++.h>

using namespace std;
long long int a,b;

long long int bla(long long int n){

if(n==1 || n==0){
    return 1;

}else{

    return 1+ bla(ceil(n/2))+bla(floor(n/2));

}



}

int main(){

long long  n;

cin>>n;



cout<<bla(n)<<endl;

}

