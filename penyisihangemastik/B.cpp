#include<bits/stdc++.h>
using namespace std;

int main(){

long double curr=0,j=0,i,fan,sum=0;
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
curr=0;
sort(z.begin(),z.end());

long long int tis =z.size();

long long int qw = tis-1;
for(i=0;i<qw;i++){
sum=sum+z[i];
}
if(sum>=z[tis-1]){
cout<<"MUNGKIN"<<endl;
}else{
cout<<"MUSTAHIL"<<endl;
}
}
