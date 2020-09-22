#include <bits/stdc++.h>

using namespace std;

// Complete the summingSeries function below.
//  un = a+ (n-1)b
//  */

  typedef unsigned long long int ulli;
  ulli mod =1000000007;
  ulli summingSeries(ulli  x) {
// //     /*
// //      * Write your code here.
// //      */
// //     //  if(n==1){
// //     //      return 1;
// //     //  }

// //     //  ulli a=1, b=2, sN=0, sisa=0, uN, total=0;
// //     //  uN = a +(n-1) * b;

// //     //  if(n%2==1){
// //     //      sisa+=1;
// //     //  }

// //     //  sN = ((n/2) % mod * (a + uN)%mod)%mod;

// //     //  if(sisa==1){
// //     //      total = 0.5 * (uN+a);
// //     //  }
// //     //  sN = (sN % mod + total % mod)%mod;
// //     //  return sN;



     return  ( (x % mod) * (x % mod))%mod;

 }


int main()
{

    unsigned long long int t, n;
    cin >> t;

    for(int i=0 ; i< t ; i++){
        cin>>n;
        cout<<summingSeries(n)<<endl;
    }


    return 0;
}
