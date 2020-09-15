#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ulli;
typedef long long int lli;

//e gajah
//h manusia
//a semut
int main(){

int  sumEko=0, sumGanesh=0, i=0;

string a;
char b;
getline(cin, a);

while(cin>>b){
    if(a[i] == 'e' && b =='h'){
        sumEko+=1;
    }else if(a[i]=='e' && b=='a'){
        sumGanesh+=1;
    }else if(a[i] == 'h' && b=='a'){
        sumEko+=1;
    }else if(a[i]=='h' && b=='e'){
        sumGanesh+=1;
    }else if(a[i]=='a' && b=='e'){
        sumEko+=1;
    }else if(a[i]=='a' && b=='h'){
        sumGanesh+=1;
    }
    i+=2;
}

if(sumEko == sumGanesh){
    cout<<"Draw"<<endl;
}else if( sumEko > sumGanesh){
    cout<<"Eko wins"<<endl;
}else{
    cout<<"Ganesh wins"<<endl;
}
}
