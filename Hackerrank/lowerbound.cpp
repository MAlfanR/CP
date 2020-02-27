#include<bits/stdc++.h>
using namespace std;

int main(){

vector<int>v;
int n, q , i, x , a;

cin>>n;

for(i=0 ; i<n ;i++){
    cin>>x;
    v.push_back(x);
}
vector<int>::iterator low;
sort(v.begin(), v.end());

cin>>q;

for(i=0 ;i<q ;i++){
    cin>>a;

   low = lower_bound (v.begin(), v.end(), a);
   if(v[low-v.begin()]==a){
        cout<<"Yes "<<(low - v.begin()+1)<<endl;

   }else{
       cout<<"No "<<(low-v.begin()+1)<<endl;
   }
}

}
