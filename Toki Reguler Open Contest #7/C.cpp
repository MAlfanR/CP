#include<bits/stdc++.h>
using namespace std;

int main(){
vector<pair<long long int,long long int>>v;
vector<long long int>w;

long long int a,b,c,n,suma=0,sumb=0,sumc=0,i;


cin>>n;

for(i=0; i<n ;i++){
    cin>>a;

    w.push_back(a);
    suma=suma+a;

}


for(i=0; i<n ;i++){
    cin>>b;

    v.push_back(make_pair(w[i],b));
   sumb=sumb+b;

}

sumc=sumb-suma;

if(sumc<2){
    cout<<-1<<endl;
}else{
for(i=0;i<n;i++){
    c= v[i].second-v[i].first;
    if(i!=n-1){
    if(c==0||c==1){
        cout<<v[i].first<<" ";
    }else{
    cout<<v[i].first+1<<" ";
    }
    }else{
     if(c==0||c==1){
        cout<<v[i].first;
    }else{
    cout<<v[i].first+1;
    }

}
 c=0;
}
cout<<endl;
}




}
