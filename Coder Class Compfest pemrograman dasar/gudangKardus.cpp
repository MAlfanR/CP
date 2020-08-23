#include<bits/stdc++.h>
using namespace std;

int main(){

long long int r, s, a,x, sum =0, n;

cin>>r>>s;

n = r/s;
int i=1;
a= pow(r,2)-pow(i*s,2);
while(a >0 ){
    a = sqrt(a);
    x = floor(2 *a /s);
    sum = sum+x;
    i++;
    a = pow(r,2) -pow(i*s,2) ;
}

cout<<sum<<endl;

return 0;
}
