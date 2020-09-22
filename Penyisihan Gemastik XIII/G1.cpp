#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x, sum=0, p=0;

cin>>n;
vector<int>v;
for(int i=0 ; i< n ; i++){
    cin >>x;
    v.push_back(x);
}

sort(v.begin(), v.end());

for(int i=0 ; i<n-1 ; i++){
    if(v[i]!=v[i+1]){
        sum+=1;
        p+=1;
    }else{
        i+=1;
        p+=2;
    }
}

if(p==n-1){
    sum+=1;
}
if(n%2==1){
    cout<<sum-1<<endl;
}else{
    cout<<sum<<endl;
}



}
