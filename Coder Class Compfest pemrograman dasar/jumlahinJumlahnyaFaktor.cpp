#include<bits/stdc++.h>
using namespace std;

int faktor(int n){

int sum=0;
for(int i=1 ;i<=n ; i++){
    if(n%i==0){
        sum+=1;
    }
}

return sum;
}
int main(){
int n;
cin>>n;

int x = 0;

for(int i=1 ;i<=n ;i++){
    x = x + faktor(i);
}

cout<<x<<endl;

}
