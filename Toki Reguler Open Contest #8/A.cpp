#include<bits/stdc++.h>
using namespace std;

int main(){
long long int x,c,a,sum;
cin>>x;
cin>>c;
cin>>a;
c = c*x/100;
sum = x-c;
a = a*sum/100;

sum = sum+a;
cout<<sum<<endl;
}
