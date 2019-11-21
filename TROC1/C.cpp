#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n,x,q,t,y,i,a =0,b=0;

cin>>n;
cin>>q;


for(i=0 ;i< q ;i++){
    cin>>t >>x>>y;


    if(t==1 && x==n){
      a = a+y;
      b= b+y;
    }else if(t==1 && x<n){
      a= a+y;
    }else if(t==2 && x==n){
        a= a-y;
        b=b-y;
    }else{
        b=b-y;
    }


}



    if(b<0){
        b = b *-1;
    }

    if(a<0){
        a = a*-1;
    }

   if(a>=b){
    cout<<a<<endl;
   }else{
    cout<<b<<endl;
   }


return 0;
}
