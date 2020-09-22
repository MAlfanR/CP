#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the primeCount function below.
 */
unsigned long long int arr[17] ={0};
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
int i=1;
for( int p=2 ; p<=n ; p++){
    if(prime[p]){
        sum = sum*p;
        arr[i]= sum;
        i+=1;
    }
}
}
int primeCount(unsigned long long int n) {
    /*
     * Write your code here.
     */
     if(n==1){
         return 0;
     }
     for(int i=1 ;i<=16; i++){
         if(n>=arr[i]){
             if(n==arr[i+1]){
                 return i+1;
             }else if(n<arr[i+1]){
                 return i;
             }
         }
     }

    return 0;
}

int main(){
    int x=55;
    sieveOfEratosthenes(x);

    /*
    for(int i=0 ;i<=16 ;i++){
        cout<<arr[i]<<endl;
    }
        */
    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        unsigned long long int n;
        cin >> n;
        int result = primeCount(n);

        cout<< result << "\n";
    }


    return 0;
}
