#include<bits/stdc++.h>
using namespace std;

int main(){
unsigned long long int t, a, b;

cin>>t;

for(int i=0 ;i<t ; i++){
    cin>>a>>b;

    if(a>b && a-b>=2){
        cout<<"Tere"<<endl;
    }else if(b>a && b-a >=2){
        cout<<"Toni"<<endl;
    }else{
        cout<<"Voting Ulang"<<endl;
    }
}
}
