#include<bits/stdc++.h>
using namespace std;

int main(){
int n, k, x;

cin>>n>>k;
int arr[n];



vector<int>v;
vector<int>gez;
for(int i=1 ; i<=n ; i++){
    arr[i-1] = i;
}

if(k==0){
    for(int i=0 ;i<n; i++){
        if(i!=n-1){
        cout<<arr[i]<<" ";
        }else{
        cout<<arr[i];
        }
    }
    cout<<endl;
}else{
for(int i=0 ; i<k ; i++){
    cin>>x;
    v.push_back(x);
}

sort(v.begin(), v.end());

int kin=0;
for(int i=0 ;i<n ; i++){
    if(arr[i]!=v[kin]){
        gez.push_back(arr[i]);
    }else{
        kin+=1;
    }
}

for(int i=0 ;i<gez.size(); i++){
    if(i==gez.size()-1){
        cout<<gez[i];
    }else{
        cout<<gez[i]<<" ";
    }
}
cout<<endl;

}
}
