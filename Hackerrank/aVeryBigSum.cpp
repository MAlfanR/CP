#include <bits/stdc++.h>

using namespace std;



int main()
{
  long int b, n;
    cin >>n;
    long int a[n], sum=0;
  for(int i=0 ; i<n; i++){
      cin>>a[i];
        sum+=a[i];
  }
  cout<<sum<<endl;
}
