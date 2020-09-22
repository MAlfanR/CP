#include<bits/stdc++.h>
using namespace std;

int main(){
string x = "KANGEN PERGI KE ITERA LAMPUNG";
string enkripsi ="SONY";
int n =0;
string result="";

for(int i=0 ; i<x.size();i++){
    if(isupper(x[i])){
        result+=char((int(x[i])+(int(enkripsi[n])-65)-65)%26 + 65);
        n = (n+1)%4;

    }else{
        result+=x[i];
    }
}

cout<<result<<endl;
}
