#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;

int main(){

string s;

ulli sum=1, m=1000000007;

getline(cin, s);

for(int i=0 ;i<s.size(); i++){
    if(s[i]=='e'){
        if(s[i+1]=='u'){
            sum= (sum % m * 3 %m)%m;
            i++;
        }else{
            sum = (sum % m * 2 %m)%m;
        }
    }
}

cout<<sum <<endl;



}
