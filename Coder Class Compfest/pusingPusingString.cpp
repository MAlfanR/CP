#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
int x,y,z;
cin>>a>>b;

char arr[a];

for(int i=0 ;i<a ; i++){
    cin>>arr[i];
}

int qq;
for(int i=0 ;i<b; i++){
    cin>>x>>y>>z;

    if(x==1){
        swap(arr[y-1], arr[z-1]);
    }else{
        if((z-y%2)==0){
        qq= z-y;
        for(int j=0 ; j<qq/2; j++){
            swap(arr[y-1+j], arr[z-1-j]);
        }
        }else{
        qq=z-y+1;
        for(int j=0 ; j<qq/2; j++){
            swap(arr[y-1+j], arr[z-1-j]);
        }
        }
    }
}

for(int i=0 ;i<a ; i++){
    cout<<arr[i];
}
cout<<endl;
}
