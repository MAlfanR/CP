#include<bits/stdc++.h>
using namespace std;

unsigned long long int sum=1;
void sieveOfEratosthenes(int n){
bool prime[n+1];

memset(prime, true, sizeof(prime));

for(int p=2 ; p*p<=n ;p++ ){

    if(prime[p]==true){
        for(int i=p*p ; i<=n ; i+=p){
            prime[i]=false;
        }
    }

}
for( int p=2 ; p<=n ; p++){
    if(prime[p]){
        sum*=p;
    }
}
cout<<sum<<endl;
}

int main(){

int n = 2000;
sieveOfEratosthenes(n);

return 0;
}
