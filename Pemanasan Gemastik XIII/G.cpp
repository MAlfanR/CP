#include<bits/stdc++.h>
using namespace std;

int main(){
long long int N,a,b,c,d,i,x,sum=0,fan,j,min=0;;
fan=1;
cin>>N;
int arr[N];
int arr1[N];
for(i=0;i<N;i++){
    cin>>a>>b>>c>>d;
    c=c-a;
    d=d-b;
    if(c>=d){
         arr[i]=c;
         arr1[i]=d;
    }else{
    arr[i]=d;
    arr1[i]=c;
    }

}

for(i=0;i<N-1;i++){
    for(j=fan;j<N;j++){
        if(arr[i]>=arr[j]&&arr1[i]>=arr1[j] ||arr[j]>=arr[i]&&arr1[j]>=arr1[i]  ){
            min=min+1;
        }else{
            sum=sum+1;
        }
    }
    fan=fan+1;
}
cout<<sum<<endl;
}
