#include<bits/stdc++.h>
using namespace std;

int main(){
int n;

int penyanggah;
cin>>n;
int arr[n];
for(int i=0 ; i<n ; i++){
    cin>>arr[i];
}

vector<int>v;
vector<int>x;
if(n<=3){
    cout<<"Ya"<<endl;
    return 0;
}else{

        for(int i=0 ; i<n-1 ; i++){
            if(arr[i]<arr[i+1]){
                v.push_back(arr[i]);
            }else{
                x.push_back(arr[i]);
            }
        }

        if(arr[n-1] <arr[n-2]){
            v.push_back(arr[n-1]);
        }else{
            x.push_back(arr[n-1]);
        }

        for(int i=0 ;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                cout<<"Tidak"<<endl;
                return 0;
            }
        }

        if(v[v.size()-1] <v[v.size()-2]){
           cout<<"Tidak"<<endl;
                return 0;
        }

        for(int i=0 ;i<x.size()-1;i++){
            if(x[i]>x[i+1]){
                cout<<"Tidak"<<endl;
                return 0;
            }
        }

         if(x[x.size()-1] <x[x.size()-2]){
           cout<<"Tidak"<<endl;
                return 0;
        }



        cout<<"Ya"<<endl;
        return 0;

}
}
