#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,m,curr=0,j=0,i=0;
cin>>a>>b>>m;
string bilangan;
getline(cin,bilangan);
vector<long double> z;
for(i=0;i<bilangan.length();i++){
    if(bilangan[i]==' '){
        fan=atoi(bilangan.substr(curr,curr-i).c_str());

        z.push_back(fan);
        curr=i;
        j++;
    }
}
fan=atoi(bilangan.substr(curr,curr-i).c_str());
        z.push_back(fan);

int x=z.size();
int qw;
qw = sqrt(x);

}
