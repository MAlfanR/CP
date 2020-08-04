#include <bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   cin>>n;
    double plus=0,minus=0,zero=0;
   int a[n];

   for(int i=0; i<n; i++){
       cin>>a[i];
       if(a[i]<0){
           minus+=1;
       }else if(a[i]==0){
           zero+=1;
       }else{
           plus+=1;
       }
   }

   cout<<fixed<<setprecision(6)<<plus/n<<endl;
   cout<<fixed<<setprecision(6)<<minus/n<<endl;
   cout<<fixed<<setprecision(6)<<zero/n<<endl;
}
