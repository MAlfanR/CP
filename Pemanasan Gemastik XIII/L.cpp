#include<bits/stdc++.h>
using namespace std;

string enkrip(string x, int n){
string result ="";
int sanggah;
if(n>=0){
    for(int i=0 ; i<x.size(); i++){
    if(isupper(x[i])){
        result+=char(int(x[i]+n-65)%26 + 65);
    }else if(islower(x[i])){
        result+=char(int(x[i]+n-97)%26 + 97);
    }else{
        result+=x[i];
        }
    }
}


return result;
}
int main(){

string x;
getline(cin, x);

int n;
cin>>n;

cout<<enkrip(x,n)<<endl;

return 0;
}
