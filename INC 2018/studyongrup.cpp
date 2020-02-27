#include<bits/stdc++.h>
using namespace std;

int main(){
long long int mini=0,maxi=0;
long long int a,b,c,i;
cin>>a>>b;
long long int arr[a];
for(i=0;i<a;i++){
  cin>>arr[i];

}
int qw;
int n=sizeof(arr)/sizeof(arr[0]);
sort(arr,arr+n);

long long int fan;
if(b>a){

     for(i=0;i<a;i++){
    mini=mini+arr[i];
}
cout<<mini<<" "<<mini<<endl;

}
else if(b!=0){
    int q=a%b;
int ran=0;
if(q>0){
    ran=1;
}
     fan   =a/b;
     for(i=0;i<b;i++){
    mini=mini+arr[i];
}

for(i=0;i<a;i+=fan+ran){
    maxi=maxi+arr[i];
    q=q-1;
    if(q<0){
    ran=0;
}
}

cout<<mini<<" "<<maxi<<endl;
     }
else{
 cout<<mini<<" "<<maxi<<endl;
}


}
