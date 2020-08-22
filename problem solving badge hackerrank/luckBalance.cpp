#include<bits/stdc++.h>

using namespace std;

int main(){
vector<int>v;
int sum=0;
int n, k,a,b;

cin>>n>>k;

for(int i=0; i<n ; i++){
    cin>>a;
    cin>>b;
    if(b==0){
        sum+=a;
    }else{
        v.push_back(a);
    }
}

if(!v.empty()){

sort(v.begin(), v.end(), greater<int>());

if(k>v.size()){
    for(int i=0 ;i<v.size(); i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
}else{
    for(int i=0 ;i<k; i++){

        sum+=v[i];
    }
    for(int i=k ; i<v.size(); i++){
     sum-=v[i];
}
cout<<sum<<endl;
}

}else{
cout<<sum<<endl;
}

}
